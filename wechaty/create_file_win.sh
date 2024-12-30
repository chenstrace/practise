#!/bin/bash

# Check if a command line argument is provided
if [ -z "$1" ]; then
  echo "Please provide a filename as a command line argument."
  exit 4
fi

# Get the filename parameter
filename="$1"
remark_dir=".\\remark"

# Check if the file exists
if [ -e "$remark_dir\\$filename" ]; then
  echo "File already exists, opening file: $filename"
else
  if [ ! -e "100.py" ]; then
    echo "100.py file does not exist, cannot copy."
    exit 1
  fi

  echo "File does not exist, copying from 100.py to create file: $filename"
  cp 100.py "$remark_dir\\$filename" || { echo "Unable to copy file"; exit 2; }

  # Extract the filename without extension
  filename_without_extension="${filename%.*}"

  # Execute python3 remark.py -a filename_without_extension
  python3 remark.py -a "$filename_without_extension" || { echo "Unable to execute remark.py"; exit 3; }
fi

explorer "$remark_dir\\$filename"
echo "done"