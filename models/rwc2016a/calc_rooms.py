import sys

if len(sys.argv) <= 1:
    print "Please provide room file"
    sys.exit(1)

room_filename = sys.argv[1]

data = {}

with open(room_filename) as f:
    for line in f:
        line = line.strip()
        if not line:
            continue

        args = [arg.strip() for arg in line.split(";")]
        room = args[0]

        if not room in data:
            data[room] = {}

        data[room][args[1]] = (float(args[2].replace(",",".")), float(args[3].replace(",",".")))

for (room, info) in data.iteritems():
    min = info["min"]
    max = info["max"]
    center = info["center"]

    rel_min = (min[0] - center[0], min[1] - center[1])
    rel_max = (max[0] - center[0], max[1] - center[1])

    print """- type: "room"
  id: "%s"
  pose: { x: %.2f, y: %.2f, z: 0 }
  areas:
  - name: in
    shape:
    - box:
        min: { x: %.2f, y: %.2f, z: 0 }
        max: { x: %.2f, y: %.2f, z: 0.01 }""" % (room, center[0], center[1], rel_min[0], rel_min[1], rel_max[0], rel_max[1])
