#! /usr/bin/python

"""Module docstring.

This serves as a long usage message.
"""
import sys
import getopt
import yaml
import os

ROOT=os.environ['ED_MODEL_PATH']
DEFAULT_BOTTOM_CLEARANCE = 0.02  # The 'onTopOff' area will start DEFAULT_BOTTOM_CLEARANCE above an object
DEFAULT_SIDE_CLEARANCE = 0.0  # The 'onTopOff' area will start DEFAULT_SIDE_CLEARANCE above an object
ON_TOP_OFF_HEIGHT = 0.3 # Height of an 'onTopOff' box

# ----------------------------------------------------------------------------------------------------

def read_option(message, options = [], default = None, help = None):
    while True:
        option = raw_input(message)
        if option == "?":
            if help:
                print help
            else:
                print "Possible options: %s" % options
        elif options and option in options:
            return option
        elif not options:
            return option
        elif not option:
            print "Please specify an option"
        else:
            print "Unknown option. Options are: {}".format(options)

def read_float(message, default = None, help = None):
    while True:
        option = raw_input(message)
        if not option:
            if default != None:
                return default
            else:
                print "Please provide a value."
        elif option == "?":
            if help:
                print help
            else:
                print "Please provide a number"
        else:
            try:
                return float(option)
            except ValueError:
                print "Expected a number."
                pass

# ----------------------------------------------------------------------------------------------------

class ShapeCreator:

    def __init__(self, room, model_name):
        folderpath=os.path.join(ROOT,room,model_name)
        filepath=os.path.join(folderpath, 'model.yaml')
        if os.path.exists(filepath):
            print "Model name already used in this room"
            #sys.exit()
        if not os.path.exists(folderpath):
            os.makedirs(folderpath)
        else:
            print """
Folder name is already used, no model found. Keep directory clean!
Continu with creating your model"""

        self.f = open(filepath, "w")
        #self.f.write("shape:\n")
        #self.f.write("    compound:\n")
        #self.indent = "    "

        self.data = {'type': '', 'shape': {'compound': []},
                     'color': {'red': 0.75, 'green': 0.75, 'blue': 0.75},
                     'areas': []}

    def write(self):
        self.f.write(yaml.safe_dump(self.data, default_flow_style=False, indent=4))

    def set_type(self, t):
        """ Sets the type of the model
        :param t: string with the type of the model
        """
        self.data['type'] = t

    def add_box(self, l, w, h, x, y, z, comment = ""):
        self.data['shape']['compound'].append({'box': {'#': comment,'pose': {'x': x, 'y': y, 'z': z},
                                                       'size': {'x': l, 'y': w, 'z': h}}})

        #self.f.write("%s  - box:\n" % self.indent)
        #if comment:
        #    self.f.write("%s        # %s\n" % (self.indent, comment))
        #self.f.write("%s        pose: {x: %s, y: %s, z: %s}\n" % (self.indent, x, y, z))
        #self.f.write("%s        size: {x: %s, y: %s, z: %s}\n" % (self.indent, l, w, h))

    def add_area(self):
        pass

    def add_on_top_off(self, bottom_clearance=DEFAULT_BOTTOM_CLEARANCE,
                             side_clearance=DEFAULT_SIDE_CLEARANCE,
                             height=ON_TOP_OFF_HEIGHT):
        """ Adds an on_top_off_area to the model. This must be called right after the element w.r.t.
        which the on_top_off is specified (e.g., the table top) has been added.
        :param bottom clearance: float with the clearance between the model and the on_top_off box
        :param side_clearance: float with the clearance between the sides of the model and the on_top_off_box
        :param height: float with the height of the box
        """
        if len(self.data['shape']['compound']) == 0:
            print "No shapes yet, cannot add ontopoff"
            return
        else:
            shape = self.data['shape']['compound'][-1]
        if not 'box' in shape:
            print "No box in this shape, cannot add ontopoff"
            return

        pose = shape['box']['pose']
        size = shape['box']['size']

        boxmin = {'x': pose['x'] - size['x']/2.0 + side_clearance,
                  'y': pose['y'] - size['y']/2.0 + side_clearance,
                  'z': pose['z'] + size['z']/2.0 + bottom_clearance}
        boxmax = {'x': pose['x'] + size['x']/2.0 - side_clearance,
                  'y': pose['y'] + size['y']/2.0 - side_clearance,
                  'z': pose['z'] + size['z']/2.0 + bottom_clearance + height}
        self.data['areas'].append({'name': 'on_top_off',
                                   'shape': [{'box': {'min': boxmin, 'max': boxmax}}]})

    def add_near(self, offset=0.7):
        """ Adds an 'near' area to the model with given offset
        :param offset: float with the offset w.r.t. the model edges
        """
        self.data['areas'].append({'name': 'near', 'offset': offset})
