#!/bin/bash
printf $(awk -F "\"" '{print $2}' $1) > output.bin
