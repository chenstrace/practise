#!/bin/sh
killall -9 nginx
killall -9 gdb
cat /dev/null > logs/error.log
objs/nginx -p ./