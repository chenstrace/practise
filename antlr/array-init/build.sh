#export CLASSPATH=".:/usr/local/lib/antlr-4.7-complete.jar:$CLASSPATH"
#alias antlr4="java -jar /usr/local/lib/antlr-4.7-complete.jar"
#alias grun="java org.antlr.v4.gui.TestRig"
#antlr4 -Dlanguage=Cpp Lua.g4

antlr4 ArrayInit.g4
javac *.java
grun ArrayInit init -tokens
