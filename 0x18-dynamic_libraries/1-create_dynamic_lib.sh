#!/bin/bash

# Get all the .c files in the current directory
c_files=$(find . -maxdepth 1 -type f -name "*.c")

# Compile the .c files into object files
gcc -c -fPIC $c_files

# Create the dynamic library
gcc -shared -o liball.so *.o

# Clean up the object files
rm -f *.o

# Move the library to a desired location
# Uncomment the line below and replace the directory path as needed
# mv liball.so /path/to/desired/location
