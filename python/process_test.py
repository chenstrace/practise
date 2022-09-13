import time
from multiprocessing import Process
import sys


def worker12(n):
    print(n, flush=True)
    time.sleep(30)


def worker34(n):
    print(n, flush=True)
    sys.exit(12)


if __name__ == '__main__':
    p12 = Process(target=worker12, args=('12',), name="worker12")
    p34 = Process(target=worker34, args=('34',), name="worker34")

    p12.start()
    p34.start()

    print('主线程')

    p12_joined = False
    p34_joined = False
    while True:
        if not p12.is_alive():
            p12.join()
            p12_joined = True

        if not p34.is_alive():
            p34.join()
            p34_joined = True

        if p12_joined and p34_joined:
            break
        time.sleep(1)

    print(p12.exitcode)
    print(p34.exitcode)
