set -x
yanshi -C -S a.ys -o test.cc
g++ -g test.cc
