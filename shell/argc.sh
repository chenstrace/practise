#!/usr/bin/env bash

#sh ./build.sh abc , $# will be 1
if ((  $# != 1 )); then
    echo "usage: ./build.sh /path/to/flex/file"
    exit 1
fi

flex $#
gcc lex.yy.c -lfl
