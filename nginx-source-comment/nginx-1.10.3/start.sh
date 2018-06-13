#!/bin/sh
killall -9 nginx
killall -9 gdb
cat /dev/null > logs/error.log
cat /dev/null > logs/access.log
objs/nginx -p ./
