import os
from typing import Tuple


# noinspection PyBroadException
def file_put_contents(filepath: str, data: bytes) -> bool:
    success = True
    try:
        f = open(filepath, "wb")
        try:
            f.write(data)
        except:
            success = False
        finally:
            f.close()
    except:
        success = False
    return success


# noinspection PyBroadException
def file_get_contents(filepath: str) -> Tuple[bool, bytes]:
    if not os.path.isfile(filepath):
        return False, b""
    success = True
    data = b""
    try:
        f = open(filepath, "rb")
        try:
            data = f.read()
        except:
            success = False
        finally:
            f.close()
    except:
        success = False
    return success, data


# noinspection PyBroadException
def delete_file(filepath):
    try:
        if os.path.isfile(filepath):
            os.remove(filepath)
    except:
        pass


# noinspection PyBroadException
def md5_file(filepath):
    try:
        hash_md5 = hashlib.md5()
        with open(filepath, "rb") as f:
            for chunk in iter(lambda: f.read(4096), b""):
                hash_md5.update(chunk)
        return hash_md5.hexdigest()
    except:
        return ""


def count_files_in_directory(directory_path, file_suffix=None):
    try:
        if not os.path.isdir(directory_path):
            raise ValueError("The provided path is not a valid directory.")

        file_count = 0
        for item in os.listdir(directory_path):
            item_path = os.path.join(directory_path, item)
            if os.path.isfile(item_path) and not item.startswith('.'):
                if file_suffix is None or item.endswith(file_suffix):
                    file_count += 1

        return file_count

    except Exception as e:
        print(f"An error occurred: {e}", flush=True)
        return 0
