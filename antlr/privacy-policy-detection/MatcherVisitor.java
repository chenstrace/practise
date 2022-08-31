// Generated from Matcher.g4 by ANTLR 4.10.1
import org.antlr.v4.runtime.tree.ParseTreeVisitor;

/**
 * This interface defines a complete generic visitor for a parse tree produced
 * by {@link MatcherParser}.
 *
 * @param <T> The return type of the visit operation. Use {@link Void} for
 * operations with no return type.
 */
public interface MatcherVisitor<T> extends ParseTreeVisitor<T> {
	/**
	 * Visit a parse tree produced by the {@code Return}
	 * labeled alternative in {@link MatcherParser#return_statement}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitReturn(MatcherParser.ReturnContext ctx);
	/**
	 * Visit a parse tree produced by the {@code String}
	 * labeled alternative in {@link MatcherParser#expression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitString(MatcherParser.StringContext ctx);
	/**
	 * Visit a parse tree produced by the {@code Variable}
	 * labeled alternative in {@link MatcherParser#expression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitVariable(MatcherParser.VariableContext ctx);
	/**
	 * Visit a parse tree produced by the {@code Paren}
	 * labeled alternative in {@link MatcherParser#expression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitParen(MatcherParser.ParenContext ctx);
	/**
	 * Visit a parse tree produced by the {@code Paren2}
	 * labeled alternative in {@link MatcherParser#equality_expression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitParen2(MatcherParser.Paren2Context ctx);
	/**
	 * Visit a parse tree produced by the {@code LogicalAndOr}
	 * labeled alternative in {@link MatcherParser#equality_expression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitLogicalAndOr(MatcherParser.LogicalAndOrContext ctx);
	/**
	 * Visit a parse tree produced by the {@code StrOp}
	 * labeled alternative in {@link MatcherParser#equality_expression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStrOp(MatcherParser.StrOpContext ctx);
}