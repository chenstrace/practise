import sys
import time

import pyperclip
#"C:\\Python312\\pythonw.exe" "C:\\windows\\copy_linux_path.py" "%1"
def convert_to_linux_path(input_path):
    # Remove leading and trailing quotes if they exist
    if input_path.startswith("'") and input_path.endswith("'"):
        input_path = input_path[1:-1]

    # Normalize path by replacing backslashes with forward slashes
    normalized_path = input_path.replace("\\", "/")

    # Extract drive letter and the path without it
    drive_letter = normalized_path[0].lower()
    path_without_drive = normalized_path[2:]

    # Construct the Linux-style path
    linux_path = f"/mnt/{drive_letter}{path_without_drive}"

    return linux_path

if __name__ == "__main__":
    if len(sys.argv) > 1:
        input_path = sys.argv[1]
        linux_path = convert_to_linux_path(input_path)
        pyperclip.copy(linux_path)
        print("abcd")
        print("你好")
        time.sleep(10)
