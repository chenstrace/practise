out: a.out 

a.out: lex.yy.c y.tab.c
	gcc -o $@ $^

lex.yy.c: parser.l
	flex $<

y.tab.c: parser.y
	bison -vdty --debug $<

clean:
	rm -rf *.h *.c a.out y.output
