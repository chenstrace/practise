set -x
yanshi --dump-automaton -S a.ys -o test.cc
g++ -g test.cc
