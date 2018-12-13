#!/bin/bash
phpbin=`which php`
awk -F "\"" '{print $2}' $1 |sed  s/'\\'x//g |perl -pe 'chomp if eof' | $phpbin hex2bin.php out.bin
