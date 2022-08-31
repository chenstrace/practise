// Generated from Matcher.g4 by ANTLR 4.10.1
import org.antlr.v4.runtime.Lexer;
import org.antlr.v4.runtime.CharStream;
import org.antlr.v4.runtime.Token;
import org.antlr.v4.runtime.TokenStream;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.misc.*;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class MatcherLexer extends Lexer {
	static { RuntimeMetaData.checkVersion("4.10.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		VARIABLE=1, STRING=2, WS=3, SMATCH=4, SFIND=5, LOGICAL_AND=6, LOGICAL_OR=7, 
		LEFT_PAREN=8, RIGHT_PAREN=9, RETURN=10, SEMICOLON=11, LINE_COMMENT=12, 
		COMMENT=13;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	private static String[] makeRuleNames() {
		return new String[] {
			"VARIABLE", "STRING", "WS", "SMATCH", "SFIND", "LOGICAL_AND", "LOGICAL_OR", 
			"LEFT_PAREN", "RIGHT_PAREN", "RETURN", "SEMICOLON", "LINE_COMMENT", "COMMENT"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, null, null, null, "'smatch'", "'sfind'", "'&&'", "'||'", "'('", 
			"')'", "'return'", "';'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, "VARIABLE", "STRING", "WS", "SMATCH", "SFIND", "LOGICAL_AND", "LOGICAL_OR", 
			"LEFT_PAREN", "RIGHT_PAREN", "RETURN", "SEMICOLON", "LINE_COMMENT", "COMMENT"
		};
	}
	private static final String[] _SYMBOLIC_NAMES = makeSymbolicNames();
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}


	public MatcherLexer(CharStream input) {
		super(input);
		_interp = new LexerATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@Override
	public String getGrammarFileName() { return "Matcher.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public String[] getChannelNames() { return channelNames; }

	@Override
	public String[] getModeNames() { return modeNames; }

	@Override
	public ATN getATN() { return _ATN; }

	public static final String _serializedATN =
		"\u0004\u0000\rn\u0006\uffff\uffff\u0002\u0000\u0007\u0000\u0002\u0001"+
		"\u0007\u0001\u0002\u0002\u0007\u0002\u0002\u0003\u0007\u0003\u0002\u0004"+
		"\u0007\u0004\u0002\u0005\u0007\u0005\u0002\u0006\u0007\u0006\u0002\u0007"+
		"\u0007\u0007\u0002\b\u0007\b\u0002\t\u0007\t\u0002\n\u0007\n\u0002\u000b"+
		"\u0007\u000b\u0002\f\u0007\f\u0001\u0000\u0001\u0000\u0001\u0000\u0001"+
		"\u0000\u0003\u0000 \b\u0000\u0001\u0001\u0001\u0001\u0001\u0001\u0001"+
		"\u0001\u0005\u0001&\b\u0001\n\u0001\f\u0001)\t\u0001\u0001\u0001\u0001"+
		"\u0001\u0001\u0002\u0004\u0002.\b\u0002\u000b\u0002\f\u0002/\u0001\u0002"+
		"\u0001\u0002\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003"+
		"\u0001\u0003\u0001\u0003\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004"+
		"\u0001\u0004\u0001\u0004\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0006"+
		"\u0001\u0006\u0001\u0006\u0001\u0007\u0001\u0007\u0001\b\u0001\b\u0001"+
		"\t\u0001\t\u0001\t\u0001\t\u0001\t\u0001\t\u0001\t\u0001\n\u0001\n\u0001"+
		"\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0005\u000bX\b\u000b\n\u000b"+
		"\f\u000b[\t\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0001"+
		"\f\u0001\f\u0001\f\u0001\f\u0005\fe\b\f\n\f\f\fh\t\f\u0001\f\u0001\f\u0001"+
		"\f\u0001\f\u0001\f\u0003\'Yf\u0000\r\u0001\u0001\u0003\u0002\u0005\u0003"+
		"\u0007\u0004\t\u0005\u000b\u0006\r\u0007\u000f\b\u0011\t\u0013\n\u0015"+
		"\u000b\u0017\f\u0019\r\u0001\u0000\u0001\u0003\u0000\t\n\r\r  s\u0000"+
		"\u0001\u0001\u0000\u0000\u0000\u0000\u0003\u0001\u0000\u0000\u0000\u0000"+
		"\u0005\u0001\u0000\u0000\u0000\u0000\u0007\u0001\u0000\u0000\u0000\u0000"+
		"\t\u0001\u0000\u0000\u0000\u0000\u000b\u0001\u0000\u0000\u0000\u0000\r"+
		"\u0001\u0000\u0000\u0000\u0000\u000f\u0001\u0000\u0000\u0000\u0000\u0011"+
		"\u0001\u0000\u0000\u0000\u0000\u0013\u0001\u0000\u0000\u0000\u0000\u0015"+
		"\u0001\u0000\u0000\u0000\u0000\u0017\u0001\u0000\u0000\u0000\u0000\u0019"+
		"\u0001\u0000\u0000\u0000\u0001\u001f\u0001\u0000\u0000\u0000\u0003!\u0001"+
		"\u0000\u0000\u0000\u0005-\u0001\u0000\u0000\u0000\u00073\u0001\u0000\u0000"+
		"\u0000\t:\u0001\u0000\u0000\u0000\u000b@\u0001\u0000\u0000\u0000\rC\u0001"+
		"\u0000\u0000\u0000\u000fF\u0001\u0000\u0000\u0000\u0011H\u0001\u0000\u0000"+
		"\u0000\u0013J\u0001\u0000\u0000\u0000\u0015Q\u0001\u0000\u0000\u0000\u0017"+
		"S\u0001\u0000\u0000\u0000\u0019`\u0001\u0000\u0000\u0000\u001b\u001c\u0005"+
		"\u5185\u0000\u0000\u001c \u0005\u5bb9\u0000\u0000\u001d\u001e\u0005\u8000"+
		"\u8bed\u0000\u0000\u001e \u0005\u8000\u8a00\u0000\u0000\u001f\u001b\u0001"+
		"\u0000\u0000\u0000\u001f\u001d\u0001\u0000\u0000\u0000 \u0002\u0001\u0000"+
		"\u0000\u0000!\'\u0005\"\u0000\u0000\"#\u0005\\\u0000\u0000#&\u0005\"\u0000"+
		"\u0000$&\t\u0000\u0000\u0000%\"\u0001\u0000\u0000\u0000%$\u0001\u0000"+
		"\u0000\u0000&)\u0001\u0000\u0000\u0000\'(\u0001\u0000\u0000\u0000\'%\u0001"+
		"\u0000\u0000\u0000(*\u0001\u0000\u0000\u0000)\'\u0001\u0000\u0000\u0000"+
		"*+\u0005\"\u0000\u0000+\u0004\u0001\u0000\u0000\u0000,.\u0007\u0000\u0000"+
		"\u0000-,\u0001\u0000\u0000\u0000./\u0001\u0000\u0000\u0000/-\u0001\u0000"+
		"\u0000\u0000/0\u0001\u0000\u0000\u000001\u0001\u0000\u0000\u000012\u0006"+
		"\u0002\u0000\u00002\u0006\u0001\u0000\u0000\u000034\u0005s\u0000\u0000"+
		"45\u0005m\u0000\u000056\u0005a\u0000\u000067\u0005t\u0000\u000078\u0005"+
		"c\u0000\u000089\u0005h\u0000\u00009\b\u0001\u0000\u0000\u0000:;\u0005"+
		"s\u0000\u0000;<\u0005f\u0000\u0000<=\u0005i\u0000\u0000=>\u0005n\u0000"+
		"\u0000>?\u0005d\u0000\u0000?\n\u0001\u0000\u0000\u0000@A\u0005&\u0000"+
		"\u0000AB\u0005&\u0000\u0000B\f\u0001\u0000\u0000\u0000CD\u0005|\u0000"+
		"\u0000DE\u0005|\u0000\u0000E\u000e\u0001\u0000\u0000\u0000FG\u0005(\u0000"+
		"\u0000G\u0010\u0001\u0000\u0000\u0000HI\u0005)\u0000\u0000I\u0012\u0001"+
		"\u0000\u0000\u0000JK\u0005r\u0000\u0000KL\u0005e\u0000\u0000LM\u0005t"+
		"\u0000\u0000MN\u0005u\u0000\u0000NO\u0005r\u0000\u0000OP\u0005n\u0000"+
		"\u0000P\u0014\u0001\u0000\u0000\u0000QR\u0005;\u0000\u0000R\u0016\u0001"+
		"\u0000\u0000\u0000ST\u0005/\u0000\u0000TU\u0005/\u0000\u0000UY\u0001\u0000"+
		"\u0000\u0000VX\t\u0000\u0000\u0000WV\u0001\u0000\u0000\u0000X[\u0001\u0000"+
		"\u0000\u0000YZ\u0001\u0000\u0000\u0000YW\u0001\u0000\u0000\u0000Z\\\u0001"+
		"\u0000\u0000\u0000[Y\u0001\u0000\u0000\u0000\\]\u0005\n\u0000\u0000]^"+
		"\u0001\u0000\u0000\u0000^_\u0006\u000b\u0000\u0000_\u0018\u0001\u0000"+
		"\u0000\u0000`a\u0005/\u0000\u0000ab\u0005*\u0000\u0000bf\u0001\u0000\u0000"+
		"\u0000ce\t\u0000\u0000\u0000dc\u0001\u0000\u0000\u0000eh\u0001\u0000\u0000"+
		"\u0000fg\u0001\u0000\u0000\u0000fd\u0001\u0000\u0000\u0000gi\u0001\u0000"+
		"\u0000\u0000hf\u0001\u0000\u0000\u0000ij\u0005*\u0000\u0000jk\u0005/\u0000"+
		"\u0000kl\u0001\u0000\u0000\u0000lm\u0006\f\u0000\u0000m\u001a\u0001\u0000"+
		"\u0000\u0000\u0007\u0000\u001f%\'/Yf\u0001\u0006\u0000\u0000";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}