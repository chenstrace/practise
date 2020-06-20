#include <bits/stdc++.h>
#include "LabeledExprLexer.h"
#include "LabeledExprParser.h"
#include "LabeledExprBaseVisitor.h"
#include "antlr4-runtime.h"
using namespace antlr4;
using namespace std;
using namespace tree;

class EvalVisitor : public LabeledExprBaseVisitor {
    /** "memory" for our calculator; variable/value pairs go here */
    map<string, int> memory;

    /** ID '=' expr NEWLINE */
  virtual antlrcpp::Any visitAssign(LabeledExprParser::AssignContext *ctx) override {
      string id = ctx->ID()->getText();  // id is left-hand side of '='
        int value = visit(ctx->expr());   // compute value of expression on right
        memory.emplace(id, value);           // store it in our memory
        return value;
  }

    /** expr NEWLINE */
  virtual antlrcpp::Any visitPrintExpr(LabeledExprParser::PrintExprContext *ctx) override {
      int value = visit(ctx->expr()); // evaluate the expr child
      cout<<(value)<<endl;         // print the result
      return 0;                          // return dummy value
  }

  virtual antlrcpp::Any visitInt(LabeledExprParser::IntContext *ctx) override {
        return atoi(ctx->INT()->getText().c_str());
  }

    /** ID */
  virtual antlrcpp::Any visitId(LabeledExprParser::IdContext *ctx) override {
      string id = ctx->ID()->getText();
	auto it =  memory.find(id); 
        if ( it!= memory.end()) return it->second;
        return 0;
   
  }

    /** expr op=('*'|'/') expr */
  virtual antlrcpp::Any visitMulDiv(LabeledExprParser::MulDivContext *ctx) override {
      int left = visit(ctx->expr(0));  // get value of left subexpression
        int right = visit(ctx->expr(1)); // get value of right subexpression
        if ( ctx->op->getType() == LabeledExprParser::MUL ) return left * right;
        return left / right; // must be DIV
   
  }

    /** expr op=('+'|'-') expr */
  virtual antlrcpp::Any visitAddSub(LabeledExprParser::AddSubContext *ctx) override {
      int left = visit(ctx->expr(0));  // get value of left subexpression
        int right = visit(ctx->expr(1)); // get value of right subexpression
        if ( ctx->op->getType() == LabeledExprParser::ADD ) return left + right;
        return left - right; // must be SUB
   
  }
      /** '(' expr ')' */
  virtual antlrcpp::Any visitParens(LabeledExprParser::ParensContext *ctx) override {
        return visit(ctx->expr()); // return child expr's value
  }


  virtual antlrcpp::Any visitClear(LabeledExprParser::ClearContext *ctx) override {
        memory.clear();
	return 0;
  }
};

int main(int argc, const char* argv[]) {
    const char* filepath = argv[1];
    std::ifstream ifs;
    ifs.open(filepath);
    ANTLRInputStream input(ifs);
    LabeledExprLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    LabeledExprParser parser(&tokens);
    ParseTree* tree = parser.prog();
    EvalVisitor eval;
    eval.visit(tree);

    ifs.close();
    return 0;
}

