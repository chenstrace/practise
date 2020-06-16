antlr4 -no-listener -visitor LabeledExpr.g4 
javac *.java
java Calc t.expr
