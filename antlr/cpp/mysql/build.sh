mkdir generated build 
cp test.sql build
antlr4 -Dlanguage=Cpp  -o generated MySqlLexer.g4 
antlr4 -Dlanguage=Cpp  -o generated MySqlParser.g4 
cd build && cmake3 .. && make -j4
