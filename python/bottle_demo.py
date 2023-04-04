from bottle import route, run
import subprocess
import json


@route('/warp')
def warp():
    c = ["/bin/sh", "/home/ubuntu/use_warp.sh"]
    subprocess.call(c)
    return json.dumps({"code": 0, "msg": "warp success"})


@route('/eth0')
def eth0():
    c = ["/bin/sh", "/home/ubuntu/use_eth0.sh"]
    subprocess.call(c)
    return json.dumps({"code": 0, "msg": "eth0 success"})


@route('/')
def hello():
    return json.dumps({"code": 0, "msg": "pong"})


if __name__ == '__main__':
    run(host='0.0.0.0', port=8086)
