set -x
ragel -G2 test.rl
gcc -g test.c

