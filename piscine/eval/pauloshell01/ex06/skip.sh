ls -l | awk '{print; getline}'
# List the contents in long format.
# 'awk' to process each line of the output.
# '{print; getline}' prints the current line, then reads the next line.

