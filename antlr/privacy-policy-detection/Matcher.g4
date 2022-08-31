grammar Matcher;
//

return_statement
        : RETURN equality_expression SEMICOLON EOF   #Return
;
expression:
    STRING            #String
    | VARIABLE            #Variable
    | LEFT_PAREN expression RIGHT_PAREN        #Paren
;

equality_expression
    :expression op=(SFIND |SMATCH) expression    #StrOp
    | equality_expression op=(LOGICAL_OR |LOGICAL_AND) equality_expression    #LogicalAndOr
    | LEFT_PAREN equality_expression RIGHT_PAREN        #Paren2
;


VARIABLE : '内容' | '语言';             // 变量
STRING : '"' ('\\"'|.)*? '"' ; // 字符串

WS : [ \t\r\n]+ -> skip ; // skip spaces, tabs, newlines


SMATCH: 'smatch' ;
SFIND: 'sfind' ;

LOGICAL_AND : '&&' ;
LOGICAL_OR : '||' ;
LEFT_PAREN : '(' ;
RIGHT_PAREN : ')' ;

RETURN : 'return' ;
SEMICOLON : ';' ;

LINE_COMMENT : '//' .*? '\n' -> skip ;
COMMENT : '/*' .*? '*/' -> skip ;
