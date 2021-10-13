#MSHANIVETHA
#Shell script to find ELF file in a given path and to print its size
#! /bin/bash
# path to the file
filepath="/home/amsa/class2/"
#To print ELF file in a given path
find $filepath -type f -exec head -c 4 {} \; -exec echo {} \;  | grep ^.ELF
#To find size
size=$( stat -c %s $filepath )
#displaying file size
echo "SIZE: $size bytes"
