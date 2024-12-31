#!/bin/bash

# Check if a command-line argument is provided
if [ -z "$1" ]; then
  echo "Please provide a filename as a command-line argument."
  exit 1
fi

# Get the filename parameter
filename="$1"
remark_dir=".\\remark"

# Extract the filename without extension
filename_without_extension="${filename%.*}"

# Execute python3 remark.py -d filename_without_extension
python remark.py -d "$filename_without_extension" || { echo "Unable to execute remark.py -d"; exit 2; }

# Delete the file
rm "$remark_dir/$filename"
echo "Deleted file: $remark_dir\\$filename"
