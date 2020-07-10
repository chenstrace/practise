#include <bits/stdc++.h>
#include "MySqlLexer.h"
#include "MySqlParser.h"
#include "MySqlParserBaseListener.h"
#include "antlr4-runtime.h"

using namespace antlr4;
using namespace std;
using namespace tree;

class MyListener : public MySqlParserBaseListener {
   public:
    virtual void enterRoot(MySqlParser::RootContext *ctx) override {
        cerr << "enter enterRoot " << endl;

        if (ctx) {
            cerr << "enter enterRoot, ctx is NOT NULL" << endl;
        } else {
            cerr << "enter enterRoot, ctx is NULL" << endl;
        }
    }

    virtual void exitRoot(MySqlParser::RootContext *ctx) override {
        cerr << "enter exitRoot" << endl;
    }
};

class MyBaseErrorListener : public BaseErrorListener {
    void syntaxError(Recognizer *recognizer, Token *offendingSymbol, size_t line,
                     size_t charPositionInLine, const std::string &msg,
                     std::exception_ptr e) override {
        cerr << "MyBaseErrorListener syntax error" << endl;
    }
};

int main(int argc, const char *argv[]) {
    std::istreambuf_iterator<char> end;

    std::ifstream ifs(argv[1]);
    std::string content(std::istreambuf_iterator<char>(ifs), end);

    ANTLRInputStream input;
    MySqlLexer lexer(&input);
    CommonTokenStream tokens(&lexer);

    MySqlParser parser(&tokens);

    input.load("1 OR 1=1");
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

    // tokens.seek(2);
    // cerr << "after seeking, token size is " << tokens.size() << endl;
    // //seek操作不会改变数组tokens的长度， 就好比对文件进行seek操作， 不会改变文件的大小一样

    //    size_t token_type = tokens.get(2)->getType();
    //    cerr << "token index 2 has type " << token_type << endl;

    parser.setTokenStream(&tokens);

    //一个parser可以有多个 ANTLRErrorListener成员，比如内置的 BaseErrorListener,
    // ConsoleErrorListener, DiagnosticErrorListener, ProxyErrorListener, XPathLexerErrorListener
    // parser默认的是 ConsoleErrorListener
    //当添加了多个ErrorListener时， 会依次调用
    MyBaseErrorListener myBaseErrorListener;
    parser.addErrorListener(&myBaseErrorListener);

    //一个parser只有一个Error Handler， 注意与上面的Error Listener区别
    // Error Handler其实是实现了ANTLRErrorStrategy这个接口，而antlr内置了 BailErrorStrategy 和
    // DefaultErrorStrategy
    auto ptr = parser.getErrorHandler();
    if (ptr) {
        cerr << "parser has default error handler" << endl;  //存在默认的error handler
    }

    //如果使用BailErrorStrategy，那么解析错误之后，parser.getNumberOfSyntaxErrors()无法获得错误的数量
    auto errorHandler = std::make_shared<antlr4::BailErrorStrategy>();
    parser.setErrorHandler(errorHandler);

    auto allListeners = parser.getParseListeners();
    cerr << "By default, we have " << allListeners.size() << " listeners" << endl;

    // parser的侦听器
    MyListener listner;
    parser.addParseListener(&listner);

    size_t tokenIndexBeforeParsing = tokens.index();
    cerr << "before parse, token index is " << tokenIndexBeforeParsing << endl;
    cerr << "getNumberOfSyntaxErrors return " << parser.getNumberOfSyntaxErrors() << endl;

    ParseTree *tree = nullptr;
    //执行语法分析
    try {
        tree = parser.root();  //此句结束后，语法分析的操作就已经结束了
    } catch (const ParseCancellationException &e) {
        std::cerr << "parse error, caught a exception" << '\n';
    }

    size_t tokenIndexAfterParsing = tokens.index();  // tokens的位置会向后走
    cerr << "after parse, token index is " << tokenIndexAfterParsing << endl;

    assert(tokenIndexAfterParsing >= tokenIndexBeforeParsing);  //

    cerr << "getNumberOfSyntaxErrors return " << parser.getNumberOfSyntaxErrors() << endl;

    //    auto tokenNames = parser.getTokenNames(); //和文件MySqlParser.tokens的内容一样

    if (tree) {
        string s = tree->toStringTree(&parser);
        cerr << s << endl;
    } else {
        cerr << "tree is null" << endl;
    }

    return 0;
}
