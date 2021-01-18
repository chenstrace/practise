#include <bits/stdc++.h>
#include "MySqlLexer.h"
#include "MySqlParser.h"
#include "MySqlParserBaseListener.h"
#include "antlr4-runtime.h"

using namespace antlr4;
using namespace std;
using namespace tree;
class MyBaseErrorListener : public BaseErrorListener {
    void syntaxError(Recognizer* recognizer, Token* offendingSymbol, size_t line,
                     size_t charPositionInLine, const std::string& msg,
                     std::exception_ptr e) override {
        cerr << "MyBaseErrorListener syntax error" << endl;
    }
};

int main(int argc, const char* argv[]) {
    int has_bail = atoi(argv[1]);
    ANTLRInputStream input;
    MySqlLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    MySqlParser parser(&tokens);

    // input.load("abc' AND 3257=3257 AND 'gddp'='gddp");
    // input.load("select * from t;");
    // input.load("SELECT XX FROM Y");
    // input.load("SELECT XX FROM Y,");
    // input.load("SELECT ,,,, ,");
    input.load("abc' AND 3257=3257 AND 'gddp'='gddp");
    lexer.reset();
    lexer.setInputStream(&input);
    tokens.setTokenSource(&lexer);
    tokens.fill();
    cerr << tokens.getText() << endl;
    auto ts = tokens.getTokens();
    cerr << "token vector size is " << ts.size() << endl;

    for (size_t i = 0; i < ts.size(); i++) {
        fprintf(stderr, "token[%ld]'s text is %s, start=%ld, stop=%ld,type=%ld\n", i,
                ts[i]->getText().c_str(), ts[i]->getStartIndex(), ts[i]->getStopIndex(),
                ts[i]->getType());
    }
    parser.setTokenStream(&tokens);
    MyBaseErrorListener myBaseErrorListener;
    parser.addErrorListener(&myBaseErrorListener);

    if (has_bail == 1) {
        printf("use BailErrorStrategy\n");
        auto errorHandler = std::make_shared<antlr4::BailErrorStrategy>();
        parser.setErrorHandler(errorHandler);
    }

    size_t tokenIndexBeforeParsing = tokens.index();
    cerr << "before parse, token index is " << tokenIndexBeforeParsing << endl;

    ParseTree* tree = nullptr;
    try {
        tree = parser.myFromClause();  //此句结束后，语法分析的操作就已经结束了
        // tree = parser.sqlStatement();  //此句结束后，语法分析的操作就已经结束了
    } catch (const ParseCancellationException& e) {
        std::cerr << "parse error, caught a exception" << '\n';
    }

    size_t tokenIndexAfterParsing = tokens.index();  // tokens的位置会向后走
    cerr << "after parse, token index is " << tokenIndexAfterParsing << endl;

    assert(tokenIndexAfterParsing >= tokenIndexBeforeParsing);  //

    if (tree) {
        string s = tree->toStringTree(&parser);
        cerr << s << endl;
    } else {
        cerr << "tree is null" << endl;
    }

    return 0;
}
