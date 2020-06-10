#!/usr/bin/env bash

if ((  $# != 1 )); then
    echo "usage: ./build.sh /path/to/flex/file"
    exit 1
fi

flex $1
gcc lex.yy.c -lfl
