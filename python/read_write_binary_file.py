import os


def file_put_contents(filename, data):
    success = True
    try:
        f = open(filename, "wb")
        try:
            f.write(data)
        except:
            success = False
        finally:
            f.close()
    except:
        success = False
    return success


def file_get_contents(filename):
    exists = os.path.exists(filename)
    if not exists:
        return False, ""
    success = True
    data = ""
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


success, data = file_get_contents("foo")
file_put_contents("another-foo", data)
