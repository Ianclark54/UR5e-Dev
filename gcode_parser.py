#Gcode interpreter
Gcode_file = r'C:\Users\iancl\OneDrive\SIDI Lab Project\ROS Code\Antigravity\40x40x40 Marlin.gcode'

def Parse(Gcode):
    with open(Gcode, 'r') as file:
        gcode_lines = file.readlines()
    return gcode_lines

# Store the result in a variable
gcode_list = Parse(Gcode_file)

# Print to verify it worked
print(f"Total lines: {len(gcode_list)}")
print("\nFirst 5 lines:")
for i, line in enumerate(gcode_list[:5], 1):
    print(f"{i}: {line.strip()}")
