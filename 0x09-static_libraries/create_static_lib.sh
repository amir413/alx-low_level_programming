#!/bin/bash

# Compile each .c file into object files
gcc -c *.c

# Create the static library liball.a
ar rcs liball.a *.o

# Clean up object files
rm *.o

