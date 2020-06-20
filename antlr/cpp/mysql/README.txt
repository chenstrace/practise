antlr4 MySqlLexer.g4 
antlr4 MySqlParser.g4 
javac *.java
printf "SELECT * FROM T WHERE A=1" |grun MySql root -tokens
