import os
import sys
import time
import uuid

import redis
from PIL import Image, ImageGrab
from datetime import datetime


def create_image_file_from_clipboard():
    im = ImageGrab.grabclipboard()
    if not im:
        return ""
    if not isinstance(im, Image.Image):
        return ""
    height = im.height
    width = im.width
    if width <= 0 or height <= 0:
        return ""
    timestamp = datetime.now().strftime('%Y%m%d%H%M%S')
    uid = f"{timestamp}-{uuid.uuid4().hex}"
    screenshot_dir = os.path.join(os.path.expanduser('~'), 'wechaty', 'screenshot')

    os.makedirs(screenshot_dir, exist_ok=True)
    screenshot_file_path = os.path.join(screenshot_dir, uid + ".png")
    im.save(screenshot_file_path, 'PNG')
    return screenshot_file_path


def push_to_redis(r, key, value):
    try:
        r.rpush(key, value)
        print("Success")
    except Exception as e:
        print(f"Error pushing to Redis: {e}")


def convert_to_cygwin_path(win_path):
    drive, tail = os.path.splitdrive(win_path)
    cygwin_path = "/mnt/" + drive[0].lower() + tail.replace('\\', '/')
    return cygwin_path


def main():
    if len(sys.argv) < 2:
        print("Usage: python prog.py /path/to/filename.txt OR python prog.py a b c ...")
        return

    r = redis.Redis(host='127.0.0.1', port=6379, db=0)

    if len(sys.argv) == 2:
        filepath = sys.argv[1]

        if os.path.exists(filepath):
            with open(filepath, 'r', encoding="utf-8") as file:
                lines = file.readlines()

            # Check if there are fewer than 100 lines
            if len(lines) < 100:
                print("Error: File does not have at least 100 lines.")
                sys.exit(1)

            # Select content from the 100th line onwards
            file_contents = ''.join(lines[99:])  # Read from the 100th line
            filename_with_extension = os.path.basename(filepath)
            filename = os.path.splitext(filename_with_extension)[0]
            if not file_contents.endswith("paste"):
                msg_ok = len(file_contents) > 0
            else:
                img_path = create_image_file_from_clipboard()
                msg_ok = len(img_path) > 0 and os.path.isfile(img_path)

                file_contents += " " + img_path
            if msg_ok:
                push_to_redis(r, filename, file_contents)

                # restore file, so we can send another message
                with open(filepath, 'w') as file:
                    file.writelines(lines[:99])
                    file.flush()  # Flush the internal buffer to the OS buffer
                    os.fsync(file.fileno())  # Ensure it's written to disk
            else:
                print("msg NOT ok")

        else:
            print(f"File does not exist: {filepath}")

    else:
        key = sys.argv[1]
        value = " ".join(sys.argv[2:])
        push_to_redis(r, key, value)


if __name__ == "__main__":
    main()
