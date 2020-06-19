mkdir generated build 
cp t.expr build
antlr4 -Dlanguage=Cpp -no-listener -visitor -o generated LabeledExpr.g4 
cd build && cmake3 .. && make -j4 && ./labeledexpr t.expr
