#export CLASSPATH=".:/usr/local/lib/antlr-4.7-complete.jar:$CLASSPATH"
#alias antlr4="java -jar /usr/local/lib/antlr-4.7-complete.jar"
#alias grun="java org.antlr.v4.gui.TestRig"

antlr4 ArrayInit.g4
javac *.java
grun ArrayInit init -tokens


#printf "{2,{1,5,6}}" | grun ArrayInit init -tokens -ps out.ps  //生成ps文件，可以用看图软件打开
#printf "2,2" | grun ArrayInit tokens -tokens  //只做词法分析，Use startRuleName='tokens' if GrammarName is a lexer grammar
