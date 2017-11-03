
// Module names are of the form poly_<inkscape-path-id>().  As a result,
// you can associate a polygon in this OpenSCAD program with the corresponding
// SVG element in the Inkscape document by looking for the XML element with
// the attribute id="inkscape-path-id".
// fudge value is used to ensure that subtracted solids are a tad taller
// in the z dimension than the polygon being subtracted from.  This helps
// keep the resulting .stl file manifold.
fudge = 0.1;

module poly_path3410(h)
{
  scale([25.4/90, -25.4/90, 1]) union()
  {
    linear_extrude(height=h)
      polygon([[-7573.818712,-4517.716425],[-7573.818712,-4429.133750],[-4827.755788,-4429.133750],[-2081.692863,-4429.133750],[-2081.692863,-2790.354262],[-2081.692863,-1151.574775],[-841.535412,-1151.574775],[398.622038,-1151.574775],[398.622038,-2790.354262],[398.622038,-4429.133750],[1860.236175,-4429.133750],[3321.850313,-4429.133750],[3321.850313,-2834.645600],[3321.850313,-1240.157450],[5447.834512,-1240.157450],[7573.818713,-1240.157450],[7573.818713,-2923.228275],[7573.818713,-4606.299100],[0.000000,-4606.299100],[-7573.818712,-4606.299100],[-7573.818712,-4517.716425]]);
  }
}

module poly_path3412(h)
{
  scale([25.4/90, -25.4/90, 1]) union()
  {
    linear_extrude(height=h)
      polygon([[-3764.763687,3410.432988],[-3764.763687,4606.299100],[-2170.275537,4606.299100],[-575.787387,4606.299100],[-575.787387,3410.432988],[-575.787387,2214.566875],[-2170.275537,2214.566875],[-3764.763687,2214.566875],[-3764.763687,3410.432988]]);
  }
}

module inkscape(h)
{

poly_path3410(h);
poly_path3412(h);
}

inkscape(1000);
