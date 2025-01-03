import os
import sys
import uuid
from datetime import datetime

import redis
from PIL import Image, ImageGrab


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
        print("push_to_redis Success")
    except Exception as e:
        print(f"Error pushing to Redis: {e}")


def convert_to_cygwin_path(win_path):
    drive, tail = os.path.splitdrive(win_path)
    cygwin_path = "/mnt/" + drive[0].lower() + tail.replace('\\', '/')
    return cygwin_path


MSG_LINE_INDEX = 99


def main():
    if len(sys.argv) < 2:
        print("Usage: python prog.py /path/to/filename.txt OR python prog.py a b c ...")
        sys.exit(1)

    r = redis.Redis(host='127.0.0.1', port=6379, db=0)

    if len(sys.argv) > 2:
        key = sys.argv[1]
        value = " ".join(sys.argv[2:])
        push_to_redis(r, key, value)
        sys.exit(2)

    filepath = sys.argv[1]

    if not os.path.exists(filepath):
        print(f"File does not exist: {filepath}")
        sys.exit(3)

    with open(filepath, 'r', encoding="utf-8") as file:
        lines = file.readlines()

    if len(lines) < MSG_LINE_INDEX + 1:
        print(f"Error: File does not have at least {MSG_LINE_INDEX + 1} lines.")
        sys.exit(4)

    file_contents = ''.join(lines[MSG_LINE_INDEX:])
    filename_with_extension = os.path.basename(filepath)
    filename = os.path.splitext(filename_with_extension)[0]

    if file_contents.endswith("paste"):
        img_path = create_image_file_from_clipboard()
        msg_ok = len(img_path) > 0 and os.path.isfile(img_path)
        file_contents += " " + img_path
    else:
        msg_ok = len(file_contents) > 0

    if msg_ok:
        push_to_redis(r, filename, file_contents)
        restore_file(filepath, lines)
    else:
        print("msg NOT ok")
        sys.exit(5)


def restore_file(filepath, lines):
    with open(filepath, 'w') as file:
        file.writelines(lines[:MSG_LINE_INDEX])
        file.flush()
        os.fsync(file.fileno())


if __name__ == "__main__":
    main()
