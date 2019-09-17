out: a.out 

a.out: lex.yy.c y.tab.c
	gcc -o $@ $^

lex.yy.c: calc.l
	flex $<

y.tab.c: calc.y
	bison -vdty $<

clean:
	rm -rf *.h *.c a.out y.output
