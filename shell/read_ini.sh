#!/bin/sh

function read_ini
{
INIFILE=$1
SECTION=$2
ITEM=$3
value="`awk -F '=' '/\['$SECTION'\]/{a=1}a==1&&$1~/'$ITEM'/{print $2; exit}' $INIFILE`"
echo ${value}
}

read_ini $1 $2 $3
