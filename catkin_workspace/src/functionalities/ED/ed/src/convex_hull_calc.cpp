#include "ed/convex_hull_calc.h"

#include <opencv2/imgproc/imgproc.hpp>

namespace ed
{

namespace tracking
{

FITTINGMETHOD determineCase ( std::vector<geo::Vec2f>& points, unsigned int* cornerIndex, std::vector<geo::Vec2f>::iterator* it_low, std::vector<geo::Vec2f>::iterator* it_high )
{ // Determine is a line or a rectangle should be fitted. In case of a rectangle, the number of elements for both sides should meet the minimum number of points for a line fit
  // for both lines. Otherwise, a line will be fitted on the remaining points.

    bool includeCorner = findPossibleCorner ( points, *cornerIndex );

    *it_low = points.begin();
    *it_high = points.end();

    // We do not necessarily need to remove the points, only when we want to fit a line based on square data -> determine relevant positions
    if ( includeCorner ) {
        unsigned int nPointsLow = *cornerIndex + 1; // + 1 because the corner can be used for both lines
        unsigned int nPointsHigh = points.size() - nPointsLow + 1; // +1 because the point with max error is considered as the corner point and belongs to both lines
        unsigned int remainingSize = points.size();
	
        bool fitSingleline = false;
        bool pointsRemoved = false;
        if ( nPointsLow < MIN_POINTS_LINEFIT ) { // Part of section too smal -> remove it from the data which are analyzed and try to fit line again
            *it_low += *cornerIndex;
            remainingSize -= ( nPointsLow - 1 );
            pointsRemoved = true;
        }
        
        if ( nPointsHigh < MIN_POINTS_LINEFIT ) {
            //points.erase ( points.end() - ( int )  nPointsHigh + 1,points.end() );
            *it_high -= *cornerIndex;
            remainingSize -= (nPointsHigh - 1);
            pointsRemoved = true;
        }
        
        if ( pointsRemoved && remainingSize < MIN_POINTS_LINEFIT ) {
            *cornerIndex = std::numeric_limits<unsigned int>::quiet_NaN();
            return NONE;
        } else if ( pointsRemoved && remainingSize >= MIN_POINTS_LINEFIT ) {
            *cornerIndex = std::numeric_limits<unsigned int>::quiet_NaN();
	    
            return LINE;
        } else  { // we dit not remove points and a corner is present
            return RECTANGLE;
        }
        
    } else {
        return LINE;
    }


    return NONE;
}

float fitObject ( std::vector<geo::Vec2f>& points, geo::Pose3D& pose, int FITTINGMETHOD,  unsigned int* cornerIndex, ed::tracking::Rectangle* rectangle, ed::tracking::Circle* circle, unsigned int* ID, visualization_msgs::Marker* marker,  std::vector<geo::Vec2f>::iterator* it_low, std::vector<geo::Vec2f>::iterator* it_high )
{

    switch ( FITTINGMETHOD ) {
    case NONE: {
        return std::numeric_limits<float>::infinity();
    }
    case LINE: {
        // fit line, determine length using least-squares method to determine theta
        Eigen::VectorXd beta_hat ( 2 );
        float mean_error2 = fitLine ( points, beta_hat, *it_low, *it_high ) ;
        float theta = atan2 ( beta_hat ( 1 ), 1 );

        unsigned int ii_start = std::distance ( points.begin(), *it_low );
        float x_start = points[ii_start].x;
        float y_start = points[ii_start].y; // better to rely on the original points: extreme outliers are already filtered out due to segmentation

        unsigned int ii_end = std::distance ( points.begin(), *it_high );
        float x_end = points[ii_end - 1].x; // considered to be rebust to rely on 1 point, as these are filtered out already during the segmantation phase
        float y_end = points[ii_end - 1].y;

        float dx = x_end - x_start;
        float dy = y_start - y_end;
        float width = sqrt ( dx*dx+dy*dy );

        float reference_x = 0.5* ( x_start + x_end );
        float reference_y = 0.5* ( y_start + y_end );
	
        rectangle->setValues ( reference_x, reference_y, width, ARBITRARY_DEPTH, ARBITRARY_HEIGHT, theta );

        return mean_error2;
    }

    case CIRCLE: {

        float mean_error2 = fitCircle ( points, circle, pose );
        return mean_error2;

    }
    case RECTANGLE: {
        float mean_error2 = fitRectangle ( points, rectangle, pose , cornerIndex );
        return mean_error2;
    }
    }
    return false; // end reached without doing something
}

//Fast Line, Arc/Circle and Leg Detection from Laser Scan Data in a Player Driver: http://miarn.sourceforge.net/pdf/a1738b.pdf
float fitCircle ( std::vector<geo::Vec2f>& points, ed::tracking::Circle* circle, geo::Pose3D& pose )
{

    // according to https://dtcenter.org/met/users/docs/write_ups/circle_fit.pdf
    float x_avg = 0.0, y_avg = 0.0;
    for ( unsigned int i = 0; i < points.size(); ++i ) {
        x_avg += points[i].x;
        y_avg += points[i].y;
    }

    x_avg /= points.size();
    y_avg /= points.size();

    std::vector<float> ui ( points.size() ), vi ( points.size() );
    float Suu = 0.0, Suv = 0.0, Suuu = 0.0, Suvv = 0.0, Svv = 0.0, Svvv = 0.0, Svuu = 0.0;
    for ( unsigned int i = 0; i < points.size(); ++i ) {
        ui[i] = points[i].x -x_avg;
        vi[i] = points[i].y -y_avg;

        Suu += ui[i]*ui[i];
        Suv += ui[i]*vi[i];
        Suuu += ui[i]*ui[i]*ui[i];
        Suvv += ui[i]*vi[i]*vi[i];

        Svv += vi[i]*vi[i];
        Svvv += vi[i]*vi[i]*vi[i];
        Svuu += vi[i]*ui[i]*ui[i];
    }

    float a = Suu;
    float b = Suv;
    float c = 0.5* ( Suuu+Suvv );
    float d = Suv;
    float e = Svv;
    float f = 0.5* ( Svvv+Svuu );

    float vc = ( f - c*d/a ) / ( e-b*d/a );
    float uc = ( c-vc*b ) /a;

    float xc = uc+x_avg;
    float yc = vc+y_avg;

    float alpha = uc*uc+vc*vc+ ( Suu+Svv ) /points.size();
    float R = std::sqrt ( alpha );

    float sum = 0.0;
    for ( unsigned int i = 0; i < points.size(); ++i ) {
        float error = fabs ( sqrt ( pow ( xc - points[i].x, 2.0 ) + pow ( yc - points[i].y, 2.0 ) ) - R ); // distance between a point and a circle;
	float error2 = pow(error, 2.0);
        sum += error2;
        /*if ( error > MAX_LINE_ERROR ) {
                return false;
            }
            */
    }

    circle->setValues ( xc, yc,  R );
    return sum/points.size();
}

void Circle::setValues ( float x, float y, float R )
{
    x_ = x;
    y_ = y;
    R_ = R;
}

void Circle::printValues ( )
{
    std::cout << "x_ = " << x_;
    std::cout << " y_ = " << y_;
    std::cout << " R_ = " << R_<< std::endl;
}

void Circle::setMarker ( visualization_msgs::Marker& marker , unsigned int ID, const geo::Pose3D& sensor_pose )
{
    marker.header.frame_id = "/map";
    marker.header.stamp = ros::Time();
    marker.ns = "my_namespace";
    marker.id = ID;
    marker.type = visualization_msgs::Marker::CYLINDER;
    marker.action = visualization_msgs::Marker::ADD;
    marker.pose.position.x = x_;
    marker.pose.position.y = y_;
    marker.pose.position.z = sensor_pose.getOrigin().getZ();
    marker.pose.orientation.x = 0.0;
    marker.pose.orientation.y = 0.0;
    marker.pose.orientation.z = 0.0;
    marker.pose.orientation.w = 1.0;
    marker.scale.x = 2*R_;
    marker.scale.y = 2*R_;
    marker.scale.z = 0.1;
    marker.color.a = 1.0;
    marker.color.r = 0.0;
    marker.color.g = 1.0;
    marker.color.b = 0.0;

    marker.lifetime = ros::Duration ( TIMEOUT_TIME );
}

float fitRectangle ( std::vector<geo::Vec2f>& points, ed::tracking::Rectangle* rectangle, geo::Pose3D& pose , unsigned int* cornerIndex )
{
    std::vector<geo::Vec2f>::iterator it_split = points.begin() + *cornerIndex;

    Eigen::VectorXd beta_hat1 ( 2 ), beta_hat2 ( 2 );
    bool validFit1, validFit2;

    float mean_error1 = fitLine ( points, beta_hat1, points.begin(), it_split );
    float mean_error2 = fitLine ( points, beta_hat2, it_split, points.end() );

    float x_start1 = points[0].x; // Is this correct in combination with theta?
    float y_start1 = beta_hat1 ( 1 ) * x_start1 + beta_hat1 ( 0 );

    //determine width and height
    float x_end = points[*cornerIndex].x;
    float y_end = points[*cornerIndex].y;
    float dx = x_start1 - x_end;
    float dy = y_start1 - y_end;
    float width = sqrt ( dx*dx+dy*dy );
    float theta = atan2 ( beta_hat1 ( 1 ), 1 ); // TODO: angle on points low alone?

    float x_start2 = points[*cornerIndex].x;
    float y_start2 = points[*cornerIndex].y;
    //y_start = beta_hat2 ( 1 ) * x_start + beta_hat2 ( 0 );

    float x_end2 = points[points.size() - 1].x;
    float y_end2 = points[points.size() - 1].y;
    dx = x_end2 - x_start2;
    dy = y_start2 - y_end2;
    float depth = sqrt ( dx*dx+dy*dy );
    
    float center_x = 0.5*(x_start1 + x_end) + 0.5*(x_end2-x_start2);
    float center_y = 0.5*(y_start1 + y_end) + 0.5*(y_end2-y_start2);
    
    rectangle->setValues ( center_x, center_y, width, depth, ARBITRARY_HEIGHT, theta );

    unsigned int low_size = *cornerIndex;
    unsigned int high_size = points.size() - *cornerIndex + 1;
    return ( mean_error1*low_size+mean_error2*high_size ) / ( low_size + high_size ); // average of error
}

bool findPossibleCorner ( std::vector<geo::Vec2f>& points, unsigned int &ID )
{
    geo::Vec2f startPoint = points[0];
    geo::Vec2f endPoint = points[points.size() - 1];

    float a = endPoint.y-startPoint.y;
    float b = endPoint.x-startPoint.x;
    float c = endPoint.x*startPoint.y-endPoint.y*startPoint.x;

    float length = sqrt ( pow ( a,2.0 ) + pow ( b,2.0 ) );

    float maxDistance = 0.0;

    ID = std::numeric_limits<unsigned int>::quiet_NaN();
    for ( unsigned int ii = 1; ii < points.size() - 1; ++ii ) 
    {
        float distance = fabs ( a* ( points[ii].x )-b* ( points[ii].y ) +c ) / length;
	
        if ( distance > maxDistance ) 
	{
            maxDistance = distance;
            ID = ii;
        }
    }

    if ( maxDistance >  MIN_DISTANCE_CORNER_DETECTION ) 
    {
        return true;
    } else {
        return false;
    }
}

float fitLine ( std::vector<geo::Vec2f>& points, Eigen::VectorXd& beta_hat, std::vector<geo::Vec2f>::iterator it_start, std::vector<geo::Vec2f>::iterator it_end )  //, unsigned int& index ) 
{
    // Least squares method: http://home.isr.uc.pt/~cpremebida/files_cp/Segmentation%20and%20Geometric%20Primitives%20Extraction%20from%202D%20Laser%20Range%20Data%20for%20Mobile%20Robot%20Applications.pdf

    unsigned int size = std::distance ( it_start, it_end );;
    Eigen::MatrixXd m ( size, 2 );
    Eigen::VectorXd y ( size );
    unsigned int counter = 0;
    unsigned int start = std::distance ( points.begin(), it_start );
    unsigned int end = std::distance ( points.begin(), it_end );
    
    for ( unsigned int ii = start; ii < end; ++ii ) {
        m ( counter, 0 ) = ( double ) 1.0;
        m ( counter, 1 ) = ( double ) points[start + counter].x;
        y ( counter ) = ( double ) points[start + counter].y;
        counter++;
    }

    Eigen::MatrixXd mt ( size, 2 );
    mt = m.transpose();

    beta_hat = ( mt*m ).inverse() * mt * y;

    float error, sum = 0.0;

    counter = 0;
    for ( std::vector<geo::Vec2f>::iterator it = it_start; it != it_end; ++it ) {
        // Distance of each point to line
        error = fabs ( -beta_hat ( 1 ) * points[start + counter].x+points[start + counter].y - beta_hat ( 0 ) ) /sqrt ( beta_hat ( 1 ) *beta_hat ( 1 ) + 1 ); // distance of a point to a line
	float error2 = pow(error, 2.0);
        sum += error2;
        counter ++;
    }

    return sum/counter;
}

void Rectangle::setValues ( float x, float y, float w, float d, float h, float theta )
{
    x_ = x;
    y_ = y;
    w_ = w;
    d_ = d;
    h_ = h;
    theta_ = theta;
}

void Rectangle::printValues ( )
{
    std::cout << "x_ = " << x_;
    std::cout << " y_ = " << y_;
    std::cout << " w_ = " << w_;
    std::cout << " d_ = " << d_;
    std::cout << " h_ = " << h_;
    std::cout << " theta_ = " << theta_ << std::endl;
}

void Rectangle::setMarker ( visualization_msgs::Marker& marker, unsigned int ID, const geo::Pose3D& sensor_pose )
{
    // How to incorporate the rotation? -> should follow from the lines
    marker.header.frame_id = "/map";
    marker.header.stamp = ros::Time();
    marker.ns = "my_namespace";
    marker.id = ID;
    marker.type = visualization_msgs::Marker::CUBE;
    marker.action = visualization_msgs::Marker::ADD;
    marker.pose.position.x = x_;
    marker.pose.position.y = y_;
    marker.pose.position.z = sensor_pose.getOrigin().getZ();
    marker.pose.orientation = tf::createQuaternionMsgFromRollPitchYaw ( 0.0, 0.0, theta_ );
    marker.scale.x = w_;
    marker.scale.y = d_;
    marker.scale.z = 0.1;
    marker.color.a = 1.0;
    marker.color.r = 0.0;
    marker.color.g = 1.0;
    marker.color.b = 0.0;

    marker.lifetime = ros::Duration ( TIMEOUT_TIME );
}

void wrapToInterval ( float* alpha, float lowerBound, float upperBound )
{
    float delta = upperBound - lowerBound;

    if ( *alpha < lowerBound ) {
        while ( *alpha < lowerBound ) {
            *alpha += delta;
        }
    } else if ( *alpha >= lowerBound ) {
        while ( *alpha >= lowerBound ) {
            *alpha -= delta;
        }
    }

}

probabilitySet determineFeatureProbabilities(float errorRectangleSquared, float errorCircleSquared, float circleDiameter, float typicalCorridorWidth)
{  
  
  std::cout << "Error rectangle, circle =  " << errorRectangleSquared << ", " << errorCircleSquared << std::endl;
  
  std::cout << "circleRadius = " << circleDiameter << std::endl;
    

  float probabilityScaling = 1.0;
  if( circleDiameter > 0.5*typicalCorridorWidth )
  {
    // Circles with a very large radius could have a smaller error compared to fitting a line. For the type of environment, this is very unlikely. 
    // Therefore, the probability of large circles is reduced in an exponential fashion 
    probabilityScaling = std::exp( -1/(0.5*typicalCorridorWidth)*(circleDiameter -0.5*typicalCorridorWidth) ); 
  }
  
  probabilitySet pSet; 
  float sum = errorRectangleSquared + errorCircleSquared;
  pSet.pCircle = probabilityScaling * errorRectangleSquared/sum;
  pSet.pRectangle = 1.0 - pSet.pCircle;
  
  return pSet;    
}


}

namespace convex_hull
{
// ----------------------------------------------------------------------------------------------------

void create ( const std::vector<geo::Vec2f>& points, float z_min, float z_max, ConvexHull& chull, geo::Pose3D& pose )
{
    cv::Mat_<cv::Vec2f> points_2d ( 1, points.size() );
    for ( unsigned int i = 0; i < points.size(); ++i ) {
        points_2d.at<cv::Vec2f> ( i ) = cv::Vec2f ( points[i].x, points[i].y );
    }

    pose = geo::Pose3D::identity();

    pose.t.z = ( z_min + z_max ) / 2;

    std::vector<int> chull_indices;
    cv::convexHull ( points_2d, chull_indices );

    chull.z_min = z_min - pose.t.z;
    chull.z_max = z_max - pose.t.z;

    geo::Vec2f xy_min ( 1e9, 1e9 );
    geo::Vec2f xy_max ( -1e9, -1e9 );

    chull.points.clear();
    for ( unsigned int i = 0; i < chull_indices.size(); ++i ) {
        const cv::Vec2f& p_cv = points_2d.at<cv::Vec2f> ( chull_indices[i] );
        geo::Vec2f p ( p_cv[0], p_cv[1] );

        chull.points.push_back ( p );

        xy_min.x = std::min ( xy_min.x, p.x );
        xy_min.y = std::min ( xy_min.y, p.y );

        xy_max.x = std::max ( xy_max.x, p.x );
        xy_max.y = std::max ( xy_max.y, p.y );
    }

    // Average segment position
    pose.t.x = ( xy_min.x + xy_max.x ) / 2;
    pose.t.y = ( xy_min.y + xy_max.y ) / 2;

    // Move all points to the pose frame
    for ( unsigned int i = 0; i < chull.points.size(); ++i ) {
        geo::Vec2f& p = chull.points[i];
        p.x -= pose.t.x;
        p.y -= pose.t.y;
    }

    // Calculate normals and edges
    convex_hull::calculateEdgesAndNormals ( chull );

    // Calculate area
    calculateArea ( chull );
}

// ----------------------------------------------------------------------------------------------------

void createAbsolute ( const std::vector<geo::Vec2f>& points, float z_min, float z_max, ConvexHull& c )
{
    cv::Mat_<cv::Vec2f> points_2d ( 1, points.size() );
    for ( unsigned int i = 0; i < points.size(); ++i ) {
        points_2d.at<cv::Vec2f> ( i ) = cv::Vec2f ( points[i].x, points[i].y );
    }

    c.z_min = z_min;
    c.z_max = z_max;

    std::vector<int> chull_indices;
    cv::convexHull ( points_2d, chull_indices );

    c.points.resize ( chull_indices.size() );
    for ( unsigned int i = 0; i < chull_indices.size(); ++i ) {
        const cv::Vec2f& p_cv = points_2d.at<cv::Vec2f> ( chull_indices[i] );
        c.points[i] = geo::Vec2f ( p_cv[0], p_cv[1] );
    }

    // Calculate normals and edges
    convex_hull::calculateEdgesAndNormals ( c );

    // Calculate area
    calculateArea ( c );
}

// ----------------------------------------------------------------------------------------------------

void calculateEdgesAndNormals ( ConvexHull& c )
{
    c.edges.resize ( c.points.size() );
    c.normals.resize ( c.points.size() );

    for ( unsigned int i = 0; i < c.points.size(); ++i ) {
        unsigned int j = ( i + 1 ) % c.points.size();

        const geo::Vec2f& p1 = c.points[i];
        const geo::Vec2f& p2 = c.points[j];

        // Calculate edge
        geo::Vec2f e = p2 - p1;
        c.edges[i] = e;

        // Calculate normal
        c.normals[i] = geo::Vec2f ( e.y, -e.x ).normalized();
    }
}

// ----------------------------------------------------------------------------------------------------

bool collide ( const ConvexHull& c1, const geo::Vector3& pos1,
               const ConvexHull& c2, const geo::Vector3& pos2,
               float xy_padding, float z_padding )
{
    if ( c1.points.size() < 3 || c2.points.size() < 3 ) {
        return false;
    }

    float z_diff = pos2.z - pos1.z;

    if ( c1.z_max < ( c2.z_min + z_diff - 2 * z_padding ) || c2.z_max < ( c1.z_min - z_diff - 2 * z_padding ) ) {
        return false;
    }

    geo::Vec2f pos_diff ( pos2.x - pos1.x, pos2.y - pos1.y );

    for ( unsigned int i = 0; i < c1.points.size(); ++i ) {
        const geo::Vec2f& p1 = c1.points[i];
        const geo::Vec2f& n = c1.normals[i];

        // Calculate min and max projection of c1
        float min1 = n.dot ( c1.points[0] - p1 );
        float max1 = min1;
        for ( unsigned int k = 1; k < c1.points.size(); ++k ) {
            // Calculate projection
            float p = n.dot ( c1.points[k] - p1 );
            min1 = std::min ( min1, p );
            max1 = std::max ( max1, p );
        }

        // Apply padding to both sides
        min1 -= xy_padding;
        max1 += xy_padding;

        // Calculate p1 in c2's frame
        geo::Vec2f p1_c2 = p1 - pos_diff;

        // If this bool stays true, there is definitely no collision
        bool no_collision = true;

        // True if projected points are found below c1's bounds
        bool below = false;

        // True if projected points are found above c1's bounds
        bool above = false;

        // Check if c2's points overlap with c1's bounds
        for ( unsigned int k = 0; k < c2.points.size(); ++k ) {
            // Calculate projection on p1's normal
            float p = n.dot ( c2.points[k] - p1_c2 );

            below = below || ( p < max1 );
            above = above || ( p > min1 );

            if ( below && above ) {
                // There is overlap with c1's bound, so we may have a collision
                no_collision = false;
                break;
            }
        }

        if ( no_collision )
            // definitely no collision
        {
            return false;
        }
    }

    return true;
}

// ----------------------------------------------------------------------------------------------------

void calculateArea ( ConvexHull& c )
{
    c.area = 0;
    for ( unsigned int i = 0; i < c.points.size(); ++i ) {
        unsigned int j = ( i + 1 ) % c.points.size();

        const geo::Vec2f& p1 = c.points[i];
        const geo::Vec2f& p2 = c.points[j];

        c.area += 0.5 * ( p1.x * p2.y - p2.x * p1.y );
    }
}

// ----------------------------------------------------------------------------------------------------

}

}
