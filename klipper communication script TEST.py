import subprocess
import sys

# Define the G-code command
Input = [100,1000]
command2 = f"_CLIENT_LINEAR_MOVE E={Input[0]} F={Input[1]}"
command1 = "M104 S200"

# Construct the bash script to execute
# Using 'tee' allows writing to the serial port file while also seeing output
script = f"echo {command2} | tee /home/iac933-admin/printer_data/comms/klippy.serial"

print(f"Sending command: {script}")

# Initialize the persistent shell process
try:
    process = subprocess.Popen(
        ["bash"],
        stdin=subprocess.PIPE,
        stdout=subprocess.PIPE,
        stderr=subprocess.PIPE,
        text=True,
        bufsize=1 # Line buffered
    )
except FileNotFoundError:
    print("Error: 'bash' not found. This script requires a Linux environment with bash.")
    sys.exit(1)

# Verify stdin is available
if process.stdin is None:
    print("Error: Failed to open stdin pipeline.")
    sys.exit(1)

# Write the command directly to the open process's stdin
try:
    process.stdin.write(f"{script}\n")
    process.stdin.flush()
    print("Command sent to shell process.")
except Exception as e:
    print(f"Error writing to process: {e}")

# Cleanup
process.stdin.close()
# process.terminate()  <-- Removed to let process finish
process.wait()