# ----------------------------------------------------------------------------------------------------

def main():

    print ""
    print """Answer the questions given. If you do not understand, give '?' as input.
A 'model.yaml' file will be created which can be used as ED model.
All lengths / distances are in meters, unless specified otherwise."""
    print ""

    room = read_option("Room: ")
    model_type = read_option("Model type: ", ["table", "cabinet"])
    model_name = read_option("Model name: ")

    s = ShapeCreator(room,model_name)
    s.set_type(model_type)

    if model_type == "table":

        print ""
        height = read_float("Height: ", help = "Distance from ground to top of the table [m]")
        length = read_float("Length: ", help = "Table length [m]")
        width  = read_float("Width:  ", help = "Table width [m]")

        print ""
        table_top_thickness = read_float("Table top thickness [m]: ")

        print ""
        lt = read_float("Leg thickness: ", help = "We assume square legs. How wide / thick are the legs?")
        lx_offset = read_float("Optional: Leg offset (length) [m]: ", 0,
            help = "(Optional) How far are the legs places inwards w.r.t. the table top (in the length direction)")
        ly_offset = read_float("Optional: Leg offset (width) [m]:  ", lx_offset,
            help = "(Optional) How far are the legs places inwards w.r.t. the table top (in the width direction)")

        s.add_near()
        s.add_box(length, width, table_top_thickness, 0, 0, round(height - table_top_thickness / 2,3), "Table top")
        s.add_on_top_off()

        lx = round((length - lt) / 2 - lx_offset,3)
        ly = round((width  - lt) / 2 - ly_offset,3)
        lh = round(height - table_top_thickness,3)
        lz = round(lh / 2,3)

        s.add_box(lt, lt, lh, -lx, -ly, lz, "Leg")
        s.add_box(lt, lt, lh,  lx, -ly, lz, "Leg")
        s.add_box(lt, lt, lh, -lx,  ly, lz, "Leg")
        s.add_box(lt, lt, lh,  lx,  ly, lz, "Leg")

    elif model_type == "cabinet":

        print ""
        height = read_float("Height [m]: ", help = "Distance from ground to top of the cabinet (including frame)")
        width  = read_float("Width [m]:  ", help = "Cabinet width (including frame)")
        depth  = read_float("Depth [m]:  ", help = "Cabinet depth (including frame)")
        thickness = read_float("Frame thickness: ", help = "How thick are the panels that define the cabinet frame (not the shelves)?")

        print ""
        shelf_heights = []
        while True:
            shelf_height = read_float("Shelf %s, height [m]: " % (len(shelf_heights) + 1), 0,
                help = "Distance from ground to top of shelf. Leave empty if all shelves have been entered")
            if shelf_height == 0:
                break
            shelf_heights += [shelf_height]

        shelf_thickness = shelf_heights
        for shelf_i in range(0,(len(shelf_heights))):
            shelf_thickness[shelf_i] = read_float("Thickness of shelf %s: " %(shelf_i+1))
        #if shelf_heights:
        #    shelf_thickness = read_float("Shelf thickness: ", help = "How thick are the shelves?")

        s.add_box(depth, thickness, height, 0, round(-(width - thickness) / 2,3), round(height / 2,3), "Left side")
        s.add_box(depth, thickness, height, 0, round((width - thickness) / 2,3), round(height / 2,3), "Right side")
        s.add_box(thickness, width, height,  round(-(depth - thickness) / 2,3), 0, height / 2, "Back side")

        pl_depth = round(depth - thickness,3)
        pl_width = round((width - (thickness * 2)),3)
        pl_x = round((thickness / 2),3)

        s.add_box(pl_depth, pl_width, thickness, pl_x, 0, round(height - (thickness / 2),3), "Top")

        for shelf_height in shelf_heights:
            s.add_box(pl_depth, pl_width, shelf_thickness[shelf_height], pl_x, 0, round(shelf_height - (shelf_thickness / 2),3), "Shelf")

    s.write()

if __name__ == "__main__":
    sys.exit(main())
