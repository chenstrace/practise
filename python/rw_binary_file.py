import os
from typing import Tuple


def file_put_contents(filename: str, data: bytes) -> bool:
    success = True
    try:
        f = open(filename, "wb")
        try:
            f.write(data)
        except Exception as e:
            success = False
        finally:
            f.close()
    except:
        success = False
    return success


def file_get_contents(filename: str) -> Tuple[bool, bytes]:
    if not os.path.isfile(filename):
        return False, b""
    success = True
    data = b""
    try:
        f = open(filename, "rb")
        try:
            data = f.read()
        except:
            success = False
        finally:
            f.close()
    except:
        success = False
    return success, data


def delete_file(path):
    try:
        if os.path.isfile(path):
            os.remove(path)
    except:
        pass

# if __name__ == '__main__':
#     success = file_put_contents("test.bin", b"\x01\x02\x03")
#     print("write file:", success)
#     success, b = file_get_contents("test.bin")
#     print("read file:", success, b)
