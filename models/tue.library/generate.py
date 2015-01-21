#! /usr/bin/python

desks = [        
        [(-23.301, 14.405), (-17.394, 8.269)],  # A
        [(11.134, 14.291), (17.176, 8.598)],    # B


        [(-23.448, 4.419), (-17.571, -4.091)],  # C
        [(-13.474, 4.403), ( -5.596, -3.965)],  # D
        [( -1.378, 4.196), (  7.506, -3.786)],  # E
        [( 11.261, 4.615), ( 17.443, -3.776)],   # F


        [(-23.633, -7.928), (-17.354, -14.120)],  # G
        [(-13.526, -7.947), (-4.893, -14.219)],   # H
        [(-1.044, -7.636), (7.175, -13.962)],     # I
        [(11.380, -7.734), (17.616, -14.035)]     # J
    ]

f_model = open('model.yaml', 'w')
f_shape = open('shape/shape.xml', 'w')

f_model.write("""composition:
    - type: floor
      id: floor
      pose: { x: 0, y: 0, z: 0 }
    - id: desks-top
      type: tue.library.desks.top
      pose: {x: 0, y: 0, z: 0.7}
""")

f_shape.write('<model name="tue.library.desks">\n')

desk_names = ["A", "B", "C", "D", "E", "F", "G", "H", "I", "J"]

i_desk_name = 0
for desk in desks:
    f_model.write("\n")
    f_model.write("    # Desk " + desk_names[i_desk_name] + '\n')

    for j in  range(0, 2):
        for i in  range(0, 2):
            if i == 0:
                if j == 0:
                    rot = 3.1415
                else:
                    rot = -3.1415 / 2
            else:
                if j == 0:
                    rot = 3.1415 / 2
                else:
                    rot = 0

            #rot = 0 #j * 3.1415 + i * (3.1415 / 2)
            f_model.write('    - type: "tue.library.desk.corner"' + '\n')
            f_model.write('      id: "tue-library-desk-corner-' + desk_names[i_desk_name] + str(2 * j + i + 1) + '"\n')
            f_model.write('      pose: { x: ' + str(desk[i][0]) + ', y: ' + str(desk[j][1]) + ', z: 0.4, Z: ' + str(rot) + '}' + '\n')

    size_x = desk[1][0] - desk[0][0]
    size_y = desk[1][1] - desk[0][1]

    x = (desk[1][0] + desk[0][0]) / 2
    y = (desk[1][1] + desk[0][1]) / 2

    f_shape.write("\n") 
    f_shape.write("    <!-- Desk " + desk_names[i_desk_name] + " -->\n")

    f_shape.write("    <box>\n")
    f_shape.write("        <xyz>" + str(x) + " " + str(y) + " 0.4</xyz>\n")
    f_shape.write("        <size>" + str(size_x) + " " + str(size_y) + " 0.8</size>\n")
    f_shape.write("    </box>\n")


    i_desk_name += 1

f_shape.write('</model>\n')

f_model.close()
f_shape.close()

