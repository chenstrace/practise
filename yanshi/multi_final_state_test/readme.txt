使用--dump-automaton参数可以打印出生成自动机的结构。
例如，yanshi --dump-automaton -S a.ys -o test.cc

a.ys生成的自动机表达如下，合法的输入是1个大写字母，或4个大写字母。

start: 0
finals: 1 4
edges:
0: (65-90,1)
1: (65-90,2)
2: (65-90,3)
3: (65-90,4)
4:


值得注意的是，yanshi生成的自动机只有一个开始状态，但可能会多个结束状态。
