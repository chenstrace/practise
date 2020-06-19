
// Generated from Java.g4 by ANTLR 4.7


#include "JavaListener.h"

#include "JavaParser.h"


using namespace antlrcpp;
using namespace antlr4;

JavaParser::JavaParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

JavaParser::~JavaParser() {
  delete _interpreter;
}

std::string JavaParser::getGrammarFileName() const {
  return "Java.g4";
}

const std::vector<std::string>& JavaParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& JavaParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- CompilationUnitContext ------------------------------------------------------------------

JavaParser::CompilationUnitContext::CompilationUnitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavaParser::CompilationUnitContext::EOF() {
  return getToken(JavaParser::EOF, 0);
}

JavaParser::PackageDeclarationContext* JavaParser::CompilationUnitContext::packageDeclaration() {
  return getRuleContext<JavaParser::PackageDeclarationContext>(0);
}

std::vector<JavaParser::ImportDeclarationContext *> JavaParser::CompilationUnitContext::importDeclaration() {
  return getRuleContexts<JavaParser::ImportDeclarationContext>();
}

JavaParser::ImportDeclarationContext* JavaParser::CompilationUnitContext::importDeclaration(size_t i) {
  return getRuleContext<JavaParser::ImportDeclarationContext>(i);
}

std::vector<JavaParser::TypeDeclarationContext *> JavaParser::CompilationUnitContext::typeDeclaration() {
  return getRuleContexts<JavaParser::TypeDeclarationContext>();
}

JavaParser::TypeDeclarationContext* JavaParser::CompilationUnitContext::typeDeclaration(size_t i) {
  return getRuleContext<JavaParser::TypeDeclarationContext>(i);
}


size_t JavaParser::CompilationUnitContext::getRuleIndex() const {
  return JavaParser::RuleCompilationUnit;
}

void JavaParser::CompilationUnitContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterCompilationUnit(this);
  }
}

void JavaParser::CompilationUnitContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitCompilationUnit(this);
  }
}

JavaParser::CompilationUnitContext* JavaParser::compilationUnit() {
  CompilationUnitContext *_localctx = _tracker.createInstance<CompilationUnitContext>(_ctx, getState());
  enterRule(_localctx, 0, JavaParser::RuleCompilationUnit);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(219);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == JavaParser::T__0) {
      setState(218);
      packageDeclaration();
    }
    setState(224);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == JavaParser::T__2) {
      setState(221);
      importDeclaration();
      setState(226);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(230);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << JavaParser::T__1)
      | (1ULL << JavaParser::T__3)
      | (1ULL << JavaParser::T__6)
      | (1ULL << JavaParser::T__9)
      | (1ULL << JavaParser::T__10)
      | (1ULL << JavaParser::T__11)
      | (1ULL << JavaParser::T__12)
      | (1ULL << JavaParser::T__13)
      | (1ULL << JavaParser::T__14)
      | (1ULL << JavaParser::T__21)
      | (1ULL << JavaParser::T__48))) != 0) || _la == JavaParser::ENUM) {
      setState(227);
      typeDeclaration();
      setState(232);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(233);
    match(JavaParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PackageDeclarationContext ------------------------------------------------------------------

JavaParser::PackageDeclarationContext::PackageDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaParser::QualifiedNameContext* JavaParser::PackageDeclarationContext::qualifiedName() {
  return getRuleContext<JavaParser::QualifiedNameContext>(0);
}


size_t JavaParser::PackageDeclarationContext::getRuleIndex() const {
  return JavaParser::RulePackageDeclaration;
}

void JavaParser::PackageDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterPackageDeclaration(this);
  }
}

void JavaParser::PackageDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitPackageDeclaration(this);
  }
}

JavaParser::PackageDeclarationContext* JavaParser::packageDeclaration() {
  PackageDeclarationContext *_localctx = _tracker.createInstance<PackageDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 2, JavaParser::RulePackageDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(235);
    match(JavaParser::T__0);
    setState(236);
    qualifiedName();
    setState(237);
    match(JavaParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ImportDeclarationContext ------------------------------------------------------------------

JavaParser::ImportDeclarationContext::ImportDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaParser::QualifiedNameContext* JavaParser::ImportDeclarationContext::qualifiedName() {
  return getRuleContext<JavaParser::QualifiedNameContext>(0);
}


size_t JavaParser::ImportDeclarationContext::getRuleIndex() const {
  return JavaParser::RuleImportDeclaration;
}

void JavaParser::ImportDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterImportDeclaration(this);
  }
}

void JavaParser::ImportDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitImportDeclaration(this);
  }
}

JavaParser::ImportDeclarationContext* JavaParser::importDeclaration() {
  ImportDeclarationContext *_localctx = _tracker.createInstance<ImportDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 4, JavaParser::RuleImportDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(239);
    match(JavaParser::T__2);
    setState(241);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == JavaParser::T__3) {
      setState(240);
      match(JavaParser::T__3);
    }
    setState(243);
    qualifiedName();
    setState(246);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == JavaParser::T__4) {
      setState(244);
      match(JavaParser::T__4);
      setState(245);
      match(JavaParser::T__5);
    }
    setState(248);
    match(JavaParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeDeclarationContext ------------------------------------------------------------------

JavaParser::TypeDeclarationContext::TypeDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaParser::ClassDeclarationContext* JavaParser::TypeDeclarationContext::classDeclaration() {
  return getRuleContext<JavaParser::ClassDeclarationContext>(0);
}

JavaParser::InterfaceDeclarationContext* JavaParser::TypeDeclarationContext::interfaceDeclaration() {
  return getRuleContext<JavaParser::InterfaceDeclarationContext>(0);
}

JavaParser::EnumDeclarationContext* JavaParser::TypeDeclarationContext::enumDeclaration() {
  return getRuleContext<JavaParser::EnumDeclarationContext>(0);
}

std::vector<JavaParser::ClassOrInterfaceModifierContext *> JavaParser::TypeDeclarationContext::classOrInterfaceModifier() {
  return getRuleContexts<JavaParser::ClassOrInterfaceModifierContext>();
}

JavaParser::ClassOrInterfaceModifierContext* JavaParser::TypeDeclarationContext::classOrInterfaceModifier(size_t i) {
  return getRuleContext<JavaParser::ClassOrInterfaceModifierContext>(i);
}


size_t JavaParser::TypeDeclarationContext::getRuleIndex() const {
  return JavaParser::RuleTypeDeclaration;
}

void JavaParser::TypeDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterTypeDeclaration(this);
  }
}

void JavaParser::TypeDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitTypeDeclaration(this);
  }
}

JavaParser::TypeDeclarationContext* JavaParser::typeDeclaration() {
  TypeDeclarationContext *_localctx = _tracker.createInstance<TypeDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 6, JavaParser::RuleTypeDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    setState(262);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case JavaParser::T__3:
      case JavaParser::T__6:
      case JavaParser::T__9:
      case JavaParser::T__10:
      case JavaParser::T__11:
      case JavaParser::T__12:
      case JavaParser::T__13:
      case JavaParser::T__14:
      case JavaParser::T__21:
      case JavaParser::T__48:
      case JavaParser::ENUM: {
        enterOuterAlt(_localctx, 1);
        setState(253);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(250);
            classOrInterfaceModifier(); 
          }
          setState(255);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
        }
        setState(259);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case JavaParser::T__6: {
            setState(256);
            classDeclaration();
            break;
          }

          case JavaParser::T__21:
          case JavaParser::T__48: {
            setState(257);
            interfaceDeclaration();
            break;
          }

          case JavaParser::ENUM: {
            setState(258);
            enumDeclaration();
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        break;
      }

      case JavaParser::T__1: {
        enterOuterAlt(_localctx, 2);
        setState(261);
        match(JavaParser::T__1);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassDeclarationContext ------------------------------------------------------------------

JavaParser::ClassDeclarationContext::ClassDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavaParser::ClassDeclarationContext::Identifier() {
  return getToken(JavaParser::Identifier, 0);
}

JavaParser::ClassBodyContext* JavaParser::ClassDeclarationContext::classBody() {
  return getRuleContext<JavaParser::ClassBodyContext>(0);
}

JavaParser::TypeParametersContext* JavaParser::ClassDeclarationContext::typeParameters() {
  return getRuleContext<JavaParser::TypeParametersContext>(0);
}

JavaParser::TypeContext* JavaParser::ClassDeclarationContext::type() {
  return getRuleContext<JavaParser::TypeContext>(0);
}

JavaParser::TypeListContext* JavaParser::ClassDeclarationContext::typeList() {
  return getRuleContext<JavaParser::TypeListContext>(0);
}


size_t JavaParser::ClassDeclarationContext::getRuleIndex() const {
  return JavaParser::RuleClassDeclaration;
}

void JavaParser::ClassDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterClassDeclaration(this);
  }
}

void JavaParser::ClassDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitClassDeclaration(this);
  }
}

JavaParser::ClassDeclarationContext* JavaParser::classDeclaration() {
  ClassDeclarationContext *_localctx = _tracker.createInstance<ClassDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 8, JavaParser::RuleClassDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(264);
    match(JavaParser::T__6);
    setState(265);
    match(JavaParser::Identifier);
    setState(267);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == JavaParser::T__15) {
      setState(266);
      typeParameters();
    }
    setState(271);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == JavaParser::T__7) {
      setState(269);
      match(JavaParser::T__7);
      setState(270);
      type();
    }
    setState(275);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == JavaParser::T__8) {
      setState(273);
      match(JavaParser::T__8);
      setState(274);
      typeList();
    }
    setState(277);
    classBody();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumDeclarationContext ------------------------------------------------------------------

JavaParser::EnumDeclarationContext::EnumDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavaParser::EnumDeclarationContext::ENUM() {
  return getToken(JavaParser::ENUM, 0);
}

tree::TerminalNode* JavaParser::EnumDeclarationContext::Identifier() {
  return getToken(JavaParser::Identifier, 0);
}

JavaParser::EnumBodyContext* JavaParser::EnumDeclarationContext::enumBody() {
  return getRuleContext<JavaParser::EnumBodyContext>(0);
}

JavaParser::TypeListContext* JavaParser::EnumDeclarationContext::typeList() {
  return getRuleContext<JavaParser::TypeListContext>(0);
}


size_t JavaParser::EnumDeclarationContext::getRuleIndex() const {
  return JavaParser::RuleEnumDeclaration;
}

void JavaParser::EnumDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterEnumDeclaration(this);
  }
}

void JavaParser::EnumDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitEnumDeclaration(this);
  }
}

JavaParser::EnumDeclarationContext* JavaParser::enumDeclaration() {
  EnumDeclarationContext *_localctx = _tracker.createInstance<EnumDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 10, JavaParser::RuleEnumDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(279);
    match(JavaParser::ENUM);
    setState(280);
    match(JavaParser::Identifier);
    setState(283);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == JavaParser::T__8) {
      setState(281);
      match(JavaParser::T__8);
      setState(282);
      typeList();
    }
    setState(285);
    enumBody();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InterfaceDeclarationContext ------------------------------------------------------------------

JavaParser::InterfaceDeclarationContext::InterfaceDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaParser::NormalInterfaceDeclarationContext* JavaParser::InterfaceDeclarationContext::normalInterfaceDeclaration() {
  return getRuleContext<JavaParser::NormalInterfaceDeclarationContext>(0);
}

JavaParser::AnnotationTypeDeclarationContext* JavaParser::InterfaceDeclarationContext::annotationTypeDeclaration() {
  return getRuleContext<JavaParser::AnnotationTypeDeclarationContext>(0);
}


size_t JavaParser::InterfaceDeclarationContext::getRuleIndex() const {
  return JavaParser::RuleInterfaceDeclaration;
}

void JavaParser::InterfaceDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterInterfaceDeclaration(this);
  }
}

void JavaParser::InterfaceDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitInterfaceDeclaration(this);
  }
}

JavaParser::InterfaceDeclarationContext* JavaParser::interfaceDeclaration() {
  InterfaceDeclarationContext *_localctx = _tracker.createInstance<InterfaceDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 12, JavaParser::RuleInterfaceDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(289);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case JavaParser::T__21: {
        enterOuterAlt(_localctx, 1);
        setState(287);
        normalInterfaceDeclaration();
        break;
      }

      case JavaParser::T__48: {
        enterOuterAlt(_localctx, 2);
        setState(288);
        annotationTypeDeclaration();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassOrInterfaceModifierContext ------------------------------------------------------------------

JavaParser::ClassOrInterfaceModifierContext::ClassOrInterfaceModifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaParser::AnnotationContext* JavaParser::ClassOrInterfaceModifierContext::annotation() {
  return getRuleContext<JavaParser::AnnotationContext>(0);
}


size_t JavaParser::ClassOrInterfaceModifierContext::getRuleIndex() const {
  return JavaParser::RuleClassOrInterfaceModifier;
}

void JavaParser::ClassOrInterfaceModifierContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterClassOrInterfaceModifier(this);
  }
}

void JavaParser::ClassOrInterfaceModifierContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitClassOrInterfaceModifier(this);
  }
}

JavaParser::ClassOrInterfaceModifierContext* JavaParser::classOrInterfaceModifier() {
  ClassOrInterfaceModifierContext *_localctx = _tracker.createInstance<ClassOrInterfaceModifierContext>(_ctx, getState());
  enterRule(_localctx, 14, JavaParser::RuleClassOrInterfaceModifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(299);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case JavaParser::T__48: {
        enterOuterAlt(_localctx, 1);
        setState(291);
        annotation();
        break;
      }

      case JavaParser::T__9: {
        enterOuterAlt(_localctx, 2);
        setState(292);
        match(JavaParser::T__9);
        break;
      }

      case JavaParser::T__10: {
        enterOuterAlt(_localctx, 3);
        setState(293);
        match(JavaParser::T__10);
        break;
      }

      case JavaParser::T__11: {
        enterOuterAlt(_localctx, 4);
        setState(294);
        match(JavaParser::T__11);
        break;
      }

      case JavaParser::T__12: {
        enterOuterAlt(_localctx, 5);
        setState(295);
        match(JavaParser::T__12);
        break;
      }

      case JavaParser::T__3: {
        enterOuterAlt(_localctx, 6);
        setState(296);
        match(JavaParser::T__3);
        break;
      }

      case JavaParser::T__13: {
        enterOuterAlt(_localctx, 7);
        setState(297);
        match(JavaParser::T__13);
        break;
      }

      case JavaParser::T__14: {
        enterOuterAlt(_localctx, 8);
        setState(298);
        match(JavaParser::T__14);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ModifiersContext ------------------------------------------------------------------

JavaParser::ModifiersContext::ModifiersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<JavaParser::ModifierContext *> JavaParser::ModifiersContext::modifier() {
  return getRuleContexts<JavaParser::ModifierContext>();
}

JavaParser::ModifierContext* JavaParser::ModifiersContext::modifier(size_t i) {
  return getRuleContext<JavaParser::ModifierContext>(i);
}


size_t JavaParser::ModifiersContext::getRuleIndex() const {
  return JavaParser::RuleModifiers;
}

void JavaParser::ModifiersContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterModifiers(this);
  }
}

void JavaParser::ModifiersContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitModifiers(this);
  }
}

JavaParser::ModifiersContext* JavaParser::modifiers() {
  ModifiersContext *_localctx = _tracker.createInstance<ModifiersContext>(_ctx, getState());
  enterRule(_localctx, 16, JavaParser::RuleModifiers);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(304);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(301);
        modifier(); 
      }
      setState(306);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeParametersContext ------------------------------------------------------------------

JavaParser::TypeParametersContext::TypeParametersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<JavaParser::TypeParameterContext *> JavaParser::TypeParametersContext::typeParameter() {
  return getRuleContexts<JavaParser::TypeParameterContext>();
}

JavaParser::TypeParameterContext* JavaParser::TypeParametersContext::typeParameter(size_t i) {
  return getRuleContext<JavaParser::TypeParameterContext>(i);
}


size_t JavaParser::TypeParametersContext::getRuleIndex() const {
  return JavaParser::RuleTypeParameters;
}

void JavaParser::TypeParametersContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterTypeParameters(this);
  }
}

void JavaParser::TypeParametersContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitTypeParameters(this);
  }
}

JavaParser::TypeParametersContext* JavaParser::typeParameters() {
  TypeParametersContext *_localctx = _tracker.createInstance<TypeParametersContext>(_ctx, getState());
  enterRule(_localctx, 18, JavaParser::RuleTypeParameters);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(307);
    match(JavaParser::T__15);
    setState(308);
    typeParameter();
    setState(313);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == JavaParser::T__16) {
      setState(309);
      match(JavaParser::T__16);
      setState(310);
      typeParameter();
      setState(315);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(316);
    match(JavaParser::T__17);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeParameterContext ------------------------------------------------------------------

JavaParser::TypeParameterContext::TypeParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavaParser::TypeParameterContext::Identifier() {
  return getToken(JavaParser::Identifier, 0);
}

JavaParser::TypeBoundContext* JavaParser::TypeParameterContext::typeBound() {
  return getRuleContext<JavaParser::TypeBoundContext>(0);
}


size_t JavaParser::TypeParameterContext::getRuleIndex() const {
  return JavaParser::RuleTypeParameter;
}

void JavaParser::TypeParameterContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterTypeParameter(this);
  }
}

void JavaParser::TypeParameterContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitTypeParameter(this);
  }
}

JavaParser::TypeParameterContext* JavaParser::typeParameter() {
  TypeParameterContext *_localctx = _tracker.createInstance<TypeParameterContext>(_ctx, getState());
  enterRule(_localctx, 20, JavaParser::RuleTypeParameter);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(318);
    match(JavaParser::Identifier);
    setState(321);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == JavaParser::T__7) {
      setState(319);
      match(JavaParser::T__7);
      setState(320);
      typeBound();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeBoundContext ------------------------------------------------------------------

JavaParser::TypeBoundContext::TypeBoundContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<JavaParser::TypeContext *> JavaParser::TypeBoundContext::type() {
  return getRuleContexts<JavaParser::TypeContext>();
}

JavaParser::TypeContext* JavaParser::TypeBoundContext::type(size_t i) {
  return getRuleContext<JavaParser::TypeContext>(i);
}


size_t JavaParser::TypeBoundContext::getRuleIndex() const {
  return JavaParser::RuleTypeBound;
}

void JavaParser::TypeBoundContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterTypeBound(this);
  }
}

void JavaParser::TypeBoundContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitTypeBound(this);
  }
}

JavaParser::TypeBoundContext* JavaParser::typeBound() {
  TypeBoundContext *_localctx = _tracker.createInstance<TypeBoundContext>(_ctx, getState());
  enterRule(_localctx, 22, JavaParser::RuleTypeBound);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(323);
    type();
    setState(328);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == JavaParser::T__18) {
      setState(324);
      match(JavaParser::T__18);
      setState(325);
      type();
      setState(330);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumBodyContext ------------------------------------------------------------------

JavaParser::EnumBodyContext::EnumBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaParser::EnumConstantsContext* JavaParser::EnumBodyContext::enumConstants() {
  return getRuleContext<JavaParser::EnumConstantsContext>(0);
}

JavaParser::EnumBodyDeclarationsContext* JavaParser::EnumBodyContext::enumBodyDeclarations() {
  return getRuleContext<JavaParser::EnumBodyDeclarationsContext>(0);
}


size_t JavaParser::EnumBodyContext::getRuleIndex() const {
  return JavaParser::RuleEnumBody;
}

void JavaParser::EnumBodyContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterEnumBody(this);
  }
}

void JavaParser::EnumBodyContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitEnumBody(this);
  }
}

JavaParser::EnumBodyContext* JavaParser::enumBody() {
  EnumBodyContext *_localctx = _tracker.createInstance<EnumBodyContext>(_ctx, getState());
  enterRule(_localctx, 24, JavaParser::RuleEnumBody);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(331);
    match(JavaParser::T__19);
    setState(333);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == JavaParser::T__48

    || _la == JavaParser::Identifier) {
      setState(332);
      enumConstants();
    }
    setState(336);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == JavaParser::T__16) {
      setState(335);
      match(JavaParser::T__16);
    }
    setState(339);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == JavaParser::T__1) {
      setState(338);
      enumBodyDeclarations();
    }
    setState(341);
    match(JavaParser::T__20);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumConstantsContext ------------------------------------------------------------------

JavaParser::EnumConstantsContext::EnumConstantsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<JavaParser::EnumConstantContext *> JavaParser::EnumConstantsContext::enumConstant() {
  return getRuleContexts<JavaParser::EnumConstantContext>();
}

JavaParser::EnumConstantContext* JavaParser::EnumConstantsContext::enumConstant(size_t i) {
  return getRuleContext<JavaParser::EnumConstantContext>(i);
}


size_t JavaParser::EnumConstantsContext::getRuleIndex() const {
  return JavaParser::RuleEnumConstants;
}

void JavaParser::EnumConstantsContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterEnumConstants(this);
  }
}

void JavaParser::EnumConstantsContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitEnumConstants(this);
  }
}

JavaParser::EnumConstantsContext* JavaParser::enumConstants() {
  EnumConstantsContext *_localctx = _tracker.createInstance<EnumConstantsContext>(_ctx, getState());
  enterRule(_localctx, 26, JavaParser::RuleEnumConstants);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(343);
    enumConstant();
    setState(348);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(344);
        match(JavaParser::T__16);
        setState(345);
        enumConstant(); 
      }
      setState(350);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumConstantContext ------------------------------------------------------------------

JavaParser::EnumConstantContext::EnumConstantContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavaParser::EnumConstantContext::Identifier() {
  return getToken(JavaParser::Identifier, 0);
}

JavaParser::AnnotationsContext* JavaParser::EnumConstantContext::annotations() {
  return getRuleContext<JavaParser::AnnotationsContext>(0);
}

JavaParser::ArgumentsContext* JavaParser::EnumConstantContext::arguments() {
  return getRuleContext<JavaParser::ArgumentsContext>(0);
}

JavaParser::ClassBodyContext* JavaParser::EnumConstantContext::classBody() {
  return getRuleContext<JavaParser::ClassBodyContext>(0);
}


size_t JavaParser::EnumConstantContext::getRuleIndex() const {
  return JavaParser::RuleEnumConstant;
}

void JavaParser::EnumConstantContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterEnumConstant(this);
  }
}

void JavaParser::EnumConstantContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitEnumConstant(this);
  }
}

JavaParser::EnumConstantContext* JavaParser::enumConstant() {
  EnumConstantContext *_localctx = _tracker.createInstance<EnumConstantContext>(_ctx, getState());
  enterRule(_localctx, 28, JavaParser::RuleEnumConstant);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(352);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == JavaParser::T__48) {
      setState(351);
      annotations();
    }
    setState(354);
    match(JavaParser::Identifier);
    setState(356);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == JavaParser::T__41) {
      setState(355);
      arguments();
    }
    setState(359);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == JavaParser::T__19) {
      setState(358);
      classBody();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumBodyDeclarationsContext ------------------------------------------------------------------

JavaParser::EnumBodyDeclarationsContext::EnumBodyDeclarationsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<JavaParser::ClassBodyDeclarationContext *> JavaParser::EnumBodyDeclarationsContext::classBodyDeclaration() {
  return getRuleContexts<JavaParser::ClassBodyDeclarationContext>();
}

JavaParser::ClassBodyDeclarationContext* JavaParser::EnumBodyDeclarationsContext::classBodyDeclaration(size_t i) {
  return getRuleContext<JavaParser::ClassBodyDeclarationContext>(i);
}


size_t JavaParser::EnumBodyDeclarationsContext::getRuleIndex() const {
  return JavaParser::RuleEnumBodyDeclarations;
}

void JavaParser::EnumBodyDeclarationsContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterEnumBodyDeclarations(this);
  }
}

void JavaParser::EnumBodyDeclarationsContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitEnumBodyDeclarations(this);
  }
}

JavaParser::EnumBodyDeclarationsContext* JavaParser::enumBodyDeclarations() {
  EnumBodyDeclarationsContext *_localctx = _tracker.createInstance<EnumBodyDeclarationsContext>(_ctx, getState());
  enterRule(_localctx, 30, JavaParser::RuleEnumBodyDeclarations);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(361);
    match(JavaParser::T__1);
    setState(365);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << JavaParser::T__1)
      | (1ULL << JavaParser::T__3)
      | (1ULL << JavaParser::T__6)
      | (1ULL << JavaParser::T__9)
      | (1ULL << JavaParser::T__10)
      | (1ULL << JavaParser::T__11)
      | (1ULL << JavaParser::T__12)
      | (1ULL << JavaParser::T__13)
      | (1ULL << JavaParser::T__14)
      | (1ULL << JavaParser::T__15)
      | (1ULL << JavaParser::T__19)
      | (1ULL << JavaParser::T__21)
      | (1ULL << JavaParser::T__24)
      | (1ULL << JavaParser::T__27)
      | (1ULL << JavaParser::T__28)
      | (1ULL << JavaParser::T__29)
      | (1ULL << JavaParser::T__30)
      | (1ULL << JavaParser::T__31)
      | (1ULL << JavaParser::T__32)
      | (1ULL << JavaParser::T__33)
      | (1ULL << JavaParser::T__34)
      | (1ULL << JavaParser::T__35)
      | (1ULL << JavaParser::T__36)
      | (1ULL << JavaParser::T__37)
      | (1ULL << JavaParser::T__38)
      | (1ULL << JavaParser::T__48))) != 0) || _la == JavaParser::Identifier) {
      setState(362);
      classBodyDeclaration();
      setState(367);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NormalInterfaceDeclarationContext ------------------------------------------------------------------

JavaParser::NormalInterfaceDeclarationContext::NormalInterfaceDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavaParser::NormalInterfaceDeclarationContext::Identifier() {
  return getToken(JavaParser::Identifier, 0);
}

JavaParser::InterfaceBodyContext* JavaParser::NormalInterfaceDeclarationContext::interfaceBody() {
  return getRuleContext<JavaParser::InterfaceBodyContext>(0);
}

JavaParser::TypeParametersContext* JavaParser::NormalInterfaceDeclarationContext::typeParameters() {
  return getRuleContext<JavaParser::TypeParametersContext>(0);
}

JavaParser::TypeListContext* JavaParser::NormalInterfaceDeclarationContext::typeList() {
  return getRuleContext<JavaParser::TypeListContext>(0);
}


size_t JavaParser::NormalInterfaceDeclarationContext::getRuleIndex() const {
  return JavaParser::RuleNormalInterfaceDeclaration;
}

void JavaParser::NormalInterfaceDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterNormalInterfaceDeclaration(this);
  }
}

void JavaParser::NormalInterfaceDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitNormalInterfaceDeclaration(this);
  }
}

JavaParser::NormalInterfaceDeclarationContext* JavaParser::normalInterfaceDeclaration() {
  NormalInterfaceDeclarationContext *_localctx = _tracker.createInstance<NormalInterfaceDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 32, JavaParser::RuleNormalInterfaceDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(368);
    match(JavaParser::T__21);
    setState(369);
    match(JavaParser::Identifier);
    setState(371);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == JavaParser::T__15) {
      setState(370);
      typeParameters();
    }
    setState(375);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == JavaParser::T__7) {
      setState(373);
      match(JavaParser::T__7);
      setState(374);
      typeList();
    }
    setState(377);
    interfaceBody();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeListContext ------------------------------------------------------------------

JavaParser::TypeListContext::TypeListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<JavaParser::TypeContext *> JavaParser::TypeListContext::type() {
  return getRuleContexts<JavaParser::TypeContext>();
}

JavaParser::TypeContext* JavaParser::TypeListContext::type(size_t i) {
  return getRuleContext<JavaParser::TypeContext>(i);
}


size_t JavaParser::TypeListContext::getRuleIndex() const {
  return JavaParser::RuleTypeList;
}

void JavaParser::TypeListContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterTypeList(this);
  }
}

void JavaParser::TypeListContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitTypeList(this);
  }
}

JavaParser::TypeListContext* JavaParser::typeList() {
  TypeListContext *_localctx = _tracker.createInstance<TypeListContext>(_ctx, getState());
  enterRule(_localctx, 34, JavaParser::RuleTypeList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(379);
    type();
    setState(384);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == JavaParser::T__16) {
      setState(380);
      match(JavaParser::T__16);
      setState(381);
      type();
      setState(386);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassBodyContext ------------------------------------------------------------------

JavaParser::ClassBodyContext::ClassBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<JavaParser::ClassBodyDeclarationContext *> JavaParser::ClassBodyContext::classBodyDeclaration() {
  return getRuleContexts<JavaParser::ClassBodyDeclarationContext>();
}

JavaParser::ClassBodyDeclarationContext* JavaParser::ClassBodyContext::classBodyDeclaration(size_t i) {
  return getRuleContext<JavaParser::ClassBodyDeclarationContext>(i);
}


size_t JavaParser::ClassBodyContext::getRuleIndex() const {
  return JavaParser::RuleClassBody;
}

void JavaParser::ClassBodyContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterClassBody(this);
  }
}

void JavaParser::ClassBodyContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitClassBody(this);
  }
}

JavaParser::ClassBodyContext* JavaParser::classBody() {
  ClassBodyContext *_localctx = _tracker.createInstance<ClassBodyContext>(_ctx, getState());
  enterRule(_localctx, 36, JavaParser::RuleClassBody);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(387);
    match(JavaParser::T__19);
    setState(391);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << JavaParser::T__1)
      | (1ULL << JavaParser::T__3)
      | (1ULL << JavaParser::T__6)
      | (1ULL << JavaParser::T__9)
      | (1ULL << JavaParser::T__10)
      | (1ULL << JavaParser::T__11)
      | (1ULL << JavaParser::T__12)
      | (1ULL << JavaParser::T__13)
      | (1ULL << JavaParser::T__14)
      | (1ULL << JavaParser::T__15)
      | (1ULL << JavaParser::T__19)
      | (1ULL << JavaParser::T__21)
      | (1ULL << JavaParser::T__24)
      | (1ULL << JavaParser::T__27)
      | (1ULL << JavaParser::T__28)
      | (1ULL << JavaParser::T__29)
      | (1ULL << JavaParser::T__30)
      | (1ULL << JavaParser::T__31)
      | (1ULL << JavaParser::T__32)
      | (1ULL << JavaParser::T__33)
      | (1ULL << JavaParser::T__34)
      | (1ULL << JavaParser::T__35)
      | (1ULL << JavaParser::T__36)
      | (1ULL << JavaParser::T__37)
      | (1ULL << JavaParser::T__38)
      | (1ULL << JavaParser::T__48))) != 0) || _la == JavaParser::Identifier) {
      setState(388);
      classBodyDeclaration();
      setState(393);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(394);
    match(JavaParser::T__20);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InterfaceBodyContext ------------------------------------------------------------------

JavaParser::InterfaceBodyContext::InterfaceBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<JavaParser::InterfaceBodyDeclarationContext *> JavaParser::InterfaceBodyContext::interfaceBodyDeclaration() {
  return getRuleContexts<JavaParser::InterfaceBodyDeclarationContext>();
}

JavaParser::InterfaceBodyDeclarationContext* JavaParser::InterfaceBodyContext::interfaceBodyDeclaration(size_t i) {
  return getRuleContext<JavaParser::InterfaceBodyDeclarationContext>(i);
}


size_t JavaParser::InterfaceBodyContext::getRuleIndex() const {
  return JavaParser::RuleInterfaceBody;
}

void JavaParser::InterfaceBodyContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterInterfaceBody(this);
  }
}

void JavaParser::InterfaceBodyContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitInterfaceBody(this);
  }
}

JavaParser::InterfaceBodyContext* JavaParser::interfaceBody() {
  InterfaceBodyContext *_localctx = _tracker.createInstance<InterfaceBodyContext>(_ctx, getState());
  enterRule(_localctx, 38, JavaParser::RuleInterfaceBody);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(396);
    match(JavaParser::T__19);
    setState(400);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << JavaParser::T__1)
      | (1ULL << JavaParser::T__3)
      | (1ULL << JavaParser::T__6)
      | (1ULL << JavaParser::T__9)
      | (1ULL << JavaParser::T__10)
      | (1ULL << JavaParser::T__11)
      | (1ULL << JavaParser::T__12)
      | (1ULL << JavaParser::T__13)
      | (1ULL << JavaParser::T__14)
      | (1ULL << JavaParser::T__15)
      | (1ULL << JavaParser::T__21)
      | (1ULL << JavaParser::T__24)
      | (1ULL << JavaParser::T__27)
      | (1ULL << JavaParser::T__28)
      | (1ULL << JavaParser::T__29)
      | (1ULL << JavaParser::T__30)
      | (1ULL << JavaParser::T__31)
      | (1ULL << JavaParser::T__32)
      | (1ULL << JavaParser::T__33)
      | (1ULL << JavaParser::T__34)
      | (1ULL << JavaParser::T__35)
      | (1ULL << JavaParser::T__36)
      | (1ULL << JavaParser::T__37)
      | (1ULL << JavaParser::T__38)
      | (1ULL << JavaParser::T__48))) != 0) || _la == JavaParser::Identifier) {
      setState(397);
      interfaceBodyDeclaration();
      setState(402);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(403);
    match(JavaParser::T__20);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassBodyDeclarationContext ------------------------------------------------------------------

JavaParser::ClassBodyDeclarationContext::ClassBodyDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaParser::BlockContext* JavaParser::ClassBodyDeclarationContext::block() {
  return getRuleContext<JavaParser::BlockContext>(0);
}

JavaParser::ModifiersContext* JavaParser::ClassBodyDeclarationContext::modifiers() {
  return getRuleContext<JavaParser::ModifiersContext>(0);
}

JavaParser::MemberContext* JavaParser::ClassBodyDeclarationContext::member() {
  return getRuleContext<JavaParser::MemberContext>(0);
}


size_t JavaParser::ClassBodyDeclarationContext::getRuleIndex() const {
  return JavaParser::RuleClassBodyDeclaration;
}

void JavaParser::ClassBodyDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterClassBodyDeclaration(this);
  }
}

void JavaParser::ClassBodyDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitClassBodyDeclaration(this);
  }
}

JavaParser::ClassBodyDeclarationContext* JavaParser::classBodyDeclaration() {
  ClassBodyDeclarationContext *_localctx = _tracker.createInstance<ClassBodyDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 40, JavaParser::RuleClassBodyDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(413);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(405);
      match(JavaParser::T__1);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(407);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == JavaParser::T__3) {
        setState(406);
        match(JavaParser::T__3);
      }
      setState(409);
      block();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(410);
      modifiers();
      setState(411);
      member();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MemberContext ------------------------------------------------------------------

JavaParser::MemberContext::MemberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaParser::GenericMethodDeclarationContext* JavaParser::MemberContext::genericMethodDeclaration() {
  return getRuleContext<JavaParser::GenericMethodDeclarationContext>(0);
}

JavaParser::MethodDeclarationContext* JavaParser::MemberContext::methodDeclaration() {
  return getRuleContext<JavaParser::MethodDeclarationContext>(0);
}

JavaParser::FieldDeclarationContext* JavaParser::MemberContext::fieldDeclaration() {
  return getRuleContext<JavaParser::FieldDeclarationContext>(0);
}

JavaParser::ConstructorDeclarationContext* JavaParser::MemberContext::constructorDeclaration() {
  return getRuleContext<JavaParser::ConstructorDeclarationContext>(0);
}

JavaParser::InterfaceDeclarationContext* JavaParser::MemberContext::interfaceDeclaration() {
  return getRuleContext<JavaParser::InterfaceDeclarationContext>(0);
}

JavaParser::ClassDeclarationContext* JavaParser::MemberContext::classDeclaration() {
  return getRuleContext<JavaParser::ClassDeclarationContext>(0);
}


size_t JavaParser::MemberContext::getRuleIndex() const {
  return JavaParser::RuleMember;
}

void JavaParser::MemberContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterMember(this);
  }
}

void JavaParser::MemberContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitMember(this);
  }
}

JavaParser::MemberContext* JavaParser::member() {
  MemberContext *_localctx = _tracker.createInstance<MemberContext>(_ctx, getState());
  enterRule(_localctx, 42, JavaParser::RuleMember);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(421);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(415);
      genericMethodDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(416);
      methodDeclaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(417);
      fieldDeclaration();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(418);
      constructorDeclaration();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(419);
      interfaceDeclaration();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(420);
      classDeclaration();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MethodDeclarationContext ------------------------------------------------------------------

JavaParser::MethodDeclarationContext::MethodDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaParser::TypeContext* JavaParser::MethodDeclarationContext::type() {
  return getRuleContext<JavaParser::TypeContext>(0);
}

tree::TerminalNode* JavaParser::MethodDeclarationContext::Identifier() {
  return getToken(JavaParser::Identifier, 0);
}

JavaParser::FormalParametersContext* JavaParser::MethodDeclarationContext::formalParameters() {
  return getRuleContext<JavaParser::FormalParametersContext>(0);
}

JavaParser::MethodDeclarationRestContext* JavaParser::MethodDeclarationContext::methodDeclarationRest() {
  return getRuleContext<JavaParser::MethodDeclarationRestContext>(0);
}


size_t JavaParser::MethodDeclarationContext::getRuleIndex() const {
  return JavaParser::RuleMethodDeclaration;
}

void JavaParser::MethodDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterMethodDeclaration(this);
  }
}

void JavaParser::MethodDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitMethodDeclaration(this);
  }
}

JavaParser::MethodDeclarationContext* JavaParser::methodDeclaration() {
  MethodDeclarationContext *_localctx = _tracker.createInstance<MethodDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 44, JavaParser::RuleMethodDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(440);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case JavaParser::T__31:
      case JavaParser::T__32:
      case JavaParser::T__33:
      case JavaParser::T__34:
      case JavaParser::T__35:
      case JavaParser::T__36:
      case JavaParser::T__37:
      case JavaParser::T__38:
      case JavaParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(423);
        type();
        setState(424);
        match(JavaParser::Identifier);
        setState(425);
        formalParameters();
        setState(430);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == JavaParser::T__22) {
          setState(426);
          match(JavaParser::T__22);
          setState(427);
          match(JavaParser::T__23);
          setState(432);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(433);
        methodDeclarationRest();
        break;
      }

      case JavaParser::T__24: {
        enterOuterAlt(_localctx, 2);
        setState(435);
        match(JavaParser::T__24);
        setState(436);
        match(JavaParser::Identifier);
        setState(437);
        formalParameters();
        setState(438);
        methodDeclarationRest();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MethodDeclarationRestContext ------------------------------------------------------------------

JavaParser::MethodDeclarationRestContext::MethodDeclarationRestContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaParser::MethodBodyContext* JavaParser::MethodDeclarationRestContext::methodBody() {
  return getRuleContext<JavaParser::MethodBodyContext>(0);
}

JavaParser::QualifiedNameListContext* JavaParser::MethodDeclarationRestContext::qualifiedNameList() {
  return getRuleContext<JavaParser::QualifiedNameListContext>(0);
}


size_t JavaParser::MethodDeclarationRestContext::getRuleIndex() const {
  return JavaParser::RuleMethodDeclarationRest;
}

void JavaParser::MethodDeclarationRestContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterMethodDeclarationRest(this);
  }
}

void JavaParser::MethodDeclarationRestContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitMethodDeclarationRest(this);
  }
}

JavaParser::MethodDeclarationRestContext* JavaParser::methodDeclarationRest() {
  MethodDeclarationRestContext *_localctx = _tracker.createInstance<MethodDeclarationRestContext>(_ctx, getState());
  enterRule(_localctx, 46, JavaParser::RuleMethodDeclarationRest);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(444);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == JavaParser::T__25) {
      setState(442);
      match(JavaParser::T__25);
      setState(443);
      qualifiedNameList();
    }
    setState(448);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case JavaParser::T__19: {
        setState(446);
        methodBody();
        break;
      }

      case JavaParser::T__1: {
        setState(447);
        match(JavaParser::T__1);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GenericMethodDeclarationContext ------------------------------------------------------------------

JavaParser::GenericMethodDeclarationContext::GenericMethodDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaParser::TypeParametersContext* JavaParser::GenericMethodDeclarationContext::typeParameters() {
  return getRuleContext<JavaParser::TypeParametersContext>(0);
}

JavaParser::MethodDeclarationContext* JavaParser::GenericMethodDeclarationContext::methodDeclaration() {
  return getRuleContext<JavaParser::MethodDeclarationContext>(0);
}


size_t JavaParser::GenericMethodDeclarationContext::getRuleIndex() const {
  return JavaParser::RuleGenericMethodDeclaration;
}

void JavaParser::GenericMethodDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterGenericMethodDeclaration(this);
  }
}

void JavaParser::GenericMethodDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitGenericMethodDeclaration(this);
  }
}

JavaParser::GenericMethodDeclarationContext* JavaParser::genericMethodDeclaration() {
  GenericMethodDeclarationContext *_localctx = _tracker.createInstance<GenericMethodDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 48, JavaParser::RuleGenericMethodDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(450);
    typeParameters();
    setState(451);
    methodDeclaration();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FieldDeclarationContext ------------------------------------------------------------------

JavaParser::FieldDeclarationContext::FieldDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaParser::TypeContext* JavaParser::FieldDeclarationContext::type() {
  return getRuleContext<JavaParser::TypeContext>(0);
}

JavaParser::VariableDeclaratorsContext* JavaParser::FieldDeclarationContext::variableDeclarators() {
  return getRuleContext<JavaParser::VariableDeclaratorsContext>(0);
}


size_t JavaParser::FieldDeclarationContext::getRuleIndex() const {
  return JavaParser::RuleFieldDeclaration;
}

void JavaParser::FieldDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterFieldDeclaration(this);
  }
}

void JavaParser::FieldDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitFieldDeclaration(this);
  }
}

JavaParser::FieldDeclarationContext* JavaParser::fieldDeclaration() {
  FieldDeclarationContext *_localctx = _tracker.createInstance<FieldDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 50, JavaParser::RuleFieldDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(453);
    type();
    setState(454);
    variableDeclarators();
    setState(455);
    match(JavaParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstructorDeclarationContext ------------------------------------------------------------------

JavaParser::ConstructorDeclarationContext::ConstructorDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavaParser::ConstructorDeclarationContext::Identifier() {
  return getToken(JavaParser::Identifier, 0);
}

JavaParser::FormalParametersContext* JavaParser::ConstructorDeclarationContext::formalParameters() {
  return getRuleContext<JavaParser::FormalParametersContext>(0);
}

JavaParser::ConstructorBodyContext* JavaParser::ConstructorDeclarationContext::constructorBody() {
  return getRuleContext<JavaParser::ConstructorBodyContext>(0);
}

JavaParser::TypeParametersContext* JavaParser::ConstructorDeclarationContext::typeParameters() {
  return getRuleContext<JavaParser::TypeParametersContext>(0);
}

JavaParser::QualifiedNameListContext* JavaParser::ConstructorDeclarationContext::qualifiedNameList() {
  return getRuleContext<JavaParser::QualifiedNameListContext>(0);
}


size_t JavaParser::ConstructorDeclarationContext::getRuleIndex() const {
  return JavaParser::RuleConstructorDeclaration;
}

void JavaParser::ConstructorDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterConstructorDeclaration(this);
  }
}

void JavaParser::ConstructorDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitConstructorDeclaration(this);
  }
}

JavaParser::ConstructorDeclarationContext* JavaParser::constructorDeclaration() {
  ConstructorDeclarationContext *_localctx = _tracker.createInstance<ConstructorDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 52, JavaParser::RuleConstructorDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(458);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == JavaParser::T__15) {
      setState(457);
      typeParameters();
    }
    setState(460);
    match(JavaParser::Identifier);
    setState(461);
    formalParameters();
    setState(464);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == JavaParser::T__25) {
      setState(462);
      match(JavaParser::T__25);
      setState(463);
      qualifiedNameList();
    }
    setState(466);
    constructorBody();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InterfaceBodyDeclarationContext ------------------------------------------------------------------

JavaParser::InterfaceBodyDeclarationContext::InterfaceBodyDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaParser::ModifiersContext* JavaParser::InterfaceBodyDeclarationContext::modifiers() {
  return getRuleContext<JavaParser::ModifiersContext>(0);
}

JavaParser::InterfaceMemberDeclContext* JavaParser::InterfaceBodyDeclarationContext::interfaceMemberDecl() {
  return getRuleContext<JavaParser::InterfaceMemberDeclContext>(0);
}


size_t JavaParser::InterfaceBodyDeclarationContext::getRuleIndex() const {
  return JavaParser::RuleInterfaceBodyDeclaration;
}

void JavaParser::InterfaceBodyDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterInterfaceBodyDeclaration(this);
  }
}

void JavaParser::InterfaceBodyDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitInterfaceBodyDeclaration(this);
  }
}

JavaParser::InterfaceBodyDeclarationContext* JavaParser::interfaceBodyDeclaration() {
  InterfaceBodyDeclarationContext *_localctx = _tracker.createInstance<InterfaceBodyDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 54, JavaParser::RuleInterfaceBodyDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(472);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case JavaParser::T__3:
      case JavaParser::T__6:
      case JavaParser::T__9:
      case JavaParser::T__10:
      case JavaParser::T__11:
      case JavaParser::T__12:
      case JavaParser::T__13:
      case JavaParser::T__14:
      case JavaParser::T__15:
      case JavaParser::T__21:
      case JavaParser::T__24:
      case JavaParser::T__27:
      case JavaParser::T__28:
      case JavaParser::T__29:
      case JavaParser::T__30:
      case JavaParser::T__31:
      case JavaParser::T__32:
      case JavaParser::T__33:
      case JavaParser::T__34:
      case JavaParser::T__35:
      case JavaParser::T__36:
      case JavaParser::T__37:
      case JavaParser::T__38:
      case JavaParser::T__48:
      case JavaParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(468);
        modifiers();
        setState(469);
        interfaceMemberDecl();
        break;
      }

      case JavaParser::T__1: {
        enterOuterAlt(_localctx, 2);
        setState(471);
        match(JavaParser::T__1);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InterfaceMemberDeclContext ------------------------------------------------------------------

JavaParser::InterfaceMemberDeclContext::InterfaceMemberDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaParser::InterfaceMethodOrFieldDeclContext* JavaParser::InterfaceMemberDeclContext::interfaceMethodOrFieldDecl() {
  return getRuleContext<JavaParser::InterfaceMethodOrFieldDeclContext>(0);
}

JavaParser::InterfaceGenericMethodDeclContext* JavaParser::InterfaceMemberDeclContext::interfaceGenericMethodDecl() {
  return getRuleContext<JavaParser::InterfaceGenericMethodDeclContext>(0);
}

tree::TerminalNode* JavaParser::InterfaceMemberDeclContext::Identifier() {
  return getToken(JavaParser::Identifier, 0);
}

JavaParser::VoidInterfaceMethodDeclaratorRestContext* JavaParser::InterfaceMemberDeclContext::voidInterfaceMethodDeclaratorRest() {
  return getRuleContext<JavaParser::VoidInterfaceMethodDeclaratorRestContext>(0);
}

JavaParser::InterfaceDeclarationContext* JavaParser::InterfaceMemberDeclContext::interfaceDeclaration() {
  return getRuleContext<JavaParser::InterfaceDeclarationContext>(0);
}

JavaParser::ClassDeclarationContext* JavaParser::InterfaceMemberDeclContext::classDeclaration() {
  return getRuleContext<JavaParser::ClassDeclarationContext>(0);
}


size_t JavaParser::InterfaceMemberDeclContext::getRuleIndex() const {
  return JavaParser::RuleInterfaceMemberDecl;
}

void JavaParser::InterfaceMemberDeclContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterInterfaceMemberDecl(this);
  }
}

void JavaParser::InterfaceMemberDeclContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitInterfaceMemberDecl(this);
  }
}

JavaParser::InterfaceMemberDeclContext* JavaParser::interfaceMemberDecl() {
  InterfaceMemberDeclContext *_localctx = _tracker.createInstance<InterfaceMemberDeclContext>(_ctx, getState());
  enterRule(_localctx, 56, JavaParser::RuleInterfaceMemberDecl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(481);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case JavaParser::T__31:
      case JavaParser::T__32:
      case JavaParser::T__33:
      case JavaParser::T__34:
      case JavaParser::T__35:
      case JavaParser::T__36:
      case JavaParser::T__37:
      case JavaParser::T__38:
      case JavaParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(474);
        interfaceMethodOrFieldDecl();
        break;
      }

      case JavaParser::T__15: {
        enterOuterAlt(_localctx, 2);
        setState(475);
        interfaceGenericMethodDecl();
        break;
      }

      case JavaParser::T__24: {
        enterOuterAlt(_localctx, 3);
        setState(476);
        match(JavaParser::T__24);
        setState(477);
        match(JavaParser::Identifier);
        setState(478);
        voidInterfaceMethodDeclaratorRest();
        break;
      }

      case JavaParser::T__21:
      case JavaParser::T__48: {
        enterOuterAlt(_localctx, 4);
        setState(479);
        interfaceDeclaration();
        break;
      }

      case JavaParser::T__6: {
        enterOuterAlt(_localctx, 5);
        setState(480);
        classDeclaration();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InterfaceMethodOrFieldDeclContext ------------------------------------------------------------------

JavaParser::InterfaceMethodOrFieldDeclContext::InterfaceMethodOrFieldDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaParser::TypeContext* JavaParser::InterfaceMethodOrFieldDeclContext::type() {
  return getRuleContext<JavaParser::TypeContext>(0);
}

tree::TerminalNode* JavaParser::InterfaceMethodOrFieldDeclContext::Identifier() {
  return getToken(JavaParser::Identifier, 0);
}

JavaParser::InterfaceMethodOrFieldRestContext* JavaParser::InterfaceMethodOrFieldDeclContext::interfaceMethodOrFieldRest() {
  return getRuleContext<JavaParser::InterfaceMethodOrFieldRestContext>(0);
}


size_t JavaParser::InterfaceMethodOrFieldDeclContext::getRuleIndex() const {
  return JavaParser::RuleInterfaceMethodOrFieldDecl;
}

void JavaParser::InterfaceMethodOrFieldDeclContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterInterfaceMethodOrFieldDecl(this);
  }
}

void JavaParser::InterfaceMethodOrFieldDeclContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitInterfaceMethodOrFieldDecl(this);
  }
}

JavaParser::InterfaceMethodOrFieldDeclContext* JavaParser::interfaceMethodOrFieldDecl() {
  InterfaceMethodOrFieldDeclContext *_localctx = _tracker.createInstance<InterfaceMethodOrFieldDeclContext>(_ctx, getState());
  enterRule(_localctx, 58, JavaParser::RuleInterfaceMethodOrFieldDecl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(483);
    type();
    setState(484);
    match(JavaParser::Identifier);
    setState(485);
    interfaceMethodOrFieldRest();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InterfaceMethodOrFieldRestContext ------------------------------------------------------------------

JavaParser::InterfaceMethodOrFieldRestContext::InterfaceMethodOrFieldRestContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaParser::ConstantDeclaratorsRestContext* JavaParser::InterfaceMethodOrFieldRestContext::constantDeclaratorsRest() {
  return getRuleContext<JavaParser::ConstantDeclaratorsRestContext>(0);
}

JavaParser::InterfaceMethodDeclaratorRestContext* JavaParser::InterfaceMethodOrFieldRestContext::interfaceMethodDeclaratorRest() {
  return getRuleContext<JavaParser::InterfaceMethodDeclaratorRestContext>(0);
}


size_t JavaParser::InterfaceMethodOrFieldRestContext::getRuleIndex() const {
  return JavaParser::RuleInterfaceMethodOrFieldRest;
}

void JavaParser::InterfaceMethodOrFieldRestContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterInterfaceMethodOrFieldRest(this);
  }
}

void JavaParser::InterfaceMethodOrFieldRestContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitInterfaceMethodOrFieldRest(this);
  }
}

JavaParser::InterfaceMethodOrFieldRestContext* JavaParser::interfaceMethodOrFieldRest() {
  InterfaceMethodOrFieldRestContext *_localctx = _tracker.createInstance<InterfaceMethodOrFieldRestContext>(_ctx, getState());
  enterRule(_localctx, 60, JavaParser::RuleInterfaceMethodOrFieldRest);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(491);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case JavaParser::T__22:
      case JavaParser::T__26: {
        enterOuterAlt(_localctx, 1);
        setState(487);
        constantDeclaratorsRest();
        setState(488);
        match(JavaParser::T__1);
        break;
      }

      case JavaParser::T__41: {
        enterOuterAlt(_localctx, 2);
        setState(490);
        interfaceMethodDeclaratorRest();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VoidMethodDeclaratorRestContext ------------------------------------------------------------------

JavaParser::VoidMethodDeclaratorRestContext::VoidMethodDeclaratorRestContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaParser::FormalParametersContext* JavaParser::VoidMethodDeclaratorRestContext::formalParameters() {
  return getRuleContext<JavaParser::FormalParametersContext>(0);
}

JavaParser::MethodBodyContext* JavaParser::VoidMethodDeclaratorRestContext::methodBody() {
  return getRuleContext<JavaParser::MethodBodyContext>(0);
}

JavaParser::QualifiedNameListContext* JavaParser::VoidMethodDeclaratorRestContext::qualifiedNameList() {
  return getRuleContext<JavaParser::QualifiedNameListContext>(0);
}


size_t JavaParser::VoidMethodDeclaratorRestContext::getRuleIndex() const {
  return JavaParser::RuleVoidMethodDeclaratorRest;
}

void JavaParser::VoidMethodDeclaratorRestContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterVoidMethodDeclaratorRest(this);
  }
}

void JavaParser::VoidMethodDeclaratorRestContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitVoidMethodDeclaratorRest(this);
  }
}

JavaParser::VoidMethodDeclaratorRestContext* JavaParser::voidMethodDeclaratorRest() {
  VoidMethodDeclaratorRestContext *_localctx = _tracker.createInstance<VoidMethodDeclaratorRestContext>(_ctx, getState());
  enterRule(_localctx, 62, JavaParser::RuleVoidMethodDeclaratorRest);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(493);
    formalParameters();
    setState(496);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == JavaParser::T__25) {
      setState(494);
      match(JavaParser::T__25);
      setState(495);
      qualifiedNameList();
    }
    setState(500);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case JavaParser::T__19: {
        setState(498);
        methodBody();
        break;
      }

      case JavaParser::T__1: {
        setState(499);
        match(JavaParser::T__1);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InterfaceMethodDeclaratorRestContext ------------------------------------------------------------------

JavaParser::InterfaceMethodDeclaratorRestContext::InterfaceMethodDeclaratorRestContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaParser::FormalParametersContext* JavaParser::InterfaceMethodDeclaratorRestContext::formalParameters() {
  return getRuleContext<JavaParser::FormalParametersContext>(0);
}

JavaParser::QualifiedNameListContext* JavaParser::InterfaceMethodDeclaratorRestContext::qualifiedNameList() {
  return getRuleContext<JavaParser::QualifiedNameListContext>(0);
}


size_t JavaParser::InterfaceMethodDeclaratorRestContext::getRuleIndex() const {
  return JavaParser::RuleInterfaceMethodDeclaratorRest;
}

void JavaParser::InterfaceMethodDeclaratorRestContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterInterfaceMethodDeclaratorRest(this);
  }
}

void JavaParser::InterfaceMethodDeclaratorRestContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitInterfaceMethodDeclaratorRest(this);
  }
}

JavaParser::InterfaceMethodDeclaratorRestContext* JavaParser::interfaceMethodDeclaratorRest() {
  InterfaceMethodDeclaratorRestContext *_localctx = _tracker.createInstance<InterfaceMethodDeclaratorRestContext>(_ctx, getState());
  enterRule(_localctx, 64, JavaParser::RuleInterfaceMethodDeclaratorRest);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(502);
    formalParameters();
    setState(507);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == JavaParser::T__22) {
      setState(503);
      match(JavaParser::T__22);
      setState(504);
      match(JavaParser::T__23);
      setState(509);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(512);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == JavaParser::T__25) {
      setState(510);
      match(JavaParser::T__25);
      setState(511);
      qualifiedNameList();
    }
    setState(514);
    match(JavaParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InterfaceGenericMethodDeclContext ------------------------------------------------------------------

JavaParser::InterfaceGenericMethodDeclContext::InterfaceGenericMethodDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaParser::TypeParametersContext* JavaParser::InterfaceGenericMethodDeclContext::typeParameters() {
  return getRuleContext<JavaParser::TypeParametersContext>(0);
}

tree::TerminalNode* JavaParser::InterfaceGenericMethodDeclContext::Identifier() {
  return getToken(JavaParser::Identifier, 0);
}

JavaParser::InterfaceMethodDeclaratorRestContext* JavaParser::InterfaceGenericMethodDeclContext::interfaceMethodDeclaratorRest() {
  return getRuleContext<JavaParser::InterfaceMethodDeclaratorRestContext>(0);
}

JavaParser::TypeContext* JavaParser::InterfaceGenericMethodDeclContext::type() {
  return getRuleContext<JavaParser::TypeContext>(0);
}


size_t JavaParser::InterfaceGenericMethodDeclContext::getRuleIndex() const {
  return JavaParser::RuleInterfaceGenericMethodDecl;
}

void JavaParser::InterfaceGenericMethodDeclContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterInterfaceGenericMethodDecl(this);
  }
}

void JavaParser::InterfaceGenericMethodDeclContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitInterfaceGenericMethodDecl(this);
  }
}

JavaParser::InterfaceGenericMethodDeclContext* JavaParser::interfaceGenericMethodDecl() {
  InterfaceGenericMethodDeclContext *_localctx = _tracker.createInstance<InterfaceGenericMethodDeclContext>(_ctx, getState());
  enterRule(_localctx, 66, JavaParser::RuleInterfaceGenericMethodDecl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(516);
    typeParameters();
    setState(519);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case JavaParser::T__31:
      case JavaParser::T__32:
      case JavaParser::T__33:
      case JavaParser::T__34:
      case JavaParser::T__35:
      case JavaParser::T__36:
      case JavaParser::T__37:
      case JavaParser::T__38:
      case JavaParser::Identifier: {
        setState(517);
        type();
        break;
      }

      case JavaParser::T__24: {
        setState(518);
        match(JavaParser::T__24);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(521);
    match(JavaParser::Identifier);
    setState(522);
    interfaceMethodDeclaratorRest();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VoidInterfaceMethodDeclaratorRestContext ------------------------------------------------------------------

JavaParser::VoidInterfaceMethodDeclaratorRestContext::VoidInterfaceMethodDeclaratorRestContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaParser::FormalParametersContext* JavaParser::VoidInterfaceMethodDeclaratorRestContext::formalParameters() {
  return getRuleContext<JavaParser::FormalParametersContext>(0);
}

JavaParser::QualifiedNameListContext* JavaParser::VoidInterfaceMethodDeclaratorRestContext::qualifiedNameList() {
  return getRuleContext<JavaParser::QualifiedNameListContext>(0);
}


size_t JavaParser::VoidInterfaceMethodDeclaratorRestContext::getRuleIndex() const {
  return JavaParser::RuleVoidInterfaceMethodDeclaratorRest;
}

void JavaParser::VoidInterfaceMethodDeclaratorRestContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterVoidInterfaceMethodDeclaratorRest(this);
  }
}

void JavaParser::VoidInterfaceMethodDeclaratorRestContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitVoidInterfaceMethodDeclaratorRest(this);
  }
}

JavaParser::VoidInterfaceMethodDeclaratorRestContext* JavaParser::voidInterfaceMethodDeclaratorRest() {
  VoidInterfaceMethodDeclaratorRestContext *_localctx = _tracker.createInstance<VoidInterfaceMethodDeclaratorRestContext>(_ctx, getState());
  enterRule(_localctx, 68, JavaParser::RuleVoidInterfaceMethodDeclaratorRest);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(524);
    formalParameters();
    setState(527);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == JavaParser::T__25) {
      setState(525);
      match(JavaParser::T__25);
      setState(526);
      qualifiedNameList();
    }
    setState(529);
    match(JavaParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstantDeclaratorContext ------------------------------------------------------------------

JavaParser::ConstantDeclaratorContext::ConstantDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavaParser::ConstantDeclaratorContext::Identifier() {
  return getToken(JavaParser::Identifier, 0);
}

JavaParser::ConstantDeclaratorRestContext* JavaParser::ConstantDeclaratorContext::constantDeclaratorRest() {
  return getRuleContext<JavaParser::ConstantDeclaratorRestContext>(0);
}


size_t JavaParser::ConstantDeclaratorContext::getRuleIndex() const {
  return JavaParser::RuleConstantDeclarator;
}

void JavaParser::ConstantDeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterConstantDeclarator(this);
  }
}

void JavaParser::ConstantDeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitConstantDeclarator(this);
  }
}

JavaParser::ConstantDeclaratorContext* JavaParser::constantDeclarator() {
  ConstantDeclaratorContext *_localctx = _tracker.createInstance<ConstantDeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 70, JavaParser::RuleConstantDeclarator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(531);
    match(JavaParser::Identifier);
    setState(532);
    constantDeclaratorRest();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableDeclaratorsContext ------------------------------------------------------------------

JavaParser::VariableDeclaratorsContext::VariableDeclaratorsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<JavaParser::VariableDeclaratorContext *> JavaParser::VariableDeclaratorsContext::variableDeclarator() {
  return getRuleContexts<JavaParser::VariableDeclaratorContext>();
}

JavaParser::VariableDeclaratorContext* JavaParser::VariableDeclaratorsContext::variableDeclarator(size_t i) {
  return getRuleContext<JavaParser::VariableDeclaratorContext>(i);
}


size_t JavaParser::VariableDeclaratorsContext::getRuleIndex() const {
  return JavaParser::RuleVariableDeclarators;
}

void JavaParser::VariableDeclaratorsContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterVariableDeclarators(this);
  }
}

void JavaParser::VariableDeclaratorsContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitVariableDeclarators(this);
  }
}

JavaParser::VariableDeclaratorsContext* JavaParser::variableDeclarators() {
  VariableDeclaratorsContext *_localctx = _tracker.createInstance<VariableDeclaratorsContext>(_ctx, getState());
  enterRule(_localctx, 72, JavaParser::RuleVariableDeclarators);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(534);
    variableDeclarator();
    setState(539);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == JavaParser::T__16) {
      setState(535);
      match(JavaParser::T__16);
      setState(536);
      variableDeclarator();
      setState(541);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableDeclaratorContext ------------------------------------------------------------------

JavaParser::VariableDeclaratorContext::VariableDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaParser::VariableDeclaratorIdContext* JavaParser::VariableDeclaratorContext::variableDeclaratorId() {
  return getRuleContext<JavaParser::VariableDeclaratorIdContext>(0);
}

JavaParser::VariableInitializerContext* JavaParser::VariableDeclaratorContext::variableInitializer() {
  return getRuleContext<JavaParser::VariableInitializerContext>(0);
}


size_t JavaParser::VariableDeclaratorContext::getRuleIndex() const {
  return JavaParser::RuleVariableDeclarator;
}

void JavaParser::VariableDeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterVariableDeclarator(this);
  }
}

void JavaParser::VariableDeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitVariableDeclarator(this);
  }
}

JavaParser::VariableDeclaratorContext* JavaParser::variableDeclarator() {
  VariableDeclaratorContext *_localctx = _tracker.createInstance<VariableDeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 74, JavaParser::RuleVariableDeclarator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(542);
    variableDeclaratorId();
    setState(545);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == JavaParser::T__26) {
      setState(543);
      match(JavaParser::T__26);
      setState(544);
      variableInitializer();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstantDeclaratorsRestContext ------------------------------------------------------------------

JavaParser::ConstantDeclaratorsRestContext::ConstantDeclaratorsRestContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaParser::ConstantDeclaratorRestContext* JavaParser::ConstantDeclaratorsRestContext::constantDeclaratorRest() {
  return getRuleContext<JavaParser::ConstantDeclaratorRestContext>(0);
}

std::vector<JavaParser::ConstantDeclaratorContext *> JavaParser::ConstantDeclaratorsRestContext::constantDeclarator() {
  return getRuleContexts<JavaParser::ConstantDeclaratorContext>();
}

JavaParser::ConstantDeclaratorContext* JavaParser::ConstantDeclaratorsRestContext::constantDeclarator(size_t i) {
  return getRuleContext<JavaParser::ConstantDeclaratorContext>(i);
}


size_t JavaParser::ConstantDeclaratorsRestContext::getRuleIndex() const {
  return JavaParser::RuleConstantDeclaratorsRest;
}

void JavaParser::ConstantDeclaratorsRestContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterConstantDeclaratorsRest(this);
  }
}

void JavaParser::ConstantDeclaratorsRestContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitConstantDeclaratorsRest(this);
  }
}

JavaParser::ConstantDeclaratorsRestContext* JavaParser::constantDeclaratorsRest() {
  ConstantDeclaratorsRestContext *_localctx = _tracker.createInstance<ConstantDeclaratorsRestContext>(_ctx, getState());
  enterRule(_localctx, 76, JavaParser::RuleConstantDeclaratorsRest);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(547);
    constantDeclaratorRest();
    setState(552);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == JavaParser::T__16) {
      setState(548);
      match(JavaParser::T__16);
      setState(549);
      constantDeclarator();
      setState(554);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstantDeclaratorRestContext ------------------------------------------------------------------

JavaParser::ConstantDeclaratorRestContext::ConstantDeclaratorRestContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaParser::VariableInitializerContext* JavaParser::ConstantDeclaratorRestContext::variableInitializer() {
  return getRuleContext<JavaParser::VariableInitializerContext>(0);
}


size_t JavaParser::ConstantDeclaratorRestContext::getRuleIndex() const {
  return JavaParser::RuleConstantDeclaratorRest;
}

void JavaParser::ConstantDeclaratorRestContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterConstantDeclaratorRest(this);
  }
}

void JavaParser::ConstantDeclaratorRestContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitConstantDeclaratorRest(this);
  }
}

JavaParser::ConstantDeclaratorRestContext* JavaParser::constantDeclaratorRest() {
  ConstantDeclaratorRestContext *_localctx = _tracker.createInstance<ConstantDeclaratorRestContext>(_ctx, getState());
  enterRule(_localctx, 78, JavaParser::RuleConstantDeclaratorRest);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(559);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == JavaParser::T__22) {
      setState(555);
      match(JavaParser::T__22);
      setState(556);
      match(JavaParser::T__23);
      setState(561);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(562);
    match(JavaParser::T__26);
    setState(563);
    variableInitializer();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableDeclaratorIdContext ------------------------------------------------------------------

JavaParser::VariableDeclaratorIdContext::VariableDeclaratorIdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavaParser::VariableDeclaratorIdContext::Identifier() {
  return getToken(JavaParser::Identifier, 0);
}


size_t JavaParser::VariableDeclaratorIdContext::getRuleIndex() const {
  return JavaParser::RuleVariableDeclaratorId;
}

void JavaParser::VariableDeclaratorIdContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterVariableDeclaratorId(this);
  }
}

void JavaParser::VariableDeclaratorIdContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitVariableDeclaratorId(this);
  }
}

JavaParser::VariableDeclaratorIdContext* JavaParser::variableDeclaratorId() {
  VariableDeclaratorIdContext *_localctx = _tracker.createInstance<VariableDeclaratorIdContext>(_ctx, getState());
  enterRule(_localctx, 80, JavaParser::RuleVariableDeclaratorId);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(565);
    match(JavaParser::Identifier);
    setState(570);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == JavaParser::T__22) {
      setState(566);
      match(JavaParser::T__22);
      setState(567);
      match(JavaParser::T__23);
      setState(572);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableInitializerContext ------------------------------------------------------------------

JavaParser::VariableInitializerContext::VariableInitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaParser::ArrayInitializerContext* JavaParser::VariableInitializerContext::arrayInitializer() {
  return getRuleContext<JavaParser::ArrayInitializerContext>(0);
}

JavaParser::ExpressionContext* JavaParser::VariableInitializerContext::expression() {
  return getRuleContext<JavaParser::ExpressionContext>(0);
}


size_t JavaParser::VariableInitializerContext::getRuleIndex() const {
  return JavaParser::RuleVariableInitializer;
}

void JavaParser::VariableInitializerContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterVariableInitializer(this);
  }
}

void JavaParser::VariableInitializerContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitVariableInitializer(this);
  }
}

JavaParser::VariableInitializerContext* JavaParser::variableInitializer() {
  VariableInitializerContext *_localctx = _tracker.createInstance<VariableInitializerContext>(_ctx, getState());
  enterRule(_localctx, 82, JavaParser::RuleVariableInitializer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(575);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case JavaParser::T__19: {
        enterOuterAlt(_localctx, 1);
        setState(573);
        arrayInitializer();
        break;
      }

      case JavaParser::T__24:
      case JavaParser::T__31:
      case JavaParser::T__32:
      case JavaParser::T__33:
      case JavaParser::T__34:
      case JavaParser::T__35:
      case JavaParser::T__36:
      case JavaParser::T__37:
      case JavaParser::T__38:
      case JavaParser::T__40:
      case JavaParser::T__41:
      case JavaParser::T__44:
      case JavaParser::T__45:
      case JavaParser::T__46:
      case JavaParser::T__47:
      case JavaParser::T__65:
      case JavaParser::T__66:
      case JavaParser::T__67:
      case JavaParser::T__68:
      case JavaParser::T__69:
      case JavaParser::T__70:
      case JavaParser::T__71:
      case JavaParser::HexLiteral:
      case JavaParser::DecimalLiteral:
      case JavaParser::OctalLiteral:
      case JavaParser::FloatingPointLiteral:
      case JavaParser::CharacterLiteral:
      case JavaParser::StringLiteral:
      case JavaParser::Identifier: {
        enterOuterAlt(_localctx, 2);
        setState(574);
        expression(0);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrayInitializerContext ------------------------------------------------------------------

JavaParser::ArrayInitializerContext::ArrayInitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<JavaParser::VariableInitializerContext *> JavaParser::ArrayInitializerContext::variableInitializer() {
  return getRuleContexts<JavaParser::VariableInitializerContext>();
}

JavaParser::VariableInitializerContext* JavaParser::ArrayInitializerContext::variableInitializer(size_t i) {
  return getRuleContext<JavaParser::VariableInitializerContext>(i);
}


size_t JavaParser::ArrayInitializerContext::getRuleIndex() const {
  return JavaParser::RuleArrayInitializer;
}

void JavaParser::ArrayInitializerContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterArrayInitializer(this);
  }
}

void JavaParser::ArrayInitializerContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitArrayInitializer(this);
  }
}

JavaParser::ArrayInitializerContext* JavaParser::arrayInitializer() {
  ArrayInitializerContext *_localctx = _tracker.createInstance<ArrayInitializerContext>(_ctx, getState());
  enterRule(_localctx, 84, JavaParser::RuleArrayInitializer);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(577);
    match(JavaParser::T__19);
    setState(589);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << JavaParser::T__19)
      | (1ULL << JavaParser::T__24)
      | (1ULL << JavaParser::T__31)
      | (1ULL << JavaParser::T__32)
      | (1ULL << JavaParser::T__33)
      | (1ULL << JavaParser::T__34)
      | (1ULL << JavaParser::T__35)
      | (1ULL << JavaParser::T__36)
      | (1ULL << JavaParser::T__37)
      | (1ULL << JavaParser::T__38)
      | (1ULL << JavaParser::T__40)
      | (1ULL << JavaParser::T__41)
      | (1ULL << JavaParser::T__44)
      | (1ULL << JavaParser::T__45)
      | (1ULL << JavaParser::T__46)
      | (1ULL << JavaParser::T__47))) != 0) || ((((_la - 66) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 66)) & ((1ULL << (JavaParser::T__65 - 66))
      | (1ULL << (JavaParser::T__66 - 66))
      | (1ULL << (JavaParser::T__67 - 66))
      | (1ULL << (JavaParser::T__68 - 66))
      | (1ULL << (JavaParser::T__69 - 66))
      | (1ULL << (JavaParser::T__70 - 66))
      | (1ULL << (JavaParser::T__71 - 66))
      | (1ULL << (JavaParser::HexLiteral - 66))
      | (1ULL << (JavaParser::DecimalLiteral - 66))
      | (1ULL << (JavaParser::OctalLiteral - 66))
      | (1ULL << (JavaParser::FloatingPointLiteral - 66))
      | (1ULL << (JavaParser::CharacterLiteral - 66))
      | (1ULL << (JavaParser::StringLiteral - 66))
      | (1ULL << (JavaParser::Identifier - 66)))) != 0)) {
      setState(578);
      variableInitializer();
      setState(583);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 55, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(579);
          match(JavaParser::T__16);
          setState(580);
          variableInitializer(); 
        }
        setState(585);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 55, _ctx);
      }
      setState(587);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == JavaParser::T__16) {
        setState(586);
        match(JavaParser::T__16);
      }
    }
    setState(591);
    match(JavaParser::T__20);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ModifierContext ------------------------------------------------------------------

JavaParser::ModifierContext::ModifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaParser::AnnotationContext* JavaParser::ModifierContext::annotation() {
  return getRuleContext<JavaParser::AnnotationContext>(0);
}


size_t JavaParser::ModifierContext::getRuleIndex() const {
  return JavaParser::RuleModifier;
}

void JavaParser::ModifierContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterModifier(this);
  }
}

void JavaParser::ModifierContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitModifier(this);
  }
}

JavaParser::ModifierContext* JavaParser::modifier() {
  ModifierContext *_localctx = _tracker.createInstance<ModifierContext>(_ctx, getState());
  enterRule(_localctx, 86, JavaParser::RuleModifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(605);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case JavaParser::T__48: {
        enterOuterAlt(_localctx, 1);
        setState(593);
        annotation();
        break;
      }

      case JavaParser::T__9: {
        enterOuterAlt(_localctx, 2);
        setState(594);
        match(JavaParser::T__9);
        break;
      }

      case JavaParser::T__10: {
        enterOuterAlt(_localctx, 3);
        setState(595);
        match(JavaParser::T__10);
        break;
      }

      case JavaParser::T__11: {
        enterOuterAlt(_localctx, 4);
        setState(596);
        match(JavaParser::T__11);
        break;
      }

      case JavaParser::T__3: {
        enterOuterAlt(_localctx, 5);
        setState(597);
        match(JavaParser::T__3);
        break;
      }

      case JavaParser::T__12: {
        enterOuterAlt(_localctx, 6);
        setState(598);
        match(JavaParser::T__12);
        break;
      }

      case JavaParser::T__13: {
        enterOuterAlt(_localctx, 7);
        setState(599);
        match(JavaParser::T__13);
        break;
      }

      case JavaParser::T__27: {
        enterOuterAlt(_localctx, 8);
        setState(600);
        match(JavaParser::T__27);
        break;
      }

      case JavaParser::T__28: {
        enterOuterAlt(_localctx, 9);
        setState(601);
        match(JavaParser::T__28);
        break;
      }

      case JavaParser::T__29: {
        enterOuterAlt(_localctx, 10);
        setState(602);
        match(JavaParser::T__29);
        break;
      }

      case JavaParser::T__30: {
        enterOuterAlt(_localctx, 11);
        setState(603);
        match(JavaParser::T__30);
        break;
      }

      case JavaParser::T__14: {
        enterOuterAlt(_localctx, 12);
        setState(604);
        match(JavaParser::T__14);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PackageOrTypeNameContext ------------------------------------------------------------------

JavaParser::PackageOrTypeNameContext::PackageOrTypeNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaParser::QualifiedNameContext* JavaParser::PackageOrTypeNameContext::qualifiedName() {
  return getRuleContext<JavaParser::QualifiedNameContext>(0);
}


size_t JavaParser::PackageOrTypeNameContext::getRuleIndex() const {
  return JavaParser::RulePackageOrTypeName;
}

void JavaParser::PackageOrTypeNameContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterPackageOrTypeName(this);
  }
}

void JavaParser::PackageOrTypeNameContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitPackageOrTypeName(this);
  }
}

JavaParser::PackageOrTypeNameContext* JavaParser::packageOrTypeName() {
  PackageOrTypeNameContext *_localctx = _tracker.createInstance<PackageOrTypeNameContext>(_ctx, getState());
  enterRule(_localctx, 88, JavaParser::RulePackageOrTypeName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(607);
    qualifiedName();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumConstantNameContext ------------------------------------------------------------------

JavaParser::EnumConstantNameContext::EnumConstantNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavaParser::EnumConstantNameContext::Identifier() {
  return getToken(JavaParser::Identifier, 0);
}


size_t JavaParser::EnumConstantNameContext::getRuleIndex() const {
  return JavaParser::RuleEnumConstantName;
}

void JavaParser::EnumConstantNameContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterEnumConstantName(this);
  }
}

void JavaParser::EnumConstantNameContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitEnumConstantName(this);
  }
}

JavaParser::EnumConstantNameContext* JavaParser::enumConstantName() {
  EnumConstantNameContext *_localctx = _tracker.createInstance<EnumConstantNameContext>(_ctx, getState());
  enterRule(_localctx, 90, JavaParser::RuleEnumConstantName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(609);
    match(JavaParser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeNameContext ------------------------------------------------------------------

JavaParser::TypeNameContext::TypeNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaParser::QualifiedNameContext* JavaParser::TypeNameContext::qualifiedName() {
  return getRuleContext<JavaParser::QualifiedNameContext>(0);
}


size_t JavaParser::TypeNameContext::getRuleIndex() const {
  return JavaParser::RuleTypeName;
}

void JavaParser::TypeNameContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterTypeName(this);
  }
}

void JavaParser::TypeNameContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitTypeName(this);
  }
}

JavaParser::TypeNameContext* JavaParser::typeName() {
  TypeNameContext *_localctx = _tracker.createInstance<TypeNameContext>(_ctx, getState());
  enterRule(_localctx, 92, JavaParser::RuleTypeName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(611);
    qualifiedName();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

JavaParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaParser::ClassOrInterfaceTypeContext* JavaParser::TypeContext::classOrInterfaceType() {
  return getRuleContext<JavaParser::ClassOrInterfaceTypeContext>(0);
}

JavaParser::PrimitiveTypeContext* JavaParser::TypeContext::primitiveType() {
  return getRuleContext<JavaParser::PrimitiveTypeContext>(0);
}


size_t JavaParser::TypeContext::getRuleIndex() const {
  return JavaParser::RuleType;
}

void JavaParser::TypeContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterType(this);
  }
}

void JavaParser::TypeContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitType(this);
  }
}

JavaParser::TypeContext* JavaParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 94, JavaParser::RuleType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    setState(629);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case JavaParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(613);
        classOrInterfaceType();
        setState(618);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 59, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(614);
            match(JavaParser::T__22);
            setState(615);
            match(JavaParser::T__23); 
          }
          setState(620);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 59, _ctx);
        }
        break;
      }

      case JavaParser::T__31:
      case JavaParser::T__32:
      case JavaParser::T__33:
      case JavaParser::T__34:
      case JavaParser::T__35:
      case JavaParser::T__36:
      case JavaParser::T__37:
      case JavaParser::T__38: {
        enterOuterAlt(_localctx, 2);
        setState(621);
        primitiveType();
        setState(626);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 60, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(622);
            match(JavaParser::T__22);
            setState(623);
            match(JavaParser::T__23); 
          }
          setState(628);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 60, _ctx);
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassOrInterfaceTypeContext ------------------------------------------------------------------

JavaParser::ClassOrInterfaceTypeContext::ClassOrInterfaceTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> JavaParser::ClassOrInterfaceTypeContext::Identifier() {
  return getTokens(JavaParser::Identifier);
}

tree::TerminalNode* JavaParser::ClassOrInterfaceTypeContext::Identifier(size_t i) {
  return getToken(JavaParser::Identifier, i);
}

std::vector<JavaParser::TypeArgumentsContext *> JavaParser::ClassOrInterfaceTypeContext::typeArguments() {
  return getRuleContexts<JavaParser::TypeArgumentsContext>();
}

JavaParser::TypeArgumentsContext* JavaParser::ClassOrInterfaceTypeContext::typeArguments(size_t i) {
  return getRuleContext<JavaParser::TypeArgumentsContext>(i);
}


size_t JavaParser::ClassOrInterfaceTypeContext::getRuleIndex() const {
  return JavaParser::RuleClassOrInterfaceType;
}

void JavaParser::ClassOrInterfaceTypeContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterClassOrInterfaceType(this);
  }
}

void JavaParser::ClassOrInterfaceTypeContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitClassOrInterfaceType(this);
  }
}

JavaParser::ClassOrInterfaceTypeContext* JavaParser::classOrInterfaceType() {
  ClassOrInterfaceTypeContext *_localctx = _tracker.createInstance<ClassOrInterfaceTypeContext>(_ctx, getState());
  enterRule(_localctx, 96, JavaParser::RuleClassOrInterfaceType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(631);
    match(JavaParser::Identifier);
    setState(633);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 62, _ctx)) {
    case 1: {
      setState(632);
      typeArguments();
      break;
    }

    }
    setState(642);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 64, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(635);
        match(JavaParser::T__4);
        setState(636);
        match(JavaParser::Identifier);
        setState(638);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 63, _ctx)) {
        case 1: {
          setState(637);
          typeArguments();
          break;
        }

        } 
      }
      setState(644);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 64, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimitiveTypeContext ------------------------------------------------------------------

JavaParser::PrimitiveTypeContext::PrimitiveTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t JavaParser::PrimitiveTypeContext::getRuleIndex() const {
  return JavaParser::RulePrimitiveType;
}

void JavaParser::PrimitiveTypeContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterPrimitiveType(this);
  }
}

void JavaParser::PrimitiveTypeContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitPrimitiveType(this);
  }
}

JavaParser::PrimitiveTypeContext* JavaParser::primitiveType() {
  PrimitiveTypeContext *_localctx = _tracker.createInstance<PrimitiveTypeContext>(_ctx, getState());
  enterRule(_localctx, 98, JavaParser::RulePrimitiveType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(645);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << JavaParser::T__31)
      | (1ULL << JavaParser::T__32)
      | (1ULL << JavaParser::T__33)
      | (1ULL << JavaParser::T__34)
      | (1ULL << JavaParser::T__35)
      | (1ULL << JavaParser::T__36)
      | (1ULL << JavaParser::T__37)
      | (1ULL << JavaParser::T__38))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableModifierContext ------------------------------------------------------------------

JavaParser::VariableModifierContext::VariableModifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaParser::AnnotationContext* JavaParser::VariableModifierContext::annotation() {
  return getRuleContext<JavaParser::AnnotationContext>(0);
}


size_t JavaParser::VariableModifierContext::getRuleIndex() const {
  return JavaParser::RuleVariableModifier;
}

void JavaParser::VariableModifierContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterVariableModifier(this);
  }
}

void JavaParser::VariableModifierContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitVariableModifier(this);
  }
}

JavaParser::VariableModifierContext* JavaParser::variableModifier() {
  VariableModifierContext *_localctx = _tracker.createInstance<VariableModifierContext>(_ctx, getState());
  enterRule(_localctx, 100, JavaParser::RuleVariableModifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(649);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case JavaParser::T__13: {
        enterOuterAlt(_localctx, 1);
        setState(647);
        match(JavaParser::T__13);
        break;
      }

      case JavaParser::T__48: {
        enterOuterAlt(_localctx, 2);
        setState(648);
        annotation();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeArgumentsContext ------------------------------------------------------------------

JavaParser::TypeArgumentsContext::TypeArgumentsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<JavaParser::TypeArgumentContext *> JavaParser::TypeArgumentsContext::typeArgument() {
  return getRuleContexts<JavaParser::TypeArgumentContext>();
}

JavaParser::TypeArgumentContext* JavaParser::TypeArgumentsContext::typeArgument(size_t i) {
  return getRuleContext<JavaParser::TypeArgumentContext>(i);
}


size_t JavaParser::TypeArgumentsContext::getRuleIndex() const {
  return JavaParser::RuleTypeArguments;
}

void JavaParser::TypeArgumentsContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterTypeArguments(this);
  }
}

void JavaParser::TypeArgumentsContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitTypeArguments(this);
  }
}

JavaParser::TypeArgumentsContext* JavaParser::typeArguments() {
  TypeArgumentsContext *_localctx = _tracker.createInstance<TypeArgumentsContext>(_ctx, getState());
  enterRule(_localctx, 102, JavaParser::RuleTypeArguments);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(651);
    match(JavaParser::T__15);
    setState(652);
    typeArgument();
    setState(657);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == JavaParser::T__16) {
      setState(653);
      match(JavaParser::T__16);
      setState(654);
      typeArgument();
      setState(659);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(660);
    match(JavaParser::T__17);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeArgumentContext ------------------------------------------------------------------

JavaParser::TypeArgumentContext::TypeArgumentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaParser::TypeContext* JavaParser::TypeArgumentContext::type() {
  return getRuleContext<JavaParser::TypeContext>(0);
}


size_t JavaParser::TypeArgumentContext::getRuleIndex() const {
  return JavaParser::RuleTypeArgument;
}

void JavaParser::TypeArgumentContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterTypeArgument(this);
  }
}

void JavaParser::TypeArgumentContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitTypeArgument(this);
  }
}

JavaParser::TypeArgumentContext* JavaParser::typeArgument() {
  TypeArgumentContext *_localctx = _tracker.createInstance<TypeArgumentContext>(_ctx, getState());
  enterRule(_localctx, 104, JavaParser::RuleTypeArgument);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(668);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case JavaParser::T__31:
      case JavaParser::T__32:
      case JavaParser::T__33:
      case JavaParser::T__34:
      case JavaParser::T__35:
      case JavaParser::T__36:
      case JavaParser::T__37:
      case JavaParser::T__38:
      case JavaParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(662);
        type();
        break;
      }

      case JavaParser::T__39: {
        enterOuterAlt(_localctx, 2);
        setState(663);
        match(JavaParser::T__39);
        setState(666);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == JavaParser::T__7

        || _la == JavaParser::T__40) {
          setState(664);
          _la = _input->LA(1);
          if (!(_la == JavaParser::T__7

          || _la == JavaParser::T__40)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(665);
          type();
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- QualifiedNameListContext ------------------------------------------------------------------

JavaParser::QualifiedNameListContext::QualifiedNameListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<JavaParser::QualifiedNameContext *> JavaParser::QualifiedNameListContext::qualifiedName() {
  return getRuleContexts<JavaParser::QualifiedNameContext>();
}

JavaParser::QualifiedNameContext* JavaParser::QualifiedNameListContext::qualifiedName(size_t i) {
  return getRuleContext<JavaParser::QualifiedNameContext>(i);
}


size_t JavaParser::QualifiedNameListContext::getRuleIndex() const {
  return JavaParser::RuleQualifiedNameList;
}

void JavaParser::QualifiedNameListContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterQualifiedNameList(this);
  }
}

void JavaParser::QualifiedNameListContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitQualifiedNameList(this);
  }
}

JavaParser::QualifiedNameListContext* JavaParser::qualifiedNameList() {
  QualifiedNameListContext *_localctx = _tracker.createInstance<QualifiedNameListContext>(_ctx, getState());
  enterRule(_localctx, 106, JavaParser::RuleQualifiedNameList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(670);
    qualifiedName();
    setState(675);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == JavaParser::T__16) {
      setState(671);
      match(JavaParser::T__16);
      setState(672);
      qualifiedName();
      setState(677);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FormalParametersContext ------------------------------------------------------------------

JavaParser::FormalParametersContext::FormalParametersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaParser::FormalParameterDeclsContext* JavaParser::FormalParametersContext::formalParameterDecls() {
  return getRuleContext<JavaParser::FormalParameterDeclsContext>(0);
}


size_t JavaParser::FormalParametersContext::getRuleIndex() const {
  return JavaParser::RuleFormalParameters;
}

void JavaParser::FormalParametersContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterFormalParameters(this);
  }
}

void JavaParser::FormalParametersContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitFormalParameters(this);
  }
}

JavaParser::FormalParametersContext* JavaParser::formalParameters() {
  FormalParametersContext *_localctx = _tracker.createInstance<FormalParametersContext>(_ctx, getState());
  enterRule(_localctx, 108, JavaParser::RuleFormalParameters);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(678);
    match(JavaParser::T__41);
    setState(680);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << JavaParser::T__13)
      | (1ULL << JavaParser::T__31)
      | (1ULL << JavaParser::T__32)
      | (1ULL << JavaParser::T__33)
      | (1ULL << JavaParser::T__34)
      | (1ULL << JavaParser::T__35)
      | (1ULL << JavaParser::T__36)
      | (1ULL << JavaParser::T__37)
      | (1ULL << JavaParser::T__38)
      | (1ULL << JavaParser::T__48))) != 0) || _la == JavaParser::Identifier) {
      setState(679);
      formalParameterDecls();
    }
    setState(682);
    match(JavaParser::T__42);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FormalParameterDeclsContext ------------------------------------------------------------------

JavaParser::FormalParameterDeclsContext::FormalParameterDeclsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaParser::VariableModifiersContext* JavaParser::FormalParameterDeclsContext::variableModifiers() {
  return getRuleContext<JavaParser::VariableModifiersContext>(0);
}

JavaParser::TypeContext* JavaParser::FormalParameterDeclsContext::type() {
  return getRuleContext<JavaParser::TypeContext>(0);
}

JavaParser::FormalParameterDeclsRestContext* JavaParser::FormalParameterDeclsContext::formalParameterDeclsRest() {
  return getRuleContext<JavaParser::FormalParameterDeclsRestContext>(0);
}


size_t JavaParser::FormalParameterDeclsContext::getRuleIndex() const {
  return JavaParser::RuleFormalParameterDecls;
}

void JavaParser::FormalParameterDeclsContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterFormalParameterDecls(this);
  }
}

void JavaParser::FormalParameterDeclsContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitFormalParameterDecls(this);
  }
}

JavaParser::FormalParameterDeclsContext* JavaParser::formalParameterDecls() {
  FormalParameterDeclsContext *_localctx = _tracker.createInstance<FormalParameterDeclsContext>(_ctx, getState());
  enterRule(_localctx, 110, JavaParser::RuleFormalParameterDecls);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(684);
    variableModifiers();
    setState(685);
    type();
    setState(686);
    formalParameterDeclsRest();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FormalParameterDeclsRestContext ------------------------------------------------------------------

JavaParser::FormalParameterDeclsRestContext::FormalParameterDeclsRestContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaParser::VariableDeclaratorIdContext* JavaParser::FormalParameterDeclsRestContext::variableDeclaratorId() {
  return getRuleContext<JavaParser::VariableDeclaratorIdContext>(0);
}

JavaParser::FormalParameterDeclsContext* JavaParser::FormalParameterDeclsRestContext::formalParameterDecls() {
  return getRuleContext<JavaParser::FormalParameterDeclsContext>(0);
}


size_t JavaParser::FormalParameterDeclsRestContext::getRuleIndex() const {
  return JavaParser::RuleFormalParameterDeclsRest;
}

void JavaParser::FormalParameterDeclsRestContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterFormalParameterDeclsRest(this);
  }
}

void JavaParser::FormalParameterDeclsRestContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitFormalParameterDeclsRest(this);
  }
}

JavaParser::FormalParameterDeclsRestContext* JavaParser::formalParameterDeclsRest() {
  FormalParameterDeclsRestContext *_localctx = _tracker.createInstance<FormalParameterDeclsRestContext>(_ctx, getState());
  enterRule(_localctx, 112, JavaParser::RuleFormalParameterDeclsRest);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(695);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case JavaParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(688);
        variableDeclaratorId();
        setState(691);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == JavaParser::T__16) {
          setState(689);
          match(JavaParser::T__16);
          setState(690);
          formalParameterDecls();
        }
        break;
      }

      case JavaParser::T__43: {
        enterOuterAlt(_localctx, 2);
        setState(693);
        match(JavaParser::T__43);
        setState(694);
        variableDeclaratorId();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MethodBodyContext ------------------------------------------------------------------

JavaParser::MethodBodyContext::MethodBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaParser::BlockContext* JavaParser::MethodBodyContext::block() {
  return getRuleContext<JavaParser::BlockContext>(0);
}


size_t JavaParser::MethodBodyContext::getRuleIndex() const {
  return JavaParser::RuleMethodBody;
}

void JavaParser::MethodBodyContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterMethodBody(this);
  }
}

void JavaParser::MethodBodyContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitMethodBody(this);
  }
}

JavaParser::MethodBodyContext* JavaParser::methodBody() {
  MethodBodyContext *_localctx = _tracker.createInstance<MethodBodyContext>(_ctx, getState());
  enterRule(_localctx, 114, JavaParser::RuleMethodBody);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(697);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstructorBodyContext ------------------------------------------------------------------

JavaParser::ConstructorBodyContext::ConstructorBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaParser::ExplicitConstructorInvocationContext* JavaParser::ConstructorBodyContext::explicitConstructorInvocation() {
  return getRuleContext<JavaParser::ExplicitConstructorInvocationContext>(0);
}

std::vector<JavaParser::BlockStatementContext *> JavaParser::ConstructorBodyContext::blockStatement() {
  return getRuleContexts<JavaParser::BlockStatementContext>();
}

JavaParser::BlockStatementContext* JavaParser::ConstructorBodyContext::blockStatement(size_t i) {
  return getRuleContext<JavaParser::BlockStatementContext>(i);
}


size_t JavaParser::ConstructorBodyContext::getRuleIndex() const {
  return JavaParser::RuleConstructorBody;
}

void JavaParser::ConstructorBodyContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterConstructorBody(this);
  }
}

void JavaParser::ConstructorBodyContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitConstructorBody(this);
  }
}

JavaParser::ConstructorBodyContext* JavaParser::constructorBody() {
  ConstructorBodyContext *_localctx = _tracker.createInstance<ConstructorBodyContext>(_ctx, getState());
  enterRule(_localctx, 116, JavaParser::RuleConstructorBody);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(699);
    match(JavaParser::T__19);
    setState(701);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 73, _ctx)) {
    case 1: {
      setState(700);
      explicitConstructorInvocation();
      break;
    }

    }
    setState(706);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << JavaParser::T__1)
      | (1ULL << JavaParser::T__6)
      | (1ULL << JavaParser::T__13)
      | (1ULL << JavaParser::T__19)
      | (1ULL << JavaParser::T__21)
      | (1ULL << JavaParser::T__24)
      | (1ULL << JavaParser::T__28)
      | (1ULL << JavaParser::T__31)
      | (1ULL << JavaParser::T__32)
      | (1ULL << JavaParser::T__33)
      | (1ULL << JavaParser::T__34)
      | (1ULL << JavaParser::T__35)
      | (1ULL << JavaParser::T__36)
      | (1ULL << JavaParser::T__37)
      | (1ULL << JavaParser::T__38)
      | (1ULL << JavaParser::T__40)
      | (1ULL << JavaParser::T__41)
      | (1ULL << JavaParser::T__44)
      | (1ULL << JavaParser::T__45)
      | (1ULL << JavaParser::T__46)
      | (1ULL << JavaParser::T__47)
      | (1ULL << JavaParser::T__48)
      | (1ULL << JavaParser::T__51)
      | (1ULL << JavaParser::T__53)
      | (1ULL << JavaParser::T__54)
      | (1ULL << JavaParser::T__55)
      | (1ULL << JavaParser::T__56)
      | (1ULL << JavaParser::T__58)
      | (1ULL << JavaParser::T__59)
      | (1ULL << JavaParser::T__60)
      | (1ULL << JavaParser::T__61)
      | (1ULL << JavaParser::T__62))) != 0) || ((((_la - 66) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 66)) & ((1ULL << (JavaParser::T__65 - 66))
      | (1ULL << (JavaParser::T__66 - 66))
      | (1ULL << (JavaParser::T__67 - 66))
      | (1ULL << (JavaParser::T__68 - 66))
      | (1ULL << (JavaParser::T__69 - 66))
      | (1ULL << (JavaParser::T__70 - 66))
      | (1ULL << (JavaParser::T__71 - 66))
      | (1ULL << (JavaParser::HexLiteral - 66))
      | (1ULL << (JavaParser::DecimalLiteral - 66))
      | (1ULL << (JavaParser::OctalLiteral - 66))
      | (1ULL << (JavaParser::FloatingPointLiteral - 66))
      | (1ULL << (JavaParser::CharacterLiteral - 66))
      | (1ULL << (JavaParser::StringLiteral - 66))
      | (1ULL << (JavaParser::ASSERT - 66))
      | (1ULL << (JavaParser::Identifier - 66)))) != 0)) {
      setState(703);
      blockStatement();
      setState(708);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(709);
    match(JavaParser::T__20);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExplicitConstructorInvocationContext ------------------------------------------------------------------

JavaParser::ExplicitConstructorInvocationContext::ExplicitConstructorInvocationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaParser::ArgumentsContext* JavaParser::ExplicitConstructorInvocationContext::arguments() {
  return getRuleContext<JavaParser::ArgumentsContext>(0);
}

JavaParser::NonWildcardTypeArgumentsContext* JavaParser::ExplicitConstructorInvocationContext::nonWildcardTypeArguments() {
  return getRuleContext<JavaParser::NonWildcardTypeArgumentsContext>(0);
}

JavaParser::PrimaryContext* JavaParser::ExplicitConstructorInvocationContext::primary() {
  return getRuleContext<JavaParser::PrimaryContext>(0);
}


size_t JavaParser::ExplicitConstructorInvocationContext::getRuleIndex() const {
  return JavaParser::RuleExplicitConstructorInvocation;
}

void JavaParser::ExplicitConstructorInvocationContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterExplicitConstructorInvocation(this);
  }
}

void JavaParser::ExplicitConstructorInvocationContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitExplicitConstructorInvocation(this);
  }
}

JavaParser::ExplicitConstructorInvocationContext* JavaParser::explicitConstructorInvocation() {
  ExplicitConstructorInvocationContext *_localctx = _tracker.createInstance<ExplicitConstructorInvocationContext>(_ctx, getState());
  enterRule(_localctx, 118, JavaParser::RuleExplicitConstructorInvocation);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(727);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 77, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(712);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == JavaParser::T__15) {
        setState(711);
        nonWildcardTypeArguments();
      }
      setState(714);
      _la = _input->LA(1);
      if (!(_la == JavaParser::T__40

      || _la == JavaParser::T__44)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(715);
      arguments();
      setState(716);
      match(JavaParser::T__1);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(718);
      primary();
      setState(719);
      match(JavaParser::T__4);
      setState(721);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == JavaParser::T__15) {
        setState(720);
        nonWildcardTypeArguments();
      }
      setState(723);
      match(JavaParser::T__40);
      setState(724);
      arguments();
      setState(725);
      match(JavaParser::T__1);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- QualifiedNameContext ------------------------------------------------------------------

JavaParser::QualifiedNameContext::QualifiedNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> JavaParser::QualifiedNameContext::Identifier() {
  return getTokens(JavaParser::Identifier);
}

tree::TerminalNode* JavaParser::QualifiedNameContext::Identifier(size_t i) {
  return getToken(JavaParser::Identifier, i);
}


size_t JavaParser::QualifiedNameContext::getRuleIndex() const {
  return JavaParser::RuleQualifiedName;
}

void JavaParser::QualifiedNameContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterQualifiedName(this);
  }
}

void JavaParser::QualifiedNameContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitQualifiedName(this);
  }
}

JavaParser::QualifiedNameContext* JavaParser::qualifiedName() {
  QualifiedNameContext *_localctx = _tracker.createInstance<QualifiedNameContext>(_ctx, getState());
  enterRule(_localctx, 120, JavaParser::RuleQualifiedName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(729);
    match(JavaParser::Identifier);
    setState(734);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 78, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(730);
        match(JavaParser::T__4);
        setState(731);
        match(JavaParser::Identifier); 
      }
      setState(736);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 78, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LiteralContext ------------------------------------------------------------------

JavaParser::LiteralContext::LiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaParser::IntegerLiteralContext* JavaParser::LiteralContext::integerLiteral() {
  return getRuleContext<JavaParser::IntegerLiteralContext>(0);
}

tree::TerminalNode* JavaParser::LiteralContext::FloatingPointLiteral() {
  return getToken(JavaParser::FloatingPointLiteral, 0);
}

tree::TerminalNode* JavaParser::LiteralContext::CharacterLiteral() {
  return getToken(JavaParser::CharacterLiteral, 0);
}

tree::TerminalNode* JavaParser::LiteralContext::StringLiteral() {
  return getToken(JavaParser::StringLiteral, 0);
}

JavaParser::BooleanLiteralContext* JavaParser::LiteralContext::booleanLiteral() {
  return getRuleContext<JavaParser::BooleanLiteralContext>(0);
}


size_t JavaParser::LiteralContext::getRuleIndex() const {
  return JavaParser::RuleLiteral;
}

void JavaParser::LiteralContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterLiteral(this);
  }
}

void JavaParser::LiteralContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitLiteral(this);
  }
}

JavaParser::LiteralContext* JavaParser::literal() {
  LiteralContext *_localctx = _tracker.createInstance<LiteralContext>(_ctx, getState());
  enterRule(_localctx, 122, JavaParser::RuleLiteral);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(743);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case JavaParser::HexLiteral:
      case JavaParser::DecimalLiteral:
      case JavaParser::OctalLiteral: {
        enterOuterAlt(_localctx, 1);
        setState(737);
        integerLiteral();
        break;
      }

      case JavaParser::FloatingPointLiteral: {
        enterOuterAlt(_localctx, 2);
        setState(738);
        match(JavaParser::FloatingPointLiteral);
        break;
      }

      case JavaParser::CharacterLiteral: {
        enterOuterAlt(_localctx, 3);
        setState(739);
        match(JavaParser::CharacterLiteral);
        break;
      }

      case JavaParser::StringLiteral: {
        enterOuterAlt(_localctx, 4);
        setState(740);
        match(JavaParser::StringLiteral);
        break;
      }

      case JavaParser::T__46:
      case JavaParser::T__47: {
        enterOuterAlt(_localctx, 5);
        setState(741);
        booleanLiteral();
        break;
      }

      case JavaParser::T__45: {
        enterOuterAlt(_localctx, 6);
        setState(742);
        match(JavaParser::T__45);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IntegerLiteralContext ------------------------------------------------------------------

JavaParser::IntegerLiteralContext::IntegerLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavaParser::IntegerLiteralContext::HexLiteral() {
  return getToken(JavaParser::HexLiteral, 0);
}

tree::TerminalNode* JavaParser::IntegerLiteralContext::OctalLiteral() {
  return getToken(JavaParser::OctalLiteral, 0);
}

tree::TerminalNode* JavaParser::IntegerLiteralContext::DecimalLiteral() {
  return getToken(JavaParser::DecimalLiteral, 0);
}


size_t JavaParser::IntegerLiteralContext::getRuleIndex() const {
  return JavaParser::RuleIntegerLiteral;
}

void JavaParser::IntegerLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterIntegerLiteral(this);
  }
}

void JavaParser::IntegerLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitIntegerLiteral(this);
  }
}

JavaParser::IntegerLiteralContext* JavaParser::integerLiteral() {
  IntegerLiteralContext *_localctx = _tracker.createInstance<IntegerLiteralContext>(_ctx, getState());
  enterRule(_localctx, 124, JavaParser::RuleIntegerLiteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(745);
    _la = _input->LA(1);
    if (!(((((_la - 90) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 90)) & ((1ULL << (JavaParser::HexLiteral - 90))
      | (1ULL << (JavaParser::DecimalLiteral - 90))
      | (1ULL << (JavaParser::OctalLiteral - 90)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BooleanLiteralContext ------------------------------------------------------------------

JavaParser::BooleanLiteralContext::BooleanLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t JavaParser::BooleanLiteralContext::getRuleIndex() const {
  return JavaParser::RuleBooleanLiteral;
}

void JavaParser::BooleanLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterBooleanLiteral(this);
  }
}

void JavaParser::BooleanLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitBooleanLiteral(this);
  }
}

JavaParser::BooleanLiteralContext* JavaParser::booleanLiteral() {
  BooleanLiteralContext *_localctx = _tracker.createInstance<BooleanLiteralContext>(_ctx, getState());
  enterRule(_localctx, 126, JavaParser::RuleBooleanLiteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(747);
    _la = _input->LA(1);
    if (!(_la == JavaParser::T__46

    || _la == JavaParser::T__47)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AnnotationsContext ------------------------------------------------------------------

JavaParser::AnnotationsContext::AnnotationsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<JavaParser::AnnotationContext *> JavaParser::AnnotationsContext::annotation() {
  return getRuleContexts<JavaParser::AnnotationContext>();
}

JavaParser::AnnotationContext* JavaParser::AnnotationsContext::annotation(size_t i) {
  return getRuleContext<JavaParser::AnnotationContext>(i);
}


size_t JavaParser::AnnotationsContext::getRuleIndex() const {
  return JavaParser::RuleAnnotations;
}

void JavaParser::AnnotationsContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterAnnotations(this);
  }
}

void JavaParser::AnnotationsContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitAnnotations(this);
  }
}

JavaParser::AnnotationsContext* JavaParser::annotations() {
  AnnotationsContext *_localctx = _tracker.createInstance<AnnotationsContext>(_ctx, getState());
  enterRule(_localctx, 128, JavaParser::RuleAnnotations);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(750); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(749);
      annotation();
      setState(752); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == JavaParser::T__48);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AnnotationContext ------------------------------------------------------------------

JavaParser::AnnotationContext::AnnotationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaParser::AnnotationNameContext* JavaParser::AnnotationContext::annotationName() {
  return getRuleContext<JavaParser::AnnotationNameContext>(0);
}

JavaParser::ElementValuePairsContext* JavaParser::AnnotationContext::elementValuePairs() {
  return getRuleContext<JavaParser::ElementValuePairsContext>(0);
}

JavaParser::ElementValueContext* JavaParser::AnnotationContext::elementValue() {
  return getRuleContext<JavaParser::ElementValueContext>(0);
}


size_t JavaParser::AnnotationContext::getRuleIndex() const {
  return JavaParser::RuleAnnotation;
}

void JavaParser::AnnotationContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterAnnotation(this);
  }
}

void JavaParser::AnnotationContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitAnnotation(this);
  }
}

JavaParser::AnnotationContext* JavaParser::annotation() {
  AnnotationContext *_localctx = _tracker.createInstance<AnnotationContext>(_ctx, getState());
  enterRule(_localctx, 130, JavaParser::RuleAnnotation);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(754);
    match(JavaParser::T__48);
    setState(755);
    annotationName();
    setState(762);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == JavaParser::T__41) {
      setState(756);
      match(JavaParser::T__41);
      setState(759);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 81, _ctx)) {
      case 1: {
        setState(757);
        elementValuePairs();
        break;
      }

      case 2: {
        setState(758);
        elementValue();
        break;
      }

      }
      setState(761);
      match(JavaParser::T__42);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AnnotationNameContext ------------------------------------------------------------------

JavaParser::AnnotationNameContext::AnnotationNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> JavaParser::AnnotationNameContext::Identifier() {
  return getTokens(JavaParser::Identifier);
}

tree::TerminalNode* JavaParser::AnnotationNameContext::Identifier(size_t i) {
  return getToken(JavaParser::Identifier, i);
}


size_t JavaParser::AnnotationNameContext::getRuleIndex() const {
  return JavaParser::RuleAnnotationName;
}

void JavaParser::AnnotationNameContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterAnnotationName(this);
  }
}

void JavaParser::AnnotationNameContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitAnnotationName(this);
  }
}

JavaParser::AnnotationNameContext* JavaParser::annotationName() {
  AnnotationNameContext *_localctx = _tracker.createInstance<AnnotationNameContext>(_ctx, getState());
  enterRule(_localctx, 132, JavaParser::RuleAnnotationName);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(764);
    match(JavaParser::Identifier);
    setState(769);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == JavaParser::T__4) {
      setState(765);
      match(JavaParser::T__4);
      setState(766);
      match(JavaParser::Identifier);
      setState(771);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElementValuePairsContext ------------------------------------------------------------------

JavaParser::ElementValuePairsContext::ElementValuePairsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<JavaParser::ElementValuePairContext *> JavaParser::ElementValuePairsContext::elementValuePair() {
  return getRuleContexts<JavaParser::ElementValuePairContext>();
}

JavaParser::ElementValuePairContext* JavaParser::ElementValuePairsContext::elementValuePair(size_t i) {
  return getRuleContext<JavaParser::ElementValuePairContext>(i);
}


size_t JavaParser::ElementValuePairsContext::getRuleIndex() const {
  return JavaParser::RuleElementValuePairs;
}

void JavaParser::ElementValuePairsContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterElementValuePairs(this);
  }
}

void JavaParser::ElementValuePairsContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitElementValuePairs(this);
  }
}

JavaParser::ElementValuePairsContext* JavaParser::elementValuePairs() {
  ElementValuePairsContext *_localctx = _tracker.createInstance<ElementValuePairsContext>(_ctx, getState());
  enterRule(_localctx, 134, JavaParser::RuleElementValuePairs);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(772);
    elementValuePair();
    setState(777);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == JavaParser::T__16) {
      setState(773);
      match(JavaParser::T__16);
      setState(774);
      elementValuePair();
      setState(779);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElementValuePairContext ------------------------------------------------------------------

JavaParser::ElementValuePairContext::ElementValuePairContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavaParser::ElementValuePairContext::Identifier() {
  return getToken(JavaParser::Identifier, 0);
}

JavaParser::ElementValueContext* JavaParser::ElementValuePairContext::elementValue() {
  return getRuleContext<JavaParser::ElementValueContext>(0);
}


size_t JavaParser::ElementValuePairContext::getRuleIndex() const {
  return JavaParser::RuleElementValuePair;
}

void JavaParser::ElementValuePairContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterElementValuePair(this);
  }
}

void JavaParser::ElementValuePairContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitElementValuePair(this);
  }
}

JavaParser::ElementValuePairContext* JavaParser::elementValuePair() {
  ElementValuePairContext *_localctx = _tracker.createInstance<ElementValuePairContext>(_ctx, getState());
  enterRule(_localctx, 136, JavaParser::RuleElementValuePair);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(780);
    match(JavaParser::Identifier);
    setState(781);
    match(JavaParser::T__26);
    setState(782);
    elementValue();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElementValueContext ------------------------------------------------------------------

JavaParser::ElementValueContext::ElementValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaParser::ExpressionContext* JavaParser::ElementValueContext::expression() {
  return getRuleContext<JavaParser::ExpressionContext>(0);
}

JavaParser::AnnotationContext* JavaParser::ElementValueContext::annotation() {
  return getRuleContext<JavaParser::AnnotationContext>(0);
}

JavaParser::ElementValueArrayInitializerContext* JavaParser::ElementValueContext::elementValueArrayInitializer() {
  return getRuleContext<JavaParser::ElementValueArrayInitializerContext>(0);
}


size_t JavaParser::ElementValueContext::getRuleIndex() const {
  return JavaParser::RuleElementValue;
}

void JavaParser::ElementValueContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterElementValue(this);
  }
}

void JavaParser::ElementValueContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitElementValue(this);
  }
}

JavaParser::ElementValueContext* JavaParser::elementValue() {
  ElementValueContext *_localctx = _tracker.createInstance<ElementValueContext>(_ctx, getState());
  enterRule(_localctx, 138, JavaParser::RuleElementValue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(787);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case JavaParser::T__24:
      case JavaParser::T__31:
      case JavaParser::T__32:
      case JavaParser::T__33:
      case JavaParser::T__34:
      case JavaParser::T__35:
      case JavaParser::T__36:
      case JavaParser::T__37:
      case JavaParser::T__38:
      case JavaParser::T__40:
      case JavaParser::T__41:
      case JavaParser::T__44:
      case JavaParser::T__45:
      case JavaParser::T__46:
      case JavaParser::T__47:
      case JavaParser::T__65:
      case JavaParser::T__66:
      case JavaParser::T__67:
      case JavaParser::T__68:
      case JavaParser::T__69:
      case JavaParser::T__70:
      case JavaParser::T__71:
      case JavaParser::HexLiteral:
      case JavaParser::DecimalLiteral:
      case JavaParser::OctalLiteral:
      case JavaParser::FloatingPointLiteral:
      case JavaParser::CharacterLiteral:
      case JavaParser::StringLiteral:
      case JavaParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(784);
        expression(0);
        break;
      }

      case JavaParser::T__48: {
        enterOuterAlt(_localctx, 2);
        setState(785);
        annotation();
        break;
      }

      case JavaParser::T__19: {
        enterOuterAlt(_localctx, 3);
        setState(786);
        elementValueArrayInitializer();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElementValueArrayInitializerContext ------------------------------------------------------------------

JavaParser::ElementValueArrayInitializerContext::ElementValueArrayInitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<JavaParser::ElementValueContext *> JavaParser::ElementValueArrayInitializerContext::elementValue() {
  return getRuleContexts<JavaParser::ElementValueContext>();
}

JavaParser::ElementValueContext* JavaParser::ElementValueArrayInitializerContext::elementValue(size_t i) {
  return getRuleContext<JavaParser::ElementValueContext>(i);
}


size_t JavaParser::ElementValueArrayInitializerContext::getRuleIndex() const {
  return JavaParser::RuleElementValueArrayInitializer;
}

void JavaParser::ElementValueArrayInitializerContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterElementValueArrayInitializer(this);
  }
}

void JavaParser::ElementValueArrayInitializerContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitElementValueArrayInitializer(this);
  }
}

JavaParser::ElementValueArrayInitializerContext* JavaParser::elementValueArrayInitializer() {
  ElementValueArrayInitializerContext *_localctx = _tracker.createInstance<ElementValueArrayInitializerContext>(_ctx, getState());
  enterRule(_localctx, 140, JavaParser::RuleElementValueArrayInitializer);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(789);
    match(JavaParser::T__19);
    setState(798);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << JavaParser::T__19)
      | (1ULL << JavaParser::T__24)
      | (1ULL << JavaParser::T__31)
      | (1ULL << JavaParser::T__32)
      | (1ULL << JavaParser::T__33)
      | (1ULL << JavaParser::T__34)
      | (1ULL << JavaParser::T__35)
      | (1ULL << JavaParser::T__36)
      | (1ULL << JavaParser::T__37)
      | (1ULL << JavaParser::T__38)
      | (1ULL << JavaParser::T__40)
      | (1ULL << JavaParser::T__41)
      | (1ULL << JavaParser::T__44)
      | (1ULL << JavaParser::T__45)
      | (1ULL << JavaParser::T__46)
      | (1ULL << JavaParser::T__47)
      | (1ULL << JavaParser::T__48))) != 0) || ((((_la - 66) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 66)) & ((1ULL << (JavaParser::T__65 - 66))
      | (1ULL << (JavaParser::T__66 - 66))
      | (1ULL << (JavaParser::T__67 - 66))
      | (1ULL << (JavaParser::T__68 - 66))
      | (1ULL << (JavaParser::T__69 - 66))
      | (1ULL << (JavaParser::T__70 - 66))
      | (1ULL << (JavaParser::T__71 - 66))
      | (1ULL << (JavaParser::HexLiteral - 66))
      | (1ULL << (JavaParser::DecimalLiteral - 66))
      | (1ULL << (JavaParser::OctalLiteral - 66))
      | (1ULL << (JavaParser::FloatingPointLiteral - 66))
      | (1ULL << (JavaParser::CharacterLiteral - 66))
      | (1ULL << (JavaParser::StringLiteral - 66))
      | (1ULL << (JavaParser::Identifier - 66)))) != 0)) {
      setState(790);
      elementValue();
      setState(795);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 86, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(791);
          match(JavaParser::T__16);
          setState(792);
          elementValue(); 
        }
        setState(797);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 86, _ctx);
      }
    }
    setState(801);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == JavaParser::T__16) {
      setState(800);
      match(JavaParser::T__16);
    }
    setState(803);
    match(JavaParser::T__20);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AnnotationTypeDeclarationContext ------------------------------------------------------------------

JavaParser::AnnotationTypeDeclarationContext::AnnotationTypeDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavaParser::AnnotationTypeDeclarationContext::Identifier() {
  return getToken(JavaParser::Identifier, 0);
}

JavaParser::AnnotationTypeBodyContext* JavaParser::AnnotationTypeDeclarationContext::annotationTypeBody() {
  return getRuleContext<JavaParser::AnnotationTypeBodyContext>(0);
}


size_t JavaParser::AnnotationTypeDeclarationContext::getRuleIndex() const {
  return JavaParser::RuleAnnotationTypeDeclaration;
}

void JavaParser::AnnotationTypeDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterAnnotationTypeDeclaration(this);
  }
}

void JavaParser::AnnotationTypeDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitAnnotationTypeDeclaration(this);
  }
}

JavaParser::AnnotationTypeDeclarationContext* JavaParser::annotationTypeDeclaration() {
  AnnotationTypeDeclarationContext *_localctx = _tracker.createInstance<AnnotationTypeDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 142, JavaParser::RuleAnnotationTypeDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(805);
    match(JavaParser::T__48);
    setState(806);
    match(JavaParser::T__21);
    setState(807);
    match(JavaParser::Identifier);
    setState(808);
    annotationTypeBody();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AnnotationTypeBodyContext ------------------------------------------------------------------

JavaParser::AnnotationTypeBodyContext::AnnotationTypeBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<JavaParser::AnnotationTypeElementDeclarationContext *> JavaParser::AnnotationTypeBodyContext::annotationTypeElementDeclaration() {
  return getRuleContexts<JavaParser::AnnotationTypeElementDeclarationContext>();
}

JavaParser::AnnotationTypeElementDeclarationContext* JavaParser::AnnotationTypeBodyContext::annotationTypeElementDeclaration(size_t i) {
  return getRuleContext<JavaParser::AnnotationTypeElementDeclarationContext>(i);
}


size_t JavaParser::AnnotationTypeBodyContext::getRuleIndex() const {
  return JavaParser::RuleAnnotationTypeBody;
}

void JavaParser::AnnotationTypeBodyContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterAnnotationTypeBody(this);
  }
}

void JavaParser::AnnotationTypeBodyContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitAnnotationTypeBody(this);
  }
}

JavaParser::AnnotationTypeBodyContext* JavaParser::annotationTypeBody() {
  AnnotationTypeBodyContext *_localctx = _tracker.createInstance<AnnotationTypeBodyContext>(_ctx, getState());
  enterRule(_localctx, 144, JavaParser::RuleAnnotationTypeBody);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(810);
    match(JavaParser::T__19);
    setState(814);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << JavaParser::T__3)
      | (1ULL << JavaParser::T__6)
      | (1ULL << JavaParser::T__9)
      | (1ULL << JavaParser::T__10)
      | (1ULL << JavaParser::T__11)
      | (1ULL << JavaParser::T__12)
      | (1ULL << JavaParser::T__13)
      | (1ULL << JavaParser::T__14)
      | (1ULL << JavaParser::T__21)
      | (1ULL << JavaParser::T__27)
      | (1ULL << JavaParser::T__28)
      | (1ULL << JavaParser::T__29)
      | (1ULL << JavaParser::T__30)
      | (1ULL << JavaParser::T__31)
      | (1ULL << JavaParser::T__32)
      | (1ULL << JavaParser::T__33)
      | (1ULL << JavaParser::T__34)
      | (1ULL << JavaParser::T__35)
      | (1ULL << JavaParser::T__36)
      | (1ULL << JavaParser::T__37)
      | (1ULL << JavaParser::T__38)
      | (1ULL << JavaParser::T__48))) != 0) || _la == JavaParser::ENUM

    || _la == JavaParser::Identifier) {
      setState(811);
      annotationTypeElementDeclaration();
      setState(816);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(817);
    match(JavaParser::T__20);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AnnotationTypeElementDeclarationContext ------------------------------------------------------------------

JavaParser::AnnotationTypeElementDeclarationContext::AnnotationTypeElementDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaParser::ModifiersContext* JavaParser::AnnotationTypeElementDeclarationContext::modifiers() {
  return getRuleContext<JavaParser::ModifiersContext>(0);
}

JavaParser::AnnotationTypeElementRestContext* JavaParser::AnnotationTypeElementDeclarationContext::annotationTypeElementRest() {
  return getRuleContext<JavaParser::AnnotationTypeElementRestContext>(0);
}


size_t JavaParser::AnnotationTypeElementDeclarationContext::getRuleIndex() const {
  return JavaParser::RuleAnnotationTypeElementDeclaration;
}

void JavaParser::AnnotationTypeElementDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterAnnotationTypeElementDeclaration(this);
  }
}

void JavaParser::AnnotationTypeElementDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitAnnotationTypeElementDeclaration(this);
  }
}

JavaParser::AnnotationTypeElementDeclarationContext* JavaParser::annotationTypeElementDeclaration() {
  AnnotationTypeElementDeclarationContext *_localctx = _tracker.createInstance<AnnotationTypeElementDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 146, JavaParser::RuleAnnotationTypeElementDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(819);
    modifiers();
    setState(820);
    annotationTypeElementRest();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AnnotationTypeElementRestContext ------------------------------------------------------------------

JavaParser::AnnotationTypeElementRestContext::AnnotationTypeElementRestContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaParser::TypeContext* JavaParser::AnnotationTypeElementRestContext::type() {
  return getRuleContext<JavaParser::TypeContext>(0);
}

JavaParser::AnnotationMethodOrConstantRestContext* JavaParser::AnnotationTypeElementRestContext::annotationMethodOrConstantRest() {
  return getRuleContext<JavaParser::AnnotationMethodOrConstantRestContext>(0);
}

JavaParser::ClassDeclarationContext* JavaParser::AnnotationTypeElementRestContext::classDeclaration() {
  return getRuleContext<JavaParser::ClassDeclarationContext>(0);
}

JavaParser::NormalInterfaceDeclarationContext* JavaParser::AnnotationTypeElementRestContext::normalInterfaceDeclaration() {
  return getRuleContext<JavaParser::NormalInterfaceDeclarationContext>(0);
}

JavaParser::EnumDeclarationContext* JavaParser::AnnotationTypeElementRestContext::enumDeclaration() {
  return getRuleContext<JavaParser::EnumDeclarationContext>(0);
}

JavaParser::AnnotationTypeDeclarationContext* JavaParser::AnnotationTypeElementRestContext::annotationTypeDeclaration() {
  return getRuleContext<JavaParser::AnnotationTypeDeclarationContext>(0);
}


size_t JavaParser::AnnotationTypeElementRestContext::getRuleIndex() const {
  return JavaParser::RuleAnnotationTypeElementRest;
}

void JavaParser::AnnotationTypeElementRestContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterAnnotationTypeElementRest(this);
  }
}

void JavaParser::AnnotationTypeElementRestContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitAnnotationTypeElementRest(this);
  }
}

JavaParser::AnnotationTypeElementRestContext* JavaParser::annotationTypeElementRest() {
  AnnotationTypeElementRestContext *_localctx = _tracker.createInstance<AnnotationTypeElementRestContext>(_ctx, getState());
  enterRule(_localctx, 148, JavaParser::RuleAnnotationTypeElementRest);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(842);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case JavaParser::T__31:
      case JavaParser::T__32:
      case JavaParser::T__33:
      case JavaParser::T__34:
      case JavaParser::T__35:
      case JavaParser::T__36:
      case JavaParser::T__37:
      case JavaParser::T__38:
      case JavaParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(822);
        type();
        setState(823);
        annotationMethodOrConstantRest();
        setState(824);
        match(JavaParser::T__1);
        break;
      }

      case JavaParser::T__6: {
        enterOuterAlt(_localctx, 2);
        setState(826);
        classDeclaration();
        setState(828);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == JavaParser::T__1) {
          setState(827);
          match(JavaParser::T__1);
        }
        break;
      }

      case JavaParser::T__21: {
        enterOuterAlt(_localctx, 3);
        setState(830);
        normalInterfaceDeclaration();
        setState(832);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == JavaParser::T__1) {
          setState(831);
          match(JavaParser::T__1);
        }
        break;
      }

      case JavaParser::ENUM: {
        enterOuterAlt(_localctx, 4);
        setState(834);
        enumDeclaration();
        setState(836);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == JavaParser::T__1) {
          setState(835);
          match(JavaParser::T__1);
        }
        break;
      }

      case JavaParser::T__48: {
        enterOuterAlt(_localctx, 5);
        setState(838);
        annotationTypeDeclaration();
        setState(840);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == JavaParser::T__1) {
          setState(839);
          match(JavaParser::T__1);
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AnnotationMethodOrConstantRestContext ------------------------------------------------------------------

JavaParser::AnnotationMethodOrConstantRestContext::AnnotationMethodOrConstantRestContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaParser::AnnotationMethodRestContext* JavaParser::AnnotationMethodOrConstantRestContext::annotationMethodRest() {
  return getRuleContext<JavaParser::AnnotationMethodRestContext>(0);
}

JavaParser::AnnotationConstantRestContext* JavaParser::AnnotationMethodOrConstantRestContext::annotationConstantRest() {
  return getRuleContext<JavaParser::AnnotationConstantRestContext>(0);
}


size_t JavaParser::AnnotationMethodOrConstantRestContext::getRuleIndex() const {
  return JavaParser::RuleAnnotationMethodOrConstantRest;
}

void JavaParser::AnnotationMethodOrConstantRestContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterAnnotationMethodOrConstantRest(this);
  }
}

void JavaParser::AnnotationMethodOrConstantRestContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitAnnotationMethodOrConstantRest(this);
  }
}

JavaParser::AnnotationMethodOrConstantRestContext* JavaParser::annotationMethodOrConstantRest() {
  AnnotationMethodOrConstantRestContext *_localctx = _tracker.createInstance<AnnotationMethodOrConstantRestContext>(_ctx, getState());
  enterRule(_localctx, 150, JavaParser::RuleAnnotationMethodOrConstantRest);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(846);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 95, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(844);
      annotationMethodRest();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(845);
      annotationConstantRest();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AnnotationMethodRestContext ------------------------------------------------------------------

JavaParser::AnnotationMethodRestContext::AnnotationMethodRestContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavaParser::AnnotationMethodRestContext::Identifier() {
  return getToken(JavaParser::Identifier, 0);
}

JavaParser::DefaultValueContext* JavaParser::AnnotationMethodRestContext::defaultValue() {
  return getRuleContext<JavaParser::DefaultValueContext>(0);
}


size_t JavaParser::AnnotationMethodRestContext::getRuleIndex() const {
  return JavaParser::RuleAnnotationMethodRest;
}

void JavaParser::AnnotationMethodRestContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterAnnotationMethodRest(this);
  }
}

void JavaParser::AnnotationMethodRestContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitAnnotationMethodRest(this);
  }
}

JavaParser::AnnotationMethodRestContext* JavaParser::annotationMethodRest() {
  AnnotationMethodRestContext *_localctx = _tracker.createInstance<AnnotationMethodRestContext>(_ctx, getState());
  enterRule(_localctx, 152, JavaParser::RuleAnnotationMethodRest);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(848);
    match(JavaParser::Identifier);
    setState(849);
    match(JavaParser::T__41);
    setState(850);
    match(JavaParser::T__42);
    setState(852);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == JavaParser::T__49) {
      setState(851);
      defaultValue();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AnnotationConstantRestContext ------------------------------------------------------------------

JavaParser::AnnotationConstantRestContext::AnnotationConstantRestContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaParser::VariableDeclaratorsContext* JavaParser::AnnotationConstantRestContext::variableDeclarators() {
  return getRuleContext<JavaParser::VariableDeclaratorsContext>(0);
}


size_t JavaParser::AnnotationConstantRestContext::getRuleIndex() const {
  return JavaParser::RuleAnnotationConstantRest;
}

void JavaParser::AnnotationConstantRestContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterAnnotationConstantRest(this);
  }
}

void JavaParser::AnnotationConstantRestContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitAnnotationConstantRest(this);
  }
}

JavaParser::AnnotationConstantRestContext* JavaParser::annotationConstantRest() {
  AnnotationConstantRestContext *_localctx = _tracker.createInstance<AnnotationConstantRestContext>(_ctx, getState());
  enterRule(_localctx, 154, JavaParser::RuleAnnotationConstantRest);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(854);
    variableDeclarators();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DefaultValueContext ------------------------------------------------------------------

JavaParser::DefaultValueContext::DefaultValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaParser::ElementValueContext* JavaParser::DefaultValueContext::elementValue() {
  return getRuleContext<JavaParser::ElementValueContext>(0);
}


size_t JavaParser::DefaultValueContext::getRuleIndex() const {
  return JavaParser::RuleDefaultValue;
}

void JavaParser::DefaultValueContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterDefaultValue(this);
  }
}

void JavaParser::DefaultValueContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitDefaultValue(this);
  }
}

JavaParser::DefaultValueContext* JavaParser::defaultValue() {
  DefaultValueContext *_localctx = _tracker.createInstance<DefaultValueContext>(_ctx, getState());
  enterRule(_localctx, 156, JavaParser::RuleDefaultValue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(856);
    match(JavaParser::T__49);
    setState(857);
    elementValue();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

JavaParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<JavaParser::BlockStatementContext *> JavaParser::BlockContext::blockStatement() {
  return getRuleContexts<JavaParser::BlockStatementContext>();
}

JavaParser::BlockStatementContext* JavaParser::BlockContext::blockStatement(size_t i) {
  return getRuleContext<JavaParser::BlockStatementContext>(i);
}


size_t JavaParser::BlockContext::getRuleIndex() const {
  return JavaParser::RuleBlock;
}

void JavaParser::BlockContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterBlock(this);
  }
}

void JavaParser::BlockContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitBlock(this);
  }
}

JavaParser::BlockContext* JavaParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 158, JavaParser::RuleBlock);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(859);
    match(JavaParser::T__19);
    setState(863);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << JavaParser::T__1)
      | (1ULL << JavaParser::T__6)
      | (1ULL << JavaParser::T__13)
      | (1ULL << JavaParser::T__19)
      | (1ULL << JavaParser::T__21)
      | (1ULL << JavaParser::T__24)
      | (1ULL << JavaParser::T__28)
      | (1ULL << JavaParser::T__31)
      | (1ULL << JavaParser::T__32)
      | (1ULL << JavaParser::T__33)
      | (1ULL << JavaParser::T__34)
      | (1ULL << JavaParser::T__35)
      | (1ULL << JavaParser::T__36)
      | (1ULL << JavaParser::T__37)
      | (1ULL << JavaParser::T__38)
      | (1ULL << JavaParser::T__40)
      | (1ULL << JavaParser::T__41)
      | (1ULL << JavaParser::T__44)
      | (1ULL << JavaParser::T__45)
      | (1ULL << JavaParser::T__46)
      | (1ULL << JavaParser::T__47)
      | (1ULL << JavaParser::T__48)
      | (1ULL << JavaParser::T__51)
      | (1ULL << JavaParser::T__53)
      | (1ULL << JavaParser::T__54)
      | (1ULL << JavaParser::T__55)
      | (1ULL << JavaParser::T__56)
      | (1ULL << JavaParser::T__58)
      | (1ULL << JavaParser::T__59)
      | (1ULL << JavaParser::T__60)
      | (1ULL << JavaParser::T__61)
      | (1ULL << JavaParser::T__62))) != 0) || ((((_la - 66) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 66)) & ((1ULL << (JavaParser::T__65 - 66))
      | (1ULL << (JavaParser::T__66 - 66))
      | (1ULL << (JavaParser::T__67 - 66))
      | (1ULL << (JavaParser::T__68 - 66))
      | (1ULL << (JavaParser::T__69 - 66))
      | (1ULL << (JavaParser::T__70 - 66))
      | (1ULL << (JavaParser::T__71 - 66))
      | (1ULL << (JavaParser::HexLiteral - 66))
      | (1ULL << (JavaParser::DecimalLiteral - 66))
      | (1ULL << (JavaParser::OctalLiteral - 66))
      | (1ULL << (JavaParser::FloatingPointLiteral - 66))
      | (1ULL << (JavaParser::CharacterLiteral - 66))
      | (1ULL << (JavaParser::StringLiteral - 66))
      | (1ULL << (JavaParser::ASSERT - 66))
      | (1ULL << (JavaParser::Identifier - 66)))) != 0)) {
      setState(860);
      blockStatement();
      setState(865);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(866);
    match(JavaParser::T__20);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockStatementContext ------------------------------------------------------------------

JavaParser::BlockStatementContext::BlockStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaParser::LocalVariableDeclarationStatementContext* JavaParser::BlockStatementContext::localVariableDeclarationStatement() {
  return getRuleContext<JavaParser::LocalVariableDeclarationStatementContext>(0);
}

JavaParser::ClassDeclarationContext* JavaParser::BlockStatementContext::classDeclaration() {
  return getRuleContext<JavaParser::ClassDeclarationContext>(0);
}

JavaParser::InterfaceDeclarationContext* JavaParser::BlockStatementContext::interfaceDeclaration() {
  return getRuleContext<JavaParser::InterfaceDeclarationContext>(0);
}

JavaParser::StatementContext* JavaParser::BlockStatementContext::statement() {
  return getRuleContext<JavaParser::StatementContext>(0);
}


size_t JavaParser::BlockStatementContext::getRuleIndex() const {
  return JavaParser::RuleBlockStatement;
}

void JavaParser::BlockStatementContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterBlockStatement(this);
  }
}

void JavaParser::BlockStatementContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitBlockStatement(this);
  }
}

JavaParser::BlockStatementContext* JavaParser::blockStatement() {
  BlockStatementContext *_localctx = _tracker.createInstance<BlockStatementContext>(_ctx, getState());
  enterRule(_localctx, 160, JavaParser::RuleBlockStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(872);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 98, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(868);
      localVariableDeclarationStatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(869);
      classDeclaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(870);
      interfaceDeclaration();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(871);
      statement();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LocalVariableDeclarationStatementContext ------------------------------------------------------------------

JavaParser::LocalVariableDeclarationStatementContext::LocalVariableDeclarationStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaParser::LocalVariableDeclarationContext* JavaParser::LocalVariableDeclarationStatementContext::localVariableDeclaration() {
  return getRuleContext<JavaParser::LocalVariableDeclarationContext>(0);
}


size_t JavaParser::LocalVariableDeclarationStatementContext::getRuleIndex() const {
  return JavaParser::RuleLocalVariableDeclarationStatement;
}

void JavaParser::LocalVariableDeclarationStatementContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterLocalVariableDeclarationStatement(this);
  }
}

void JavaParser::LocalVariableDeclarationStatementContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitLocalVariableDeclarationStatement(this);
  }
}

JavaParser::LocalVariableDeclarationStatementContext* JavaParser::localVariableDeclarationStatement() {
  LocalVariableDeclarationStatementContext *_localctx = _tracker.createInstance<LocalVariableDeclarationStatementContext>(_ctx, getState());
  enterRule(_localctx, 162, JavaParser::RuleLocalVariableDeclarationStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(874);
    localVariableDeclaration();
    setState(875);
    match(JavaParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LocalVariableDeclarationContext ------------------------------------------------------------------

JavaParser::LocalVariableDeclarationContext::LocalVariableDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaParser::VariableModifiersContext* JavaParser::LocalVariableDeclarationContext::variableModifiers() {
  return getRuleContext<JavaParser::VariableModifiersContext>(0);
}

JavaParser::TypeContext* JavaParser::LocalVariableDeclarationContext::type() {
  return getRuleContext<JavaParser::TypeContext>(0);
}

JavaParser::VariableDeclaratorsContext* JavaParser::LocalVariableDeclarationContext::variableDeclarators() {
  return getRuleContext<JavaParser::VariableDeclaratorsContext>(0);
}


size_t JavaParser::LocalVariableDeclarationContext::getRuleIndex() const {
  return JavaParser::RuleLocalVariableDeclaration;
}

void JavaParser::LocalVariableDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterLocalVariableDeclaration(this);
  }
}

void JavaParser::LocalVariableDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitLocalVariableDeclaration(this);
  }
}

JavaParser::LocalVariableDeclarationContext* JavaParser::localVariableDeclaration() {
  LocalVariableDeclarationContext *_localctx = _tracker.createInstance<LocalVariableDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 164, JavaParser::RuleLocalVariableDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(877);
    variableModifiers();
    setState(878);
    type();
    setState(879);
    variableDeclarators();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableModifiersContext ------------------------------------------------------------------

JavaParser::VariableModifiersContext::VariableModifiersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<JavaParser::VariableModifierContext *> JavaParser::VariableModifiersContext::variableModifier() {
  return getRuleContexts<JavaParser::VariableModifierContext>();
}

JavaParser::VariableModifierContext* JavaParser::VariableModifiersContext::variableModifier(size_t i) {
  return getRuleContext<JavaParser::VariableModifierContext>(i);
}


size_t JavaParser::VariableModifiersContext::getRuleIndex() const {
  return JavaParser::RuleVariableModifiers;
}

void JavaParser::VariableModifiersContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterVariableModifiers(this);
  }
}

void JavaParser::VariableModifiersContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitVariableModifiers(this);
  }
}

JavaParser::VariableModifiersContext* JavaParser::variableModifiers() {
  VariableModifiersContext *_localctx = _tracker.createInstance<VariableModifiersContext>(_ctx, getState());
  enterRule(_localctx, 166, JavaParser::RuleVariableModifiers);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(884);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == JavaParser::T__13

    || _la == JavaParser::T__48) {
      setState(881);
      variableModifier();
      setState(886);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

JavaParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<JavaParser::BlockContext *> JavaParser::StatementContext::block() {
  return getRuleContexts<JavaParser::BlockContext>();
}

JavaParser::BlockContext* JavaParser::StatementContext::block(size_t i) {
  return getRuleContext<JavaParser::BlockContext>(i);
}

tree::TerminalNode* JavaParser::StatementContext::ASSERT() {
  return getToken(JavaParser::ASSERT, 0);
}

std::vector<JavaParser::ExpressionContext *> JavaParser::StatementContext::expression() {
  return getRuleContexts<JavaParser::ExpressionContext>();
}

JavaParser::ExpressionContext* JavaParser::StatementContext::expression(size_t i) {
  return getRuleContext<JavaParser::ExpressionContext>(i);
}

JavaParser::ParExpressionContext* JavaParser::StatementContext::parExpression() {
  return getRuleContext<JavaParser::ParExpressionContext>(0);
}

std::vector<JavaParser::StatementContext *> JavaParser::StatementContext::statement() {
  return getRuleContexts<JavaParser::StatementContext>();
}

JavaParser::StatementContext* JavaParser::StatementContext::statement(size_t i) {
  return getRuleContext<JavaParser::StatementContext>(i);
}

JavaParser::ForControlContext* JavaParser::StatementContext::forControl() {
  return getRuleContext<JavaParser::ForControlContext>(0);
}

JavaParser::CatchesContext* JavaParser::StatementContext::catches() {
  return getRuleContext<JavaParser::CatchesContext>(0);
}

JavaParser::SwitchBlockContext* JavaParser::StatementContext::switchBlock() {
  return getRuleContext<JavaParser::SwitchBlockContext>(0);
}

tree::TerminalNode* JavaParser::StatementContext::Identifier() {
  return getToken(JavaParser::Identifier, 0);
}

JavaParser::StatementExpressionContext* JavaParser::StatementContext::statementExpression() {
  return getRuleContext<JavaParser::StatementExpressionContext>(0);
}


size_t JavaParser::StatementContext::getRuleIndex() const {
  return JavaParser::RuleStatement;
}

void JavaParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterStatement(this);
  }
}

void JavaParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitStatement(this);
  }
}

JavaParser::StatementContext* JavaParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 168, JavaParser::RuleStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(964);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 106, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(887);
      block();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(888);
      match(JavaParser::ASSERT);
      setState(889);
      expression(0);
      setState(892);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == JavaParser::T__50) {
        setState(890);
        match(JavaParser::T__50);
        setState(891);
        expression(0);
      }
      setState(894);
      match(JavaParser::T__1);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(896);
      match(JavaParser::T__51);
      setState(897);
      parExpression();
      setState(898);
      statement();
      setState(901);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 101, _ctx)) {
      case 1: {
        setState(899);
        match(JavaParser::T__52);
        setState(900);
        statement();
        break;
      }

      }
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(903);
      match(JavaParser::T__53);
      setState(904);
      match(JavaParser::T__41);
      setState(905);
      forControl();
      setState(906);
      match(JavaParser::T__42);
      setState(907);
      statement();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(909);
      match(JavaParser::T__54);
      setState(910);
      parExpression();
      setState(911);
      statement();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(913);
      match(JavaParser::T__55);
      setState(914);
      statement();
      setState(915);
      match(JavaParser::T__54);
      setState(916);
      parExpression();
      setState(917);
      match(JavaParser::T__1);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(919);
      match(JavaParser::T__56);
      setState(920);
      block();
      setState(928);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 102, _ctx)) {
      case 1: {
        setState(921);
        catches();
        setState(922);
        match(JavaParser::T__57);
        setState(923);
        block();
        break;
      }

      case 2: {
        setState(925);
        catches();
        break;
      }

      case 3: {
        setState(926);
        match(JavaParser::T__57);
        setState(927);
        block();
        break;
      }

      }
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(930);
      match(JavaParser::T__58);
      setState(931);
      parExpression();
      setState(932);
      switchBlock();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(934);
      match(JavaParser::T__28);
      setState(935);
      parExpression();
      setState(936);
      block();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(938);
      match(JavaParser::T__59);
      setState(940);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << JavaParser::T__24)
        | (1ULL << JavaParser::T__31)
        | (1ULL << JavaParser::T__32)
        | (1ULL << JavaParser::T__33)
        | (1ULL << JavaParser::T__34)
        | (1ULL << JavaParser::T__35)
        | (1ULL << JavaParser::T__36)
        | (1ULL << JavaParser::T__37)
        | (1ULL << JavaParser::T__38)
        | (1ULL << JavaParser::T__40)
        | (1ULL << JavaParser::T__41)
        | (1ULL << JavaParser::T__44)
        | (1ULL << JavaParser::T__45)
        | (1ULL << JavaParser::T__46)
        | (1ULL << JavaParser::T__47))) != 0) || ((((_la - 66) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 66)) & ((1ULL << (JavaParser::T__65 - 66))
        | (1ULL << (JavaParser::T__66 - 66))
        | (1ULL << (JavaParser::T__67 - 66))
        | (1ULL << (JavaParser::T__68 - 66))
        | (1ULL << (JavaParser::T__69 - 66))
        | (1ULL << (JavaParser::T__70 - 66))
        | (1ULL << (JavaParser::T__71 - 66))
        | (1ULL << (JavaParser::HexLiteral - 66))
        | (1ULL << (JavaParser::DecimalLiteral - 66))
        | (1ULL << (JavaParser::OctalLiteral - 66))
        | (1ULL << (JavaParser::FloatingPointLiteral - 66))
        | (1ULL << (JavaParser::CharacterLiteral - 66))
        | (1ULL << (JavaParser::StringLiteral - 66))
        | (1ULL << (JavaParser::Identifier - 66)))) != 0)) {
        setState(939);
        expression(0);
      }
      setState(942);
      match(JavaParser::T__1);
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(943);
      match(JavaParser::T__60);
      setState(944);
      expression(0);
      setState(945);
      match(JavaParser::T__1);
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(947);
      match(JavaParser::T__61);
      setState(949);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == JavaParser::Identifier) {
        setState(948);
        match(JavaParser::Identifier);
      }
      setState(951);
      match(JavaParser::T__1);
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(952);
      match(JavaParser::T__62);
      setState(954);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == JavaParser::Identifier) {
        setState(953);
        match(JavaParser::Identifier);
      }
      setState(956);
      match(JavaParser::T__1);
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(957);
      match(JavaParser::T__1);
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(958);
      statementExpression();
      setState(959);
      match(JavaParser::T__1);
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(961);
      match(JavaParser::Identifier);
      setState(962);
      match(JavaParser::T__50);
      setState(963);
      statement();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CatchesContext ------------------------------------------------------------------

JavaParser::CatchesContext::CatchesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<JavaParser::CatchClauseContext *> JavaParser::CatchesContext::catchClause() {
  return getRuleContexts<JavaParser::CatchClauseContext>();
}

JavaParser::CatchClauseContext* JavaParser::CatchesContext::catchClause(size_t i) {
  return getRuleContext<JavaParser::CatchClauseContext>(i);
}


size_t JavaParser::CatchesContext::getRuleIndex() const {
  return JavaParser::RuleCatches;
}

void JavaParser::CatchesContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterCatches(this);
  }
}

void JavaParser::CatchesContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitCatches(this);
  }
}

JavaParser::CatchesContext* JavaParser::catches() {
  CatchesContext *_localctx = _tracker.createInstance<CatchesContext>(_ctx, getState());
  enterRule(_localctx, 170, JavaParser::RuleCatches);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(966);
    catchClause();
    setState(970);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == JavaParser::T__63) {
      setState(967);
      catchClause();
      setState(972);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CatchClauseContext ------------------------------------------------------------------

JavaParser::CatchClauseContext::CatchClauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaParser::FormalParameterContext* JavaParser::CatchClauseContext::formalParameter() {
  return getRuleContext<JavaParser::FormalParameterContext>(0);
}

JavaParser::BlockContext* JavaParser::CatchClauseContext::block() {
  return getRuleContext<JavaParser::BlockContext>(0);
}


size_t JavaParser::CatchClauseContext::getRuleIndex() const {
  return JavaParser::RuleCatchClause;
}

void JavaParser::CatchClauseContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterCatchClause(this);
  }
}

void JavaParser::CatchClauseContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitCatchClause(this);
  }
}

JavaParser::CatchClauseContext* JavaParser::catchClause() {
  CatchClauseContext *_localctx = _tracker.createInstance<CatchClauseContext>(_ctx, getState());
  enterRule(_localctx, 172, JavaParser::RuleCatchClause);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(973);
    match(JavaParser::T__63);
    setState(974);
    match(JavaParser::T__41);
    setState(975);
    formalParameter();
    setState(976);
    match(JavaParser::T__42);
    setState(977);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FormalParameterContext ------------------------------------------------------------------

JavaParser::FormalParameterContext::FormalParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaParser::VariableModifiersContext* JavaParser::FormalParameterContext::variableModifiers() {
  return getRuleContext<JavaParser::VariableModifiersContext>(0);
}

JavaParser::TypeContext* JavaParser::FormalParameterContext::type() {
  return getRuleContext<JavaParser::TypeContext>(0);
}

JavaParser::VariableDeclaratorIdContext* JavaParser::FormalParameterContext::variableDeclaratorId() {
  return getRuleContext<JavaParser::VariableDeclaratorIdContext>(0);
}


size_t JavaParser::FormalParameterContext::getRuleIndex() const {
  return JavaParser::RuleFormalParameter;
}

void JavaParser::FormalParameterContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterFormalParameter(this);
  }
}

void JavaParser::FormalParameterContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitFormalParameter(this);
  }
}

JavaParser::FormalParameterContext* JavaParser::formalParameter() {
  FormalParameterContext *_localctx = _tracker.createInstance<FormalParameterContext>(_ctx, getState());
  enterRule(_localctx, 174, JavaParser::RuleFormalParameter);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(979);
    variableModifiers();
    setState(980);
    type();
    setState(981);
    variableDeclaratorId();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SwitchBlockContext ------------------------------------------------------------------

JavaParser::SwitchBlockContext::SwitchBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<JavaParser::SwitchBlockStatementGroupContext *> JavaParser::SwitchBlockContext::switchBlockStatementGroup() {
  return getRuleContexts<JavaParser::SwitchBlockStatementGroupContext>();
}

JavaParser::SwitchBlockStatementGroupContext* JavaParser::SwitchBlockContext::switchBlockStatementGroup(size_t i) {
  return getRuleContext<JavaParser::SwitchBlockStatementGroupContext>(i);
}

std::vector<JavaParser::SwitchLabelContext *> JavaParser::SwitchBlockContext::switchLabel() {
  return getRuleContexts<JavaParser::SwitchLabelContext>();
}

JavaParser::SwitchLabelContext* JavaParser::SwitchBlockContext::switchLabel(size_t i) {
  return getRuleContext<JavaParser::SwitchLabelContext>(i);
}


size_t JavaParser::SwitchBlockContext::getRuleIndex() const {
  return JavaParser::RuleSwitchBlock;
}

void JavaParser::SwitchBlockContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterSwitchBlock(this);
  }
}

void JavaParser::SwitchBlockContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitSwitchBlock(this);
  }
}

JavaParser::SwitchBlockContext* JavaParser::switchBlock() {
  SwitchBlockContext *_localctx = _tracker.createInstance<SwitchBlockContext>(_ctx, getState());
  enterRule(_localctx, 176, JavaParser::RuleSwitchBlock);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(983);
    match(JavaParser::T__19);
    setState(987);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 108, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(984);
        switchBlockStatementGroup(); 
      }
      setState(989);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 108, _ctx);
    }
    setState(993);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == JavaParser::T__49

    || _la == JavaParser::T__64) {
      setState(990);
      switchLabel();
      setState(995);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(996);
    match(JavaParser::T__20);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SwitchBlockStatementGroupContext ------------------------------------------------------------------

JavaParser::SwitchBlockStatementGroupContext::SwitchBlockStatementGroupContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<JavaParser::SwitchLabelContext *> JavaParser::SwitchBlockStatementGroupContext::switchLabel() {
  return getRuleContexts<JavaParser::SwitchLabelContext>();
}

JavaParser::SwitchLabelContext* JavaParser::SwitchBlockStatementGroupContext::switchLabel(size_t i) {
  return getRuleContext<JavaParser::SwitchLabelContext>(i);
}

std::vector<JavaParser::BlockStatementContext *> JavaParser::SwitchBlockStatementGroupContext::blockStatement() {
  return getRuleContexts<JavaParser::BlockStatementContext>();
}

JavaParser::BlockStatementContext* JavaParser::SwitchBlockStatementGroupContext::blockStatement(size_t i) {
  return getRuleContext<JavaParser::BlockStatementContext>(i);
}


size_t JavaParser::SwitchBlockStatementGroupContext::getRuleIndex() const {
  return JavaParser::RuleSwitchBlockStatementGroup;
}

void JavaParser::SwitchBlockStatementGroupContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterSwitchBlockStatementGroup(this);
  }
}

void JavaParser::SwitchBlockStatementGroupContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitSwitchBlockStatementGroup(this);
  }
}

JavaParser::SwitchBlockStatementGroupContext* JavaParser::switchBlockStatementGroup() {
  SwitchBlockStatementGroupContext *_localctx = _tracker.createInstance<SwitchBlockStatementGroupContext>(_ctx, getState());
  enterRule(_localctx, 178, JavaParser::RuleSwitchBlockStatementGroup);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(999); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(998);
              switchLabel();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(1001); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 110, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
    setState(1006);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << JavaParser::T__1)
      | (1ULL << JavaParser::T__6)
      | (1ULL << JavaParser::T__13)
      | (1ULL << JavaParser::T__19)
      | (1ULL << JavaParser::T__21)
      | (1ULL << JavaParser::T__24)
      | (1ULL << JavaParser::T__28)
      | (1ULL << JavaParser::T__31)
      | (1ULL << JavaParser::T__32)
      | (1ULL << JavaParser::T__33)
      | (1ULL << JavaParser::T__34)
      | (1ULL << JavaParser::T__35)
      | (1ULL << JavaParser::T__36)
      | (1ULL << JavaParser::T__37)
      | (1ULL << JavaParser::T__38)
      | (1ULL << JavaParser::T__40)
      | (1ULL << JavaParser::T__41)
      | (1ULL << JavaParser::T__44)
      | (1ULL << JavaParser::T__45)
      | (1ULL << JavaParser::T__46)
      | (1ULL << JavaParser::T__47)
      | (1ULL << JavaParser::T__48)
      | (1ULL << JavaParser::T__51)
      | (1ULL << JavaParser::T__53)
      | (1ULL << JavaParser::T__54)
      | (1ULL << JavaParser::T__55)
      | (1ULL << JavaParser::T__56)
      | (1ULL << JavaParser::T__58)
      | (1ULL << JavaParser::T__59)
      | (1ULL << JavaParser::T__60)
      | (1ULL << JavaParser::T__61)
      | (1ULL << JavaParser::T__62))) != 0) || ((((_la - 66) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 66)) & ((1ULL << (JavaParser::T__65 - 66))
      | (1ULL << (JavaParser::T__66 - 66))
      | (1ULL << (JavaParser::T__67 - 66))
      | (1ULL << (JavaParser::T__68 - 66))
      | (1ULL << (JavaParser::T__69 - 66))
      | (1ULL << (JavaParser::T__70 - 66))
      | (1ULL << (JavaParser::T__71 - 66))
      | (1ULL << (JavaParser::HexLiteral - 66))
      | (1ULL << (JavaParser::DecimalLiteral - 66))
      | (1ULL << (JavaParser::OctalLiteral - 66))
      | (1ULL << (JavaParser::FloatingPointLiteral - 66))
      | (1ULL << (JavaParser::CharacterLiteral - 66))
      | (1ULL << (JavaParser::StringLiteral - 66))
      | (1ULL << (JavaParser::ASSERT - 66))
      | (1ULL << (JavaParser::Identifier - 66)))) != 0)) {
      setState(1003);
      blockStatement();
      setState(1008);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SwitchLabelContext ------------------------------------------------------------------

JavaParser::SwitchLabelContext::SwitchLabelContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaParser::ConstantExpressionContext* JavaParser::SwitchLabelContext::constantExpression() {
  return getRuleContext<JavaParser::ConstantExpressionContext>(0);
}

JavaParser::EnumConstantNameContext* JavaParser::SwitchLabelContext::enumConstantName() {
  return getRuleContext<JavaParser::EnumConstantNameContext>(0);
}


size_t JavaParser::SwitchLabelContext::getRuleIndex() const {
  return JavaParser::RuleSwitchLabel;
}

void JavaParser::SwitchLabelContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterSwitchLabel(this);
  }
}

void JavaParser::SwitchLabelContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitSwitchLabel(this);
  }
}

JavaParser::SwitchLabelContext* JavaParser::switchLabel() {
  SwitchLabelContext *_localctx = _tracker.createInstance<SwitchLabelContext>(_ctx, getState());
  enterRule(_localctx, 180, JavaParser::RuleSwitchLabel);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1019);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 112, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1009);
      match(JavaParser::T__64);
      setState(1010);
      constantExpression();
      setState(1011);
      match(JavaParser::T__50);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1013);
      match(JavaParser::T__64);
      setState(1014);
      enumConstantName();
      setState(1015);
      match(JavaParser::T__50);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1017);
      match(JavaParser::T__49);
      setState(1018);
      match(JavaParser::T__50);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForControlContext ------------------------------------------------------------------

JavaParser::ForControlContext::ForControlContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaParser::EnhancedForControlContext* JavaParser::ForControlContext::enhancedForControl() {
  return getRuleContext<JavaParser::EnhancedForControlContext>(0);
}

JavaParser::ForInitContext* JavaParser::ForControlContext::forInit() {
  return getRuleContext<JavaParser::ForInitContext>(0);
}

JavaParser::ExpressionContext* JavaParser::ForControlContext::expression() {
  return getRuleContext<JavaParser::ExpressionContext>(0);
}

JavaParser::ForUpdateContext* JavaParser::ForControlContext::forUpdate() {
  return getRuleContext<JavaParser::ForUpdateContext>(0);
}


size_t JavaParser::ForControlContext::getRuleIndex() const {
  return JavaParser::RuleForControl;
}

void JavaParser::ForControlContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterForControl(this);
  }
}

void JavaParser::ForControlContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitForControl(this);
  }
}

JavaParser::ForControlContext* JavaParser::forControl() {
  ForControlContext *_localctx = _tracker.createInstance<ForControlContext>(_ctx, getState());
  enterRule(_localctx, 182, JavaParser::RuleForControl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1033);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 116, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1021);
      enhancedForControl();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1023);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << JavaParser::T__13)
        | (1ULL << JavaParser::T__24)
        | (1ULL << JavaParser::T__31)
        | (1ULL << JavaParser::T__32)
        | (1ULL << JavaParser::T__33)
        | (1ULL << JavaParser::T__34)
        | (1ULL << JavaParser::T__35)
        | (1ULL << JavaParser::T__36)
        | (1ULL << JavaParser::T__37)
        | (1ULL << JavaParser::T__38)
        | (1ULL << JavaParser::T__40)
        | (1ULL << JavaParser::T__41)
        | (1ULL << JavaParser::T__44)
        | (1ULL << JavaParser::T__45)
        | (1ULL << JavaParser::T__46)
        | (1ULL << JavaParser::T__47)
        | (1ULL << JavaParser::T__48))) != 0) || ((((_la - 66) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 66)) & ((1ULL << (JavaParser::T__65 - 66))
        | (1ULL << (JavaParser::T__66 - 66))
        | (1ULL << (JavaParser::T__67 - 66))
        | (1ULL << (JavaParser::T__68 - 66))
        | (1ULL << (JavaParser::T__69 - 66))
        | (1ULL << (JavaParser::T__70 - 66))
        | (1ULL << (JavaParser::T__71 - 66))
        | (1ULL << (JavaParser::HexLiteral - 66))
        | (1ULL << (JavaParser::DecimalLiteral - 66))
        | (1ULL << (JavaParser::OctalLiteral - 66))
        | (1ULL << (JavaParser::FloatingPointLiteral - 66))
        | (1ULL << (JavaParser::CharacterLiteral - 66))
        | (1ULL << (JavaParser::StringLiteral - 66))
        | (1ULL << (JavaParser::Identifier - 66)))) != 0)) {
        setState(1022);
        forInit();
      }
      setState(1025);
      match(JavaParser::T__1);
      setState(1027);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << JavaParser::T__24)
        | (1ULL << JavaParser::T__31)
        | (1ULL << JavaParser::T__32)
        | (1ULL << JavaParser::T__33)
        | (1ULL << JavaParser::T__34)
        | (1ULL << JavaParser::T__35)
        | (1ULL << JavaParser::T__36)
        | (1ULL << JavaParser::T__37)
        | (1ULL << JavaParser::T__38)
        | (1ULL << JavaParser::T__40)
        | (1ULL << JavaParser::T__41)
        | (1ULL << JavaParser::T__44)
        | (1ULL << JavaParser::T__45)
        | (1ULL << JavaParser::T__46)
        | (1ULL << JavaParser::T__47))) != 0) || ((((_la - 66) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 66)) & ((1ULL << (JavaParser::T__65 - 66))
        | (1ULL << (JavaParser::T__66 - 66))
        | (1ULL << (JavaParser::T__67 - 66))
        | (1ULL << (JavaParser::T__68 - 66))
        | (1ULL << (JavaParser::T__69 - 66))
        | (1ULL << (JavaParser::T__70 - 66))
        | (1ULL << (JavaParser::T__71 - 66))
        | (1ULL << (JavaParser::HexLiteral - 66))
        | (1ULL << (JavaParser::DecimalLiteral - 66))
        | (1ULL << (JavaParser::OctalLiteral - 66))
        | (1ULL << (JavaParser::FloatingPointLiteral - 66))
        | (1ULL << (JavaParser::CharacterLiteral - 66))
        | (1ULL << (JavaParser::StringLiteral - 66))
        | (1ULL << (JavaParser::Identifier - 66)))) != 0)) {
        setState(1026);
        expression(0);
      }
      setState(1029);
      match(JavaParser::T__1);
      setState(1031);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << JavaParser::T__24)
        | (1ULL << JavaParser::T__31)
        | (1ULL << JavaParser::T__32)
        | (1ULL << JavaParser::T__33)
        | (1ULL << JavaParser::T__34)
        | (1ULL << JavaParser::T__35)
        | (1ULL << JavaParser::T__36)
        | (1ULL << JavaParser::T__37)
        | (1ULL << JavaParser::T__38)
        | (1ULL << JavaParser::T__40)
        | (1ULL << JavaParser::T__41)
        | (1ULL << JavaParser::T__44)
        | (1ULL << JavaParser::T__45)
        | (1ULL << JavaParser::T__46)
        | (1ULL << JavaParser::T__47))) != 0) || ((((_la - 66) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 66)) & ((1ULL << (JavaParser::T__65 - 66))
        | (1ULL << (JavaParser::T__66 - 66))
        | (1ULL << (JavaParser::T__67 - 66))
        | (1ULL << (JavaParser::T__68 - 66))
        | (1ULL << (JavaParser::T__69 - 66))
        | (1ULL << (JavaParser::T__70 - 66))
        | (1ULL << (JavaParser::T__71 - 66))
        | (1ULL << (JavaParser::HexLiteral - 66))
        | (1ULL << (JavaParser::DecimalLiteral - 66))
        | (1ULL << (JavaParser::OctalLiteral - 66))
        | (1ULL << (JavaParser::FloatingPointLiteral - 66))
        | (1ULL << (JavaParser::CharacterLiteral - 66))
        | (1ULL << (JavaParser::StringLiteral - 66))
        | (1ULL << (JavaParser::Identifier - 66)))) != 0)) {
        setState(1030);
        forUpdate();
      }
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForInitContext ------------------------------------------------------------------

JavaParser::ForInitContext::ForInitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaParser::LocalVariableDeclarationContext* JavaParser::ForInitContext::localVariableDeclaration() {
  return getRuleContext<JavaParser::LocalVariableDeclarationContext>(0);
}

JavaParser::ExpressionListContext* JavaParser::ForInitContext::expressionList() {
  return getRuleContext<JavaParser::ExpressionListContext>(0);
}


size_t JavaParser::ForInitContext::getRuleIndex() const {
  return JavaParser::RuleForInit;
}

void JavaParser::ForInitContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterForInit(this);
  }
}

void JavaParser::ForInitContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitForInit(this);
  }
}

JavaParser::ForInitContext* JavaParser::forInit() {
  ForInitContext *_localctx = _tracker.createInstance<ForInitContext>(_ctx, getState());
  enterRule(_localctx, 184, JavaParser::RuleForInit);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1037);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 117, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1035);
      localVariableDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1036);
      expressionList();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnhancedForControlContext ------------------------------------------------------------------

JavaParser::EnhancedForControlContext::EnhancedForControlContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaParser::VariableModifiersContext* JavaParser::EnhancedForControlContext::variableModifiers() {
  return getRuleContext<JavaParser::VariableModifiersContext>(0);
}

JavaParser::TypeContext* JavaParser::EnhancedForControlContext::type() {
  return getRuleContext<JavaParser::TypeContext>(0);
}

tree::TerminalNode* JavaParser::EnhancedForControlContext::Identifier() {
  return getToken(JavaParser::Identifier, 0);
}

JavaParser::ExpressionContext* JavaParser::EnhancedForControlContext::expression() {
  return getRuleContext<JavaParser::ExpressionContext>(0);
}


size_t JavaParser::EnhancedForControlContext::getRuleIndex() const {
  return JavaParser::RuleEnhancedForControl;
}

void JavaParser::EnhancedForControlContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterEnhancedForControl(this);
  }
}

void JavaParser::EnhancedForControlContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitEnhancedForControl(this);
  }
}

JavaParser::EnhancedForControlContext* JavaParser::enhancedForControl() {
  EnhancedForControlContext *_localctx = _tracker.createInstance<EnhancedForControlContext>(_ctx, getState());
  enterRule(_localctx, 186, JavaParser::RuleEnhancedForControl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1039);
    variableModifiers();
    setState(1040);
    type();
    setState(1041);
    match(JavaParser::Identifier);
    setState(1042);
    match(JavaParser::T__50);
    setState(1043);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForUpdateContext ------------------------------------------------------------------

JavaParser::ForUpdateContext::ForUpdateContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaParser::ExpressionListContext* JavaParser::ForUpdateContext::expressionList() {
  return getRuleContext<JavaParser::ExpressionListContext>(0);
}


size_t JavaParser::ForUpdateContext::getRuleIndex() const {
  return JavaParser::RuleForUpdate;
}

void JavaParser::ForUpdateContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterForUpdate(this);
  }
}

void JavaParser::ForUpdateContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitForUpdate(this);
  }
}

JavaParser::ForUpdateContext* JavaParser::forUpdate() {
  ForUpdateContext *_localctx = _tracker.createInstance<ForUpdateContext>(_ctx, getState());
  enterRule(_localctx, 188, JavaParser::RuleForUpdate);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1045);
    expressionList();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParExpressionContext ------------------------------------------------------------------

JavaParser::ParExpressionContext::ParExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaParser::ExpressionContext* JavaParser::ParExpressionContext::expression() {
  return getRuleContext<JavaParser::ExpressionContext>(0);
}


size_t JavaParser::ParExpressionContext::getRuleIndex() const {
  return JavaParser::RuleParExpression;
}

void JavaParser::ParExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterParExpression(this);
  }
}

void JavaParser::ParExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitParExpression(this);
  }
}

JavaParser::ParExpressionContext* JavaParser::parExpression() {
  ParExpressionContext *_localctx = _tracker.createInstance<ParExpressionContext>(_ctx, getState());
  enterRule(_localctx, 190, JavaParser::RuleParExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1047);
    match(JavaParser::T__41);
    setState(1048);
    expression(0);
    setState(1049);
    match(JavaParser::T__42);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionListContext ------------------------------------------------------------------

JavaParser::ExpressionListContext::ExpressionListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<JavaParser::ExpressionContext *> JavaParser::ExpressionListContext::expression() {
  return getRuleContexts<JavaParser::ExpressionContext>();
}

JavaParser::ExpressionContext* JavaParser::ExpressionListContext::expression(size_t i) {
  return getRuleContext<JavaParser::ExpressionContext>(i);
}


size_t JavaParser::ExpressionListContext::getRuleIndex() const {
  return JavaParser::RuleExpressionList;
}

void JavaParser::ExpressionListContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterExpressionList(this);
  }
}

void JavaParser::ExpressionListContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitExpressionList(this);
  }
}

JavaParser::ExpressionListContext* JavaParser::expressionList() {
  ExpressionListContext *_localctx = _tracker.createInstance<ExpressionListContext>(_ctx, getState());
  enterRule(_localctx, 192, JavaParser::RuleExpressionList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1051);
    expression(0);
    setState(1056);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == JavaParser::T__16) {
      setState(1052);
      match(JavaParser::T__16);
      setState(1053);
      expression(0);
      setState(1058);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementExpressionContext ------------------------------------------------------------------

JavaParser::StatementExpressionContext::StatementExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaParser::ExpressionContext* JavaParser::StatementExpressionContext::expression() {
  return getRuleContext<JavaParser::ExpressionContext>(0);
}


size_t JavaParser::StatementExpressionContext::getRuleIndex() const {
  return JavaParser::RuleStatementExpression;
}

void JavaParser::StatementExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterStatementExpression(this);
  }
}

void JavaParser::StatementExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitStatementExpression(this);
  }
}

JavaParser::StatementExpressionContext* JavaParser::statementExpression() {
  StatementExpressionContext *_localctx = _tracker.createInstance<StatementExpressionContext>(_ctx, getState());
  enterRule(_localctx, 194, JavaParser::RuleStatementExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1059);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstantExpressionContext ------------------------------------------------------------------

JavaParser::ConstantExpressionContext::ConstantExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaParser::ExpressionContext* JavaParser::ConstantExpressionContext::expression() {
  return getRuleContext<JavaParser::ExpressionContext>(0);
}


size_t JavaParser::ConstantExpressionContext::getRuleIndex() const {
  return JavaParser::RuleConstantExpression;
}

void JavaParser::ConstantExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterConstantExpression(this);
  }
}

void JavaParser::ConstantExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitConstantExpression(this);
  }
}

JavaParser::ConstantExpressionContext* JavaParser::constantExpression() {
  ConstantExpressionContext *_localctx = _tracker.createInstance<ConstantExpressionContext>(_ctx, getState());
  enterRule(_localctx, 196, JavaParser::RuleConstantExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1061);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

JavaParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaParser::PrimaryContext* JavaParser::ExpressionContext::primary() {
  return getRuleContext<JavaParser::PrimaryContext>(0);
}

std::vector<JavaParser::ExpressionContext *> JavaParser::ExpressionContext::expression() {
  return getRuleContexts<JavaParser::ExpressionContext>();
}

JavaParser::ExpressionContext* JavaParser::ExpressionContext::expression(size_t i) {
  return getRuleContext<JavaParser::ExpressionContext>(i);
}

JavaParser::TypeContext* JavaParser::ExpressionContext::type() {
  return getRuleContext<JavaParser::TypeContext>(0);
}

JavaParser::CreatorContext* JavaParser::ExpressionContext::creator() {
  return getRuleContext<JavaParser::CreatorContext>(0);
}

tree::TerminalNode* JavaParser::ExpressionContext::Identifier() {
  return getToken(JavaParser::Identifier, 0);
}

JavaParser::ExpressionListContext* JavaParser::ExpressionContext::expressionList() {
  return getRuleContext<JavaParser::ExpressionListContext>(0);
}

JavaParser::ArgumentsContext* JavaParser::ExpressionContext::arguments() {
  return getRuleContext<JavaParser::ArgumentsContext>(0);
}

JavaParser::ExplicitGenericInvocationContext* JavaParser::ExpressionContext::explicitGenericInvocation() {
  return getRuleContext<JavaParser::ExplicitGenericInvocationContext>(0);
}


size_t JavaParser::ExpressionContext::getRuleIndex() const {
  return JavaParser::RuleExpression;
}

void JavaParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterExpression(this);
  }
}

void JavaParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitExpression(this);
  }
}


JavaParser::ExpressionContext* JavaParser::expression() {
   return expression(0);
}

JavaParser::ExpressionContext* JavaParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  JavaParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  JavaParser::ExpressionContext *previousContext = _localctx;
  size_t startState = 198;
  enterRecursionRule(_localctx, 198, JavaParser::RuleExpression, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1076);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 119, _ctx)) {
    case 1: {
      setState(1064);
      primary();
      break;
    }

    case 2: {
      setState(1065);
      _la = _input->LA(1);
      if (!(((((_la - 67) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 67)) & ((1ULL << (JavaParser::T__66 - 67))
        | (1ULL << (JavaParser::T__67 - 67))
        | (1ULL << (JavaParser::T__68 - 67))
        | (1ULL << (JavaParser::T__69 - 67)))) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(1066);
      expression(17);
      break;
    }

    case 3: {
      setState(1067);
      _la = _input->LA(1);
      if (!(_la == JavaParser::T__70

      || _la == JavaParser::T__71)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(1068);
      expression(16);
      break;
    }

    case 4: {
      setState(1069);
      match(JavaParser::T__41);
      setState(1070);
      type();
      setState(1071);
      match(JavaParser::T__42);
      setState(1072);
      expression(15);
      break;
    }

    case 5: {
      setState(1074);
      match(JavaParser::T__65);
      setState(1075);
      creator();
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(1204);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 128, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(1202);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 127, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(1078);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(1079);
          _la = _input->LA(1);
          if (!(_la == JavaParser::T__5 || _la == JavaParser::T__72

          || _la == JavaParser::T__73)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(1080);
          expression(14);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(1081);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(1082);
          _la = _input->LA(1);
          if (!(_la == JavaParser::T__68

          || _la == JavaParser::T__69)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(1083);
          expression(13);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(1084);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(1092);
          _errHandler->sync(this);
          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 120, _ctx)) {
          case 1: {
            setState(1085);
            match(JavaParser::T__15);
            setState(1086);
            match(JavaParser::T__15);
            break;
          }

          case 2: {
            setState(1087);
            match(JavaParser::T__17);
            setState(1088);
            match(JavaParser::T__17);
            setState(1089);
            match(JavaParser::T__17);
            break;
          }

          case 3: {
            setState(1090);
            match(JavaParser::T__17);
            setState(1091);
            match(JavaParser::T__17);
            break;
          }

          }
          setState(1094);
          expression(12);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(1095);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(1102);
          _errHandler->sync(this);
          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 121, _ctx)) {
          case 1: {
            setState(1096);
            match(JavaParser::T__15);
            setState(1097);
            match(JavaParser::T__26);
            break;
          }

          case 2: {
            setState(1098);
            match(JavaParser::T__17);
            setState(1099);
            match(JavaParser::T__26);
            break;
          }

          case 3: {
            setState(1100);
            match(JavaParser::T__17);
            break;
          }

          case 4: {
            setState(1101);
            match(JavaParser::T__15);
            break;
          }

          }
          setState(1104);
          expression(11);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(1105);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(1106);
          _la = _input->LA(1);
          if (!(_la == JavaParser::T__75

          || _la == JavaParser::T__76)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(1107);
          expression(9);
          break;
        }

        case 6: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(1108);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(1109);
          match(JavaParser::T__18);
          setState(1110);
          expression(8);
          break;
        }

        case 7: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(1111);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(1112);
          match(JavaParser::T__77);
          setState(1113);
          expression(7);
          break;
        }

        case 8: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(1114);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(1115);
          match(JavaParser::T__78);
          setState(1116);
          expression(6);
          break;
        }

        case 9: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(1117);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(1118);
          match(JavaParser::T__79);
          setState(1119);
          expression(5);
          break;
        }

        case 10: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(1120);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(1121);
          match(JavaParser::T__80);
          setState(1122);
          expression(4);
          break;
        }

        case 11: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(1123);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(1124);
          match(JavaParser::T__39);
          setState(1125);
          expression(0);
          setState(1126);
          match(JavaParser::T__50);
          setState(1127);
          expression(3);
          break;
        }

        case 12: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(1129);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(1149);
          _errHandler->sync(this);
          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 122, _ctx)) {
          case 1: {
            setState(1130);
            match(JavaParser::T__81);
            break;
          }

          case 2: {
            setState(1131);
            match(JavaParser::T__82);
            break;
          }

          case 3: {
            setState(1132);
            match(JavaParser::T__83);
            break;
          }

          case 4: {
            setState(1133);
            match(JavaParser::T__84);
            break;
          }

          case 5: {
            setState(1134);
            match(JavaParser::T__85);
            break;
          }

          case 6: {
            setState(1135);
            match(JavaParser::T__86);
            break;
          }

          case 7: {
            setState(1136);
            match(JavaParser::T__87);
            break;
          }

          case 8: {
            setState(1137);
            match(JavaParser::T__26);
            break;
          }

          case 9: {
            setState(1138);
            match(JavaParser::T__17);
            setState(1139);
            match(JavaParser::T__17);
            setState(1140);
            match(JavaParser::T__26);
            break;
          }

          case 10: {
            setState(1141);
            match(JavaParser::T__17);
            setState(1142);
            match(JavaParser::T__17);
            setState(1143);
            match(JavaParser::T__17);
            setState(1144);
            match(JavaParser::T__26);
            break;
          }

          case 11: {
            setState(1145);
            match(JavaParser::T__15);
            setState(1146);
            match(JavaParser::T__15);
            setState(1147);
            match(JavaParser::T__26);
            break;
          }

          case 12: {
            setState(1148);
            match(JavaParser::T__88);
            break;
          }

          }
          setState(1151);
          expression(2);
          break;
        }

        case 13: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(1152);

          if (!(precpred(_ctx, 26))) throw FailedPredicateException(this, "precpred(_ctx, 26)");
          setState(1153);
          match(JavaParser::T__4);
          setState(1154);
          match(JavaParser::Identifier);
          break;
        }

        case 14: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(1155);

          if (!(precpred(_ctx, 25))) throw FailedPredicateException(this, "precpred(_ctx, 25)");
          setState(1156);
          match(JavaParser::T__4);
          setState(1157);
          match(JavaParser::T__44);
          break;
        }

        case 15: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(1158);

          if (!(precpred(_ctx, 24))) throw FailedPredicateException(this, "precpred(_ctx, 24)");
          setState(1159);
          match(JavaParser::T__4);
          setState(1160);
          match(JavaParser::T__40);
          setState(1161);
          match(JavaParser::T__41);
          setState(1163);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << JavaParser::T__24)
            | (1ULL << JavaParser::T__31)
            | (1ULL << JavaParser::T__32)
            | (1ULL << JavaParser::T__33)
            | (1ULL << JavaParser::T__34)
            | (1ULL << JavaParser::T__35)
            | (1ULL << JavaParser::T__36)
            | (1ULL << JavaParser::T__37)
            | (1ULL << JavaParser::T__38)
            | (1ULL << JavaParser::T__40)
            | (1ULL << JavaParser::T__41)
            | (1ULL << JavaParser::T__44)
            | (1ULL << JavaParser::T__45)
            | (1ULL << JavaParser::T__46)
            | (1ULL << JavaParser::T__47))) != 0) || ((((_la - 66) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 66)) & ((1ULL << (JavaParser::T__65 - 66))
            | (1ULL << (JavaParser::T__66 - 66))
            | (1ULL << (JavaParser::T__67 - 66))
            | (1ULL << (JavaParser::T__68 - 66))
            | (1ULL << (JavaParser::T__69 - 66))
            | (1ULL << (JavaParser::T__70 - 66))
            | (1ULL << (JavaParser::T__71 - 66))
            | (1ULL << (JavaParser::HexLiteral - 66))
            | (1ULL << (JavaParser::DecimalLiteral - 66))
            | (1ULL << (JavaParser::OctalLiteral - 66))
            | (1ULL << (JavaParser::FloatingPointLiteral - 66))
            | (1ULL << (JavaParser::CharacterLiteral - 66))
            | (1ULL << (JavaParser::StringLiteral - 66))
            | (1ULL << (JavaParser::Identifier - 66)))) != 0)) {
            setState(1162);
            expressionList();
          }
          setState(1165);
          match(JavaParser::T__42);
          break;
        }

        case 16: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(1166);

          if (!(precpred(_ctx, 23))) throw FailedPredicateException(this, "precpred(_ctx, 23)");
          setState(1167);
          match(JavaParser::T__4);
          setState(1168);
          match(JavaParser::T__65);
          setState(1169);
          match(JavaParser::Identifier);
          setState(1170);
          match(JavaParser::T__41);
          setState(1172);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << JavaParser::T__24)
            | (1ULL << JavaParser::T__31)
            | (1ULL << JavaParser::T__32)
            | (1ULL << JavaParser::T__33)
            | (1ULL << JavaParser::T__34)
            | (1ULL << JavaParser::T__35)
            | (1ULL << JavaParser::T__36)
            | (1ULL << JavaParser::T__37)
            | (1ULL << JavaParser::T__38)
            | (1ULL << JavaParser::T__40)
            | (1ULL << JavaParser::T__41)
            | (1ULL << JavaParser::T__44)
            | (1ULL << JavaParser::T__45)
            | (1ULL << JavaParser::T__46)
            | (1ULL << JavaParser::T__47))) != 0) || ((((_la - 66) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 66)) & ((1ULL << (JavaParser::T__65 - 66))
            | (1ULL << (JavaParser::T__66 - 66))
            | (1ULL << (JavaParser::T__67 - 66))
            | (1ULL << (JavaParser::T__68 - 66))
            | (1ULL << (JavaParser::T__69 - 66))
            | (1ULL << (JavaParser::T__70 - 66))
            | (1ULL << (JavaParser::T__71 - 66))
            | (1ULL << (JavaParser::HexLiteral - 66))
            | (1ULL << (JavaParser::DecimalLiteral - 66))
            | (1ULL << (JavaParser::OctalLiteral - 66))
            | (1ULL << (JavaParser::FloatingPointLiteral - 66))
            | (1ULL << (JavaParser::CharacterLiteral - 66))
            | (1ULL << (JavaParser::StringLiteral - 66))
            | (1ULL << (JavaParser::Identifier - 66)))) != 0)) {
            setState(1171);
            expressionList();
          }
          setState(1174);
          match(JavaParser::T__42);
          break;
        }

        case 17: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(1175);

          if (!(precpred(_ctx, 22))) throw FailedPredicateException(this, "precpred(_ctx, 22)");
          setState(1176);
          match(JavaParser::T__4);
          setState(1177);
          match(JavaParser::T__40);
          setState(1178);
          match(JavaParser::T__4);
          setState(1179);
          match(JavaParser::Identifier);
          setState(1181);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 125, _ctx)) {
          case 1: {
            setState(1180);
            arguments();
            break;
          }

          }
          break;
        }

        case 18: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(1183);

          if (!(precpred(_ctx, 21))) throw FailedPredicateException(this, "precpred(_ctx, 21)");
          setState(1184);
          match(JavaParser::T__4);
          setState(1185);
          explicitGenericInvocation();
          break;
        }

        case 19: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(1186);

          if (!(precpred(_ctx, 20))) throw FailedPredicateException(this, "precpred(_ctx, 20)");
          setState(1187);
          match(JavaParser::T__22);
          setState(1188);
          expression(0);
          setState(1189);
          match(JavaParser::T__23);
          break;
        }

        case 20: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(1191);

          if (!(precpred(_ctx, 19))) throw FailedPredicateException(this, "precpred(_ctx, 19)");
          setState(1192);
          match(JavaParser::T__41);
          setState(1194);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << JavaParser::T__24)
            | (1ULL << JavaParser::T__31)
            | (1ULL << JavaParser::T__32)
            | (1ULL << JavaParser::T__33)
            | (1ULL << JavaParser::T__34)
            | (1ULL << JavaParser::T__35)
            | (1ULL << JavaParser::T__36)
            | (1ULL << JavaParser::T__37)
            | (1ULL << JavaParser::T__38)
            | (1ULL << JavaParser::T__40)
            | (1ULL << JavaParser::T__41)
            | (1ULL << JavaParser::T__44)
            | (1ULL << JavaParser::T__45)
            | (1ULL << JavaParser::T__46)
            | (1ULL << JavaParser::T__47))) != 0) || ((((_la - 66) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 66)) & ((1ULL << (JavaParser::T__65 - 66))
            | (1ULL << (JavaParser::T__66 - 66))
            | (1ULL << (JavaParser::T__67 - 66))
            | (1ULL << (JavaParser::T__68 - 66))
            | (1ULL << (JavaParser::T__69 - 66))
            | (1ULL << (JavaParser::T__70 - 66))
            | (1ULL << (JavaParser::T__71 - 66))
            | (1ULL << (JavaParser::HexLiteral - 66))
            | (1ULL << (JavaParser::DecimalLiteral - 66))
            | (1ULL << (JavaParser::OctalLiteral - 66))
            | (1ULL << (JavaParser::FloatingPointLiteral - 66))
            | (1ULL << (JavaParser::CharacterLiteral - 66))
            | (1ULL << (JavaParser::StringLiteral - 66))
            | (1ULL << (JavaParser::Identifier - 66)))) != 0)) {
            setState(1193);
            expressionList();
          }
          setState(1196);
          match(JavaParser::T__42);
          break;
        }

        case 21: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(1197);

          if (!(precpred(_ctx, 18))) throw FailedPredicateException(this, "precpred(_ctx, 18)");
          setState(1198);
          _la = _input->LA(1);
          if (!(_la == JavaParser::T__66

          || _la == JavaParser::T__67)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          break;
        }

        case 22: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(1199);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(1200);
          match(JavaParser::T__74);
          setState(1201);
          type();
          break;
        }

        } 
      }
      setState(1206);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 128, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- PrimaryContext ------------------------------------------------------------------

JavaParser::PrimaryContext::PrimaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaParser::ExpressionContext* JavaParser::PrimaryContext::expression() {
  return getRuleContext<JavaParser::ExpressionContext>(0);
}

JavaParser::LiteralContext* JavaParser::PrimaryContext::literal() {
  return getRuleContext<JavaParser::LiteralContext>(0);
}

tree::TerminalNode* JavaParser::PrimaryContext::Identifier() {
  return getToken(JavaParser::Identifier, 0);
}

JavaParser::TypeContext* JavaParser::PrimaryContext::type() {
  return getRuleContext<JavaParser::TypeContext>(0);
}


size_t JavaParser::PrimaryContext::getRuleIndex() const {
  return JavaParser::RulePrimary;
}

void JavaParser::PrimaryContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterPrimary(this);
  }
}

void JavaParser::PrimaryContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitPrimary(this);
  }
}

JavaParser::PrimaryContext* JavaParser::primary() {
  PrimaryContext *_localctx = _tracker.createInstance<PrimaryContext>(_ctx, getState());
  enterRule(_localctx, 200, JavaParser::RulePrimary);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1222);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 129, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1207);
      match(JavaParser::T__41);
      setState(1208);
      expression(0);
      setState(1209);
      match(JavaParser::T__42);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1211);
      match(JavaParser::T__44);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1212);
      match(JavaParser::T__40);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1213);
      literal();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1214);
      match(JavaParser::Identifier);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1215);
      type();
      setState(1216);
      match(JavaParser::T__4);
      setState(1217);
      match(JavaParser::T__6);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(1219);
      match(JavaParser::T__24);
      setState(1220);
      match(JavaParser::T__4);
      setState(1221);
      match(JavaParser::T__6);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CreatorContext ------------------------------------------------------------------

JavaParser::CreatorContext::CreatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaParser::NonWildcardTypeArgumentsContext* JavaParser::CreatorContext::nonWildcardTypeArguments() {
  return getRuleContext<JavaParser::NonWildcardTypeArgumentsContext>(0);
}

JavaParser::CreatedNameContext* JavaParser::CreatorContext::createdName() {
  return getRuleContext<JavaParser::CreatedNameContext>(0);
}

JavaParser::ClassCreatorRestContext* JavaParser::CreatorContext::classCreatorRest() {
  return getRuleContext<JavaParser::ClassCreatorRestContext>(0);
}

JavaParser::ArrayCreatorRestContext* JavaParser::CreatorContext::arrayCreatorRest() {
  return getRuleContext<JavaParser::ArrayCreatorRestContext>(0);
}


size_t JavaParser::CreatorContext::getRuleIndex() const {
  return JavaParser::RuleCreator;
}

void JavaParser::CreatorContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterCreator(this);
  }
}

void JavaParser::CreatorContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitCreator(this);
  }
}

JavaParser::CreatorContext* JavaParser::creator() {
  CreatorContext *_localctx = _tracker.createInstance<CreatorContext>(_ctx, getState());
  enterRule(_localctx, 202, JavaParser::RuleCreator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1233);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case JavaParser::T__15: {
        enterOuterAlt(_localctx, 1);
        setState(1224);
        nonWildcardTypeArguments();
        setState(1225);
        createdName();
        setState(1226);
        classCreatorRest();
        break;
      }

      case JavaParser::T__31:
      case JavaParser::T__32:
      case JavaParser::T__33:
      case JavaParser::T__34:
      case JavaParser::T__35:
      case JavaParser::T__36:
      case JavaParser::T__37:
      case JavaParser::T__38:
      case JavaParser::Identifier: {
        enterOuterAlt(_localctx, 2);
        setState(1228);
        createdName();
        setState(1231);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case JavaParser::T__22: {
            setState(1229);
            arrayCreatorRest();
            break;
          }

          case JavaParser::T__41: {
            setState(1230);
            classCreatorRest();
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CreatedNameContext ------------------------------------------------------------------

JavaParser::CreatedNameContext::CreatedNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaParser::ClassOrInterfaceTypeContext* JavaParser::CreatedNameContext::classOrInterfaceType() {
  return getRuleContext<JavaParser::ClassOrInterfaceTypeContext>(0);
}

JavaParser::PrimitiveTypeContext* JavaParser::CreatedNameContext::primitiveType() {
  return getRuleContext<JavaParser::PrimitiveTypeContext>(0);
}


size_t JavaParser::CreatedNameContext::getRuleIndex() const {
  return JavaParser::RuleCreatedName;
}

void JavaParser::CreatedNameContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterCreatedName(this);
  }
}

void JavaParser::CreatedNameContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitCreatedName(this);
  }
}

JavaParser::CreatedNameContext* JavaParser::createdName() {
  CreatedNameContext *_localctx = _tracker.createInstance<CreatedNameContext>(_ctx, getState());
  enterRule(_localctx, 204, JavaParser::RuleCreatedName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1237);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case JavaParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(1235);
        classOrInterfaceType();
        break;
      }

      case JavaParser::T__31:
      case JavaParser::T__32:
      case JavaParser::T__33:
      case JavaParser::T__34:
      case JavaParser::T__35:
      case JavaParser::T__36:
      case JavaParser::T__37:
      case JavaParser::T__38: {
        enterOuterAlt(_localctx, 2);
        setState(1236);
        primitiveType();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InnerCreatorContext ------------------------------------------------------------------

JavaParser::InnerCreatorContext::InnerCreatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavaParser::InnerCreatorContext::Identifier() {
  return getToken(JavaParser::Identifier, 0);
}

JavaParser::ClassCreatorRestContext* JavaParser::InnerCreatorContext::classCreatorRest() {
  return getRuleContext<JavaParser::ClassCreatorRestContext>(0);
}

JavaParser::NonWildcardTypeArgumentsContext* JavaParser::InnerCreatorContext::nonWildcardTypeArguments() {
  return getRuleContext<JavaParser::NonWildcardTypeArgumentsContext>(0);
}


size_t JavaParser::InnerCreatorContext::getRuleIndex() const {
  return JavaParser::RuleInnerCreator;
}

void JavaParser::InnerCreatorContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterInnerCreator(this);
  }
}

void JavaParser::InnerCreatorContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitInnerCreator(this);
  }
}

JavaParser::InnerCreatorContext* JavaParser::innerCreator() {
  InnerCreatorContext *_localctx = _tracker.createInstance<InnerCreatorContext>(_ctx, getState());
  enterRule(_localctx, 206, JavaParser::RuleInnerCreator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1240);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == JavaParser::T__15) {
      setState(1239);
      nonWildcardTypeArguments();
    }
    setState(1242);
    match(JavaParser::Identifier);
    setState(1243);
    classCreatorRest();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExplicitGenericInvocationContext ------------------------------------------------------------------

JavaParser::ExplicitGenericInvocationContext::ExplicitGenericInvocationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaParser::NonWildcardTypeArgumentsContext* JavaParser::ExplicitGenericInvocationContext::nonWildcardTypeArguments() {
  return getRuleContext<JavaParser::NonWildcardTypeArgumentsContext>(0);
}

tree::TerminalNode* JavaParser::ExplicitGenericInvocationContext::Identifier() {
  return getToken(JavaParser::Identifier, 0);
}

JavaParser::ArgumentsContext* JavaParser::ExplicitGenericInvocationContext::arguments() {
  return getRuleContext<JavaParser::ArgumentsContext>(0);
}


size_t JavaParser::ExplicitGenericInvocationContext::getRuleIndex() const {
  return JavaParser::RuleExplicitGenericInvocation;
}

void JavaParser::ExplicitGenericInvocationContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterExplicitGenericInvocation(this);
  }
}

void JavaParser::ExplicitGenericInvocationContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitExplicitGenericInvocation(this);
  }
}

JavaParser::ExplicitGenericInvocationContext* JavaParser::explicitGenericInvocation() {
  ExplicitGenericInvocationContext *_localctx = _tracker.createInstance<ExplicitGenericInvocationContext>(_ctx, getState());
  enterRule(_localctx, 208, JavaParser::RuleExplicitGenericInvocation);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1245);
    nonWildcardTypeArguments();
    setState(1246);
    match(JavaParser::Identifier);
    setState(1247);
    arguments();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrayCreatorRestContext ------------------------------------------------------------------

JavaParser::ArrayCreatorRestContext::ArrayCreatorRestContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaParser::ArrayInitializerContext* JavaParser::ArrayCreatorRestContext::arrayInitializer() {
  return getRuleContext<JavaParser::ArrayInitializerContext>(0);
}

std::vector<JavaParser::ExpressionContext *> JavaParser::ArrayCreatorRestContext::expression() {
  return getRuleContexts<JavaParser::ExpressionContext>();
}

JavaParser::ExpressionContext* JavaParser::ArrayCreatorRestContext::expression(size_t i) {
  return getRuleContext<JavaParser::ExpressionContext>(i);
}


size_t JavaParser::ArrayCreatorRestContext::getRuleIndex() const {
  return JavaParser::RuleArrayCreatorRest;
}

void JavaParser::ArrayCreatorRestContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterArrayCreatorRest(this);
  }
}

void JavaParser::ArrayCreatorRestContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitArrayCreatorRest(this);
  }
}

JavaParser::ArrayCreatorRestContext* JavaParser::arrayCreatorRest() {
  ArrayCreatorRestContext *_localctx = _tracker.createInstance<ArrayCreatorRestContext>(_ctx, getState());
  enterRule(_localctx, 210, JavaParser::RuleArrayCreatorRest);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1249);
    match(JavaParser::T__22);
    setState(1277);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case JavaParser::T__23: {
        setState(1250);
        match(JavaParser::T__23);
        setState(1255);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == JavaParser::T__22) {
          setState(1251);
          match(JavaParser::T__22);
          setState(1252);
          match(JavaParser::T__23);
          setState(1257);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(1258);
        arrayInitializer();
        break;
      }

      case JavaParser::T__24:
      case JavaParser::T__31:
      case JavaParser::T__32:
      case JavaParser::T__33:
      case JavaParser::T__34:
      case JavaParser::T__35:
      case JavaParser::T__36:
      case JavaParser::T__37:
      case JavaParser::T__38:
      case JavaParser::T__40:
      case JavaParser::T__41:
      case JavaParser::T__44:
      case JavaParser::T__45:
      case JavaParser::T__46:
      case JavaParser::T__47:
      case JavaParser::T__65:
      case JavaParser::T__66:
      case JavaParser::T__67:
      case JavaParser::T__68:
      case JavaParser::T__69:
      case JavaParser::T__70:
      case JavaParser::T__71:
      case JavaParser::HexLiteral:
      case JavaParser::DecimalLiteral:
      case JavaParser::OctalLiteral:
      case JavaParser::FloatingPointLiteral:
      case JavaParser::CharacterLiteral:
      case JavaParser::StringLiteral:
      case JavaParser::Identifier: {
        setState(1259);
        expression(0);
        setState(1260);
        match(JavaParser::T__23);
        setState(1267);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 135, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(1261);
            match(JavaParser::T__22);
            setState(1262);
            expression(0);
            setState(1263);
            match(JavaParser::T__23); 
          }
          setState(1269);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 135, _ctx);
        }
        setState(1274);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 136, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(1270);
            match(JavaParser::T__22);
            setState(1271);
            match(JavaParser::T__23); 
          }
          setState(1276);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 136, _ctx);
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassCreatorRestContext ------------------------------------------------------------------

JavaParser::ClassCreatorRestContext::ClassCreatorRestContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaParser::ArgumentsContext* JavaParser::ClassCreatorRestContext::arguments() {
  return getRuleContext<JavaParser::ArgumentsContext>(0);
}

JavaParser::ClassBodyContext* JavaParser::ClassCreatorRestContext::classBody() {
  return getRuleContext<JavaParser::ClassBodyContext>(0);
}


size_t JavaParser::ClassCreatorRestContext::getRuleIndex() const {
  return JavaParser::RuleClassCreatorRest;
}

void JavaParser::ClassCreatorRestContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterClassCreatorRest(this);
  }
}

void JavaParser::ClassCreatorRestContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitClassCreatorRest(this);
  }
}

JavaParser::ClassCreatorRestContext* JavaParser::classCreatorRest() {
  ClassCreatorRestContext *_localctx = _tracker.createInstance<ClassCreatorRestContext>(_ctx, getState());
  enterRule(_localctx, 212, JavaParser::RuleClassCreatorRest);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1279);
    arguments();
    setState(1281);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 138, _ctx)) {
    case 1: {
      setState(1280);
      classBody();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NonWildcardTypeArgumentsContext ------------------------------------------------------------------

JavaParser::NonWildcardTypeArgumentsContext::NonWildcardTypeArgumentsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaParser::TypeListContext* JavaParser::NonWildcardTypeArgumentsContext::typeList() {
  return getRuleContext<JavaParser::TypeListContext>(0);
}


size_t JavaParser::NonWildcardTypeArgumentsContext::getRuleIndex() const {
  return JavaParser::RuleNonWildcardTypeArguments;
}

void JavaParser::NonWildcardTypeArgumentsContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterNonWildcardTypeArguments(this);
  }
}

void JavaParser::NonWildcardTypeArgumentsContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitNonWildcardTypeArguments(this);
  }
}

JavaParser::NonWildcardTypeArgumentsContext* JavaParser::nonWildcardTypeArguments() {
  NonWildcardTypeArgumentsContext *_localctx = _tracker.createInstance<NonWildcardTypeArgumentsContext>(_ctx, getState());
  enterRule(_localctx, 214, JavaParser::RuleNonWildcardTypeArguments);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1283);
    match(JavaParser::T__15);
    setState(1284);
    typeList();
    setState(1285);
    match(JavaParser::T__17);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgumentsContext ------------------------------------------------------------------

JavaParser::ArgumentsContext::ArgumentsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaParser::ExpressionListContext* JavaParser::ArgumentsContext::expressionList() {
  return getRuleContext<JavaParser::ExpressionListContext>(0);
}


size_t JavaParser::ArgumentsContext::getRuleIndex() const {
  return JavaParser::RuleArguments;
}

void JavaParser::ArgumentsContext::enterRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->enterArguments(this);
  }
}

void JavaParser::ArgumentsContext::exitRule(tree::ParseTreeListener *listener) {
  if (listener != nullptr) {
    auto parserListener = static_cast<JavaListener *>(listener);
    parserListener->exitArguments(this);
  }
}

JavaParser::ArgumentsContext* JavaParser::arguments() {
  ArgumentsContext *_localctx = _tracker.createInstance<ArgumentsContext>(_ctx, getState());
  enterRule(_localctx, 216, JavaParser::RuleArguments);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1287);
    match(JavaParser::T__41);
    setState(1289);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << JavaParser::T__24)
      | (1ULL << JavaParser::T__31)
      | (1ULL << JavaParser::T__32)
      | (1ULL << JavaParser::T__33)
      | (1ULL << JavaParser::T__34)
      | (1ULL << JavaParser::T__35)
      | (1ULL << JavaParser::T__36)
      | (1ULL << JavaParser::T__37)
      | (1ULL << JavaParser::T__38)
      | (1ULL << JavaParser::T__40)
      | (1ULL << JavaParser::T__41)
      | (1ULL << JavaParser::T__44)
      | (1ULL << JavaParser::T__45)
      | (1ULL << JavaParser::T__46)
      | (1ULL << JavaParser::T__47))) != 0) || ((((_la - 66) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 66)) & ((1ULL << (JavaParser::T__65 - 66))
      | (1ULL << (JavaParser::T__66 - 66))
      | (1ULL << (JavaParser::T__67 - 66))
      | (1ULL << (JavaParser::T__68 - 66))
      | (1ULL << (JavaParser::T__69 - 66))
      | (1ULL << (JavaParser::T__70 - 66))
      | (1ULL << (JavaParser::T__71 - 66))
      | (1ULL << (JavaParser::HexLiteral - 66))
      | (1ULL << (JavaParser::DecimalLiteral - 66))
      | (1ULL << (JavaParser::OctalLiteral - 66))
      | (1ULL << (JavaParser::FloatingPointLiteral - 66))
      | (1ULL << (JavaParser::CharacterLiteral - 66))
      | (1ULL << (JavaParser::StringLiteral - 66))
      | (1ULL << (JavaParser::Identifier - 66)))) != 0)) {
      setState(1288);
      expressionList();
    }
    setState(1291);
    match(JavaParser::T__42);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool JavaParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 99: return expressionSempred(dynamic_cast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool JavaParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 13);
    case 1: return precpred(_ctx, 12);
    case 2: return precpred(_ctx, 11);
    case 3: return precpred(_ctx, 10);
    case 4: return precpred(_ctx, 8);
    case 5: return precpred(_ctx, 7);
    case 6: return precpred(_ctx, 6);
    case 7: return precpred(_ctx, 5);
    case 8: return precpred(_ctx, 4);
    case 9: return precpred(_ctx, 3);
    case 10: return precpred(_ctx, 2);
    case 11: return precpred(_ctx, 1);
    case 12: return precpred(_ctx, 26);
    case 13: return precpred(_ctx, 25);
    case 14: return precpred(_ctx, 24);
    case 15: return precpred(_ctx, 23);
    case 16: return precpred(_ctx, 22);
    case 17: return precpred(_ctx, 21);
    case 18: return precpred(_ctx, 20);
    case 19: return precpred(_ctx, 19);
    case 20: return precpred(_ctx, 18);
    case 21: return precpred(_ctx, 9);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> JavaParser::_decisionToDFA;
atn::PredictionContextCache JavaParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN JavaParser::_atn;
std::vector<uint16_t> JavaParser::_serializedATN;

std::vector<std::string> JavaParser::_ruleNames = {
  "compilationUnit", "packageDeclaration", "importDeclaration", "typeDeclaration", 
  "classDeclaration", "enumDeclaration", "interfaceDeclaration", "classOrInterfaceModifier", 
  "modifiers", "typeParameters", "typeParameter", "typeBound", "enumBody", 
  "enumConstants", "enumConstant", "enumBodyDeclarations", "normalInterfaceDeclaration", 
  "typeList", "classBody", "interfaceBody", "classBodyDeclaration", "member", 
  "methodDeclaration", "methodDeclarationRest", "genericMethodDeclaration", 
  "fieldDeclaration", "constructorDeclaration", "interfaceBodyDeclaration", 
  "interfaceMemberDecl", "interfaceMethodOrFieldDecl", "interfaceMethodOrFieldRest", 
  "voidMethodDeclaratorRest", "interfaceMethodDeclaratorRest", "interfaceGenericMethodDecl", 
  "voidInterfaceMethodDeclaratorRest", "constantDeclarator", "variableDeclarators", 
  "variableDeclarator", "constantDeclaratorsRest", "constantDeclaratorRest", 
  "variableDeclaratorId", "variableInitializer", "arrayInitializer", "modifier", 
  "packageOrTypeName", "enumConstantName", "typeName", "type", "classOrInterfaceType", 
  "primitiveType", "variableModifier", "typeArguments", "typeArgument", 
  "qualifiedNameList", "formalParameters", "formalParameterDecls", "formalParameterDeclsRest", 
  "methodBody", "constructorBody", "explicitConstructorInvocation", "qualifiedName", 
  "literal", "integerLiteral", "booleanLiteral", "annotations", "annotation", 
  "annotationName", "elementValuePairs", "elementValuePair", "elementValue", 
  "elementValueArrayInitializer", "annotationTypeDeclaration", "annotationTypeBody", 
  "annotationTypeElementDeclaration", "annotationTypeElementRest", "annotationMethodOrConstantRest", 
  "annotationMethodRest", "annotationConstantRest", "defaultValue", "block", 
  "blockStatement", "localVariableDeclarationStatement", "localVariableDeclaration", 
  "variableModifiers", "statement", "catches", "catchClause", "formalParameter", 
  "switchBlock", "switchBlockStatementGroup", "switchLabel", "forControl", 
  "forInit", "enhancedForControl", "forUpdate", "parExpression", "expressionList", 
  "statementExpression", "constantExpression", "expression", "primary", 
  "creator", "createdName", "innerCreator", "explicitGenericInvocation", 
  "arrayCreatorRest", "classCreatorRest", "nonWildcardTypeArguments", "arguments"
};

std::vector<std::string> JavaParser::_literalNames = {
  "", "'package'", "';'", "'import'", "'static'", "'.'", "'*'", "'class'", 
  "'extends'", "'implements'", "'public'", "'protected'", "'private'", "'abstract'", 
  "'final'", "'strictfp'", "'<'", "','", "'>'", "'&'", "'{'", "'}'", "'interface'", 
  "'['", "']'", "'void'", "'throws'", "'='", "'native'", "'synchronized'", 
  "'transient'", "'volatile'", "'boolean'", "'char'", "'byte'", "'short'", 
  "'int'", "'long'", "'float'", "'double'", "'?'", "'super'", "'('", "')'", 
  "'...'", "'this'", "'null'", "'true'", "'false'", "'@'", "'default'", 
  "':'", "'if'", "'else'", "'for'", "'while'", "'do'", "'try'", "'finally'", 
  "'switch'", "'return'", "'throw'", "'break'", "'continue'", "'catch'", 
  "'case'", "'new'", "'++'", "'--'", "'+'", "'-'", "'~'", "'!'", "'/'", 
  "'%'", "'instanceof'", "'=='", "'!='", "'^'", "'|'", "'&&'", "'||'", "'^='", 
  "'+='", "'-='", "'*='", "'/='", "'&='", "'|='", "'%='", "", "", "", "", 
  "", "", "'enum'", "'assert'"
};

std::vector<std::string> JavaParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "HexLiteral", "DecimalLiteral", "OctalLiteral", "FloatingPointLiteral", 
  "CharacterLiteral", "StringLiteral", "ENUM", "ASSERT", "Identifier", "COMMENT", 
  "WS", "LINE_COMMENT"
};

dfa::Vocabulary JavaParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> JavaParser::_tokenNames;

JavaParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x67, 0x510, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 
    0x9, 0x22, 0x4, 0x23, 0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 
    0x25, 0x4, 0x26, 0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 0x9, 0x28, 
    0x4, 0x29, 0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x4, 0x2b, 0x9, 0x2b, 0x4, 
    0x2c, 0x9, 0x2c, 0x4, 0x2d, 0x9, 0x2d, 0x4, 0x2e, 0x9, 0x2e, 0x4, 0x2f, 
    0x9, 0x2f, 0x4, 0x30, 0x9, 0x30, 0x4, 0x31, 0x9, 0x31, 0x4, 0x32, 0x9, 
    0x32, 0x4, 0x33, 0x9, 0x33, 0x4, 0x34, 0x9, 0x34, 0x4, 0x35, 0x9, 0x35, 
    0x4, 0x36, 0x9, 0x36, 0x4, 0x37, 0x9, 0x37, 0x4, 0x38, 0x9, 0x38, 0x4, 
    0x39, 0x9, 0x39, 0x4, 0x3a, 0x9, 0x3a, 0x4, 0x3b, 0x9, 0x3b, 0x4, 0x3c, 
    0x9, 0x3c, 0x4, 0x3d, 0x9, 0x3d, 0x4, 0x3e, 0x9, 0x3e, 0x4, 0x3f, 0x9, 
    0x3f, 0x4, 0x40, 0x9, 0x40, 0x4, 0x41, 0x9, 0x41, 0x4, 0x42, 0x9, 0x42, 
    0x4, 0x43, 0x9, 0x43, 0x4, 0x44, 0x9, 0x44, 0x4, 0x45, 0x9, 0x45, 0x4, 
    0x46, 0x9, 0x46, 0x4, 0x47, 0x9, 0x47, 0x4, 0x48, 0x9, 0x48, 0x4, 0x49, 
    0x9, 0x49, 0x4, 0x4a, 0x9, 0x4a, 0x4, 0x4b, 0x9, 0x4b, 0x4, 0x4c, 0x9, 
    0x4c, 0x4, 0x4d, 0x9, 0x4d, 0x4, 0x4e, 0x9, 0x4e, 0x4, 0x4f, 0x9, 0x4f, 
    0x4, 0x50, 0x9, 0x50, 0x4, 0x51, 0x9, 0x51, 0x4, 0x52, 0x9, 0x52, 0x4, 
    0x53, 0x9, 0x53, 0x4, 0x54, 0x9, 0x54, 0x4, 0x55, 0x9, 0x55, 0x4, 0x56, 
    0x9, 0x56, 0x4, 0x57, 0x9, 0x57, 0x4, 0x58, 0x9, 0x58, 0x4, 0x59, 0x9, 
    0x59, 0x4, 0x5a, 0x9, 0x5a, 0x4, 0x5b, 0x9, 0x5b, 0x4, 0x5c, 0x9, 0x5c, 
    0x4, 0x5d, 0x9, 0x5d, 0x4, 0x5e, 0x9, 0x5e, 0x4, 0x5f, 0x9, 0x5f, 0x4, 
    0x60, 0x9, 0x60, 0x4, 0x61, 0x9, 0x61, 0x4, 0x62, 0x9, 0x62, 0x4, 0x63, 
    0x9, 0x63, 0x4, 0x64, 0x9, 0x64, 0x4, 0x65, 0x9, 0x65, 0x4, 0x66, 0x9, 
    0x66, 0x4, 0x67, 0x9, 0x67, 0x4, 0x68, 0x9, 0x68, 0x4, 0x69, 0x9, 0x69, 
    0x4, 0x6a, 0x9, 0x6a, 0x4, 0x6b, 0x9, 0x6b, 0x4, 0x6c, 0x9, 0x6c, 0x4, 
    0x6d, 0x9, 0x6d, 0x4, 0x6e, 0x9, 0x6e, 0x3, 0x2, 0x5, 0x2, 0xde, 0xa, 
    0x2, 0x3, 0x2, 0x7, 0x2, 0xe1, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0xe4, 0xb, 
    0x2, 0x3, 0x2, 0x7, 0x2, 0xe7, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0xea, 0xb, 
    0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x4, 0x3, 0x4, 0x5, 0x4, 0xf4, 0xa, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x5, 0x4, 0xf9, 0xa, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x7, 0x5, 0xfe, 
    0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0x101, 0xb, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x5, 0x5, 0x106, 0xa, 0x5, 0x3, 0x5, 0x5, 0x5, 0x109, 0xa, 0x5, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x10e, 0xa, 0x6, 0x3, 0x6, 0x3, 
    0x6, 0x5, 0x6, 0x112, 0xa, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x116, 
    0xa, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x5, 0x7, 0x11e, 0xa, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x5, 
    0x8, 0x124, 0xa, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x12e, 0xa, 0x9, 0x3, 0xa, 0x7, 
    0xa, 0x131, 0xa, 0xa, 0xc, 0xa, 0xe, 0xa, 0x134, 0xb, 0xa, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x7, 0xb, 0x13a, 0xa, 0xb, 0xc, 0xb, 0xe, 
    0xb, 0x13d, 0xb, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x5, 0xc, 0x144, 0xa, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x7, 0xd, 0x149, 
    0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 0x14c, 0xb, 0xd, 0x3, 0xe, 0x3, 0xe, 0x5, 
    0xe, 0x150, 0xa, 0xe, 0x3, 0xe, 0x5, 0xe, 0x153, 0xa, 0xe, 0x3, 0xe, 
    0x5, 0xe, 0x156, 0xa, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 
    0xf, 0x7, 0xf, 0x15d, 0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 0x160, 0xb, 0xf, 
    0x3, 0x10, 0x5, 0x10, 0x163, 0xa, 0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 
    0x167, 0xa, 0x10, 0x3, 0x10, 0x5, 0x10, 0x16a, 0xa, 0x10, 0x3, 0x11, 
    0x3, 0x11, 0x7, 0x11, 0x16e, 0xa, 0x11, 0xc, 0x11, 0xe, 0x11, 0x171, 
    0xb, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 0x176, 0xa, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 0x17a, 0xa, 0x12, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x7, 0x13, 0x181, 0xa, 0x13, 0xc, 0x13, 
    0xe, 0x13, 0x184, 0xb, 0x13, 0x3, 0x14, 0x3, 0x14, 0x7, 0x14, 0x188, 
    0xa, 0x14, 0xc, 0x14, 0xe, 0x14, 0x18b, 0xb, 0x14, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x15, 0x3, 0x15, 0x7, 0x15, 0x191, 0xa, 0x15, 0xc, 0x15, 0xe, 0x15, 
    0x194, 0xb, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 0x5, 0x16, 
    0x19a, 0xa, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x5, 0x16, 
    0x1a0, 0xa, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 
    0x3, 0x17, 0x5, 0x17, 0x1a8, 0xa, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 
    0x3, 0x18, 0x3, 0x18, 0x7, 0x18, 0x1af, 0xa, 0x18, 0xc, 0x18, 0xe, 0x18, 
    0x1b2, 0xb, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 
    0x3, 0x18, 0x3, 0x18, 0x5, 0x18, 0x1bb, 0xa, 0x18, 0x3, 0x19, 0x3, 0x19, 
    0x5, 0x19, 0x1bf, 0xa, 0x19, 0x3, 0x19, 0x3, 0x19, 0x5, 0x19, 0x1c3, 
    0xa, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 
    0x1b, 0x3, 0x1b, 0x3, 0x1c, 0x5, 0x1c, 0x1cd, 0xa, 0x1c, 0x3, 0x1c, 
    0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x5, 0x1c, 0x1d3, 0xa, 0x1c, 0x3, 0x1c, 
    0x3, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x5, 0x1d, 0x1db, 
    0xa, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 
    0x1e, 0x3, 0x1e, 0x5, 0x1e, 0x1e4, 0xa, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 
    0x3, 0x1f, 0x3, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x5, 
    0x20, 0x1ee, 0xa, 0x20, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x5, 0x21, 
    0x1f3, 0xa, 0x21, 0x3, 0x21, 0x3, 0x21, 0x5, 0x21, 0x1f7, 0xa, 0x21, 
    0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x7, 0x22, 0x1fc, 0xa, 0x22, 0xc, 0x22, 
    0xe, 0x22, 0x1ff, 0xb, 0x22, 0x3, 0x22, 0x3, 0x22, 0x5, 0x22, 0x203, 
    0xa, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x5, 
    0x23, 0x20a, 0xa, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x24, 
    0x3, 0x24, 0x3, 0x24, 0x5, 0x24, 0x212, 0xa, 0x24, 0x3, 0x24, 0x3, 0x24, 
    0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x7, 
    0x26, 0x21c, 0xa, 0x26, 0xc, 0x26, 0xe, 0x26, 0x21f, 0xb, 0x26, 0x3, 
    0x27, 0x3, 0x27, 0x3, 0x27, 0x5, 0x27, 0x224, 0xa, 0x27, 0x3, 0x28, 
    0x3, 0x28, 0x3, 0x28, 0x7, 0x28, 0x229, 0xa, 0x28, 0xc, 0x28, 0xe, 0x28, 
    0x22c, 0xb, 0x28, 0x3, 0x29, 0x3, 0x29, 0x7, 0x29, 0x230, 0xa, 0x29, 
    0xc, 0x29, 0xe, 0x29, 0x233, 0xb, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 
    0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x7, 0x2a, 0x23b, 0xa, 0x2a, 0xc, 0x2a, 
    0xe, 0x2a, 0x23e, 0xb, 0x2a, 0x3, 0x2b, 0x3, 0x2b, 0x5, 0x2b, 0x242, 
    0xa, 0x2b, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x7, 0x2c, 0x248, 
    0xa, 0x2c, 0xc, 0x2c, 0xe, 0x2c, 0x24b, 0xb, 0x2c, 0x3, 0x2c, 0x5, 0x2c, 
    0x24e, 0xa, 0x2c, 0x5, 0x2c, 0x250, 0xa, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 
    0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 
    0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x5, 0x2d, 
    0x260, 0xa, 0x2d, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x30, 
    0x3, 0x30, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x7, 0x31, 0x26b, 0xa, 0x31, 
    0xc, 0x31, 0xe, 0x31, 0x26e, 0xb, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 
    0x7, 0x31, 0x273, 0xa, 0x31, 0xc, 0x31, 0xe, 0x31, 0x276, 0xb, 0x31, 
    0x5, 0x31, 0x278, 0xa, 0x31, 0x3, 0x32, 0x3, 0x32, 0x5, 0x32, 0x27c, 
    0xa, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x5, 0x32, 0x281, 0xa, 0x32, 
    0x7, 0x32, 0x283, 0xa, 0x32, 0xc, 0x32, 0xe, 0x32, 0x286, 0xb, 0x32, 
    0x3, 0x33, 0x3, 0x33, 0x3, 0x34, 0x3, 0x34, 0x5, 0x34, 0x28c, 0xa, 0x34, 
    0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x7, 0x35, 0x292, 0xa, 0x35, 
    0xc, 0x35, 0xe, 0x35, 0x295, 0xb, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x36, 
    0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x5, 0x36, 0x29d, 0xa, 0x36, 0x5, 0x36, 
    0x29f, 0xa, 0x36, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x7, 0x37, 0x2a4, 
    0xa, 0x37, 0xc, 0x37, 0xe, 0x37, 0x2a7, 0xb, 0x37, 0x3, 0x38, 0x3, 0x38, 
    0x5, 0x38, 0x2ab, 0xa, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x39, 0x3, 0x39, 
    0x3, 0x39, 0x3, 0x39, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x5, 0x3a, 0x2b6, 
    0xa, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x5, 0x3a, 0x2ba, 0xa, 0x3a, 0x3, 0x3b, 
    0x3, 0x3b, 0x3, 0x3c, 0x3, 0x3c, 0x5, 0x3c, 0x2c0, 0xa, 0x3c, 0x3, 0x3c, 
    0x7, 0x3c, 0x2c3, 0xa, 0x3c, 0xc, 0x3c, 0xe, 0x3c, 0x2c6, 0xb, 0x3c, 
    0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3d, 0x5, 0x3d, 0x2cb, 0xa, 0x3d, 0x3, 0x3d, 
    0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x5, 
    0x3d, 0x2d4, 0xa, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 
    0x5, 0x3d, 0x2da, 0xa, 0x3d, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x7, 0x3e, 
    0x2df, 0xa, 0x3e, 0xc, 0x3e, 0xe, 0x3e, 0x2e2, 0xb, 0x3e, 0x3, 0x3f, 
    0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x5, 0x3f, 0x2ea, 
    0xa, 0x3f, 0x3, 0x40, 0x3, 0x40, 0x3, 0x41, 0x3, 0x41, 0x3, 0x42, 0x6, 
    0x42, 0x2f1, 0xa, 0x42, 0xd, 0x42, 0xe, 0x42, 0x2f2, 0x3, 0x43, 0x3, 
    0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x5, 0x43, 0x2fa, 0xa, 0x43, 
    0x3, 0x43, 0x5, 0x43, 0x2fd, 0xa, 0x43, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 
    0x7, 0x44, 0x302, 0xa, 0x44, 0xc, 0x44, 0xe, 0x44, 0x305, 0xb, 0x44, 
    0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x7, 0x45, 0x30a, 0xa, 0x45, 0xc, 0x45, 
    0xe, 0x45, 0x30d, 0xb, 0x45, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 
    0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x5, 0x47, 0x316, 0xa, 0x47, 0x3, 0x48, 
    0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x7, 0x48, 0x31c, 0xa, 0x48, 0xc, 0x48, 
    0xe, 0x48, 0x31f, 0xb, 0x48, 0x5, 0x48, 0x321, 0xa, 0x48, 0x3, 0x48, 
    0x5, 0x48, 0x324, 0xa, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x49, 0x3, 0x49, 
    0x3, 0x49, 0x3, 0x49, 0x3, 0x49, 0x3, 0x4a, 0x3, 0x4a, 0x7, 0x4a, 0x32f, 
    0xa, 0x4a, 0xc, 0x4a, 0xe, 0x4a, 0x332, 0xb, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 
    0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 
    0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x5, 0x4c, 0x33f, 0xa, 0x4c, 0x3, 0x4c, 
    0x3, 0x4c, 0x5, 0x4c, 0x343, 0xa, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x5, 0x4c, 
    0x347, 0xa, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x5, 0x4c, 0x34b, 0xa, 0x4c, 
    0x5, 0x4c, 0x34d, 0xa, 0x4c, 0x3, 0x4d, 0x3, 0x4d, 0x5, 0x4d, 0x351, 
    0xa, 0x4d, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x5, 0x4e, 0x357, 
    0xa, 0x4e, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 
    0x51, 0x3, 0x51, 0x7, 0x51, 0x360, 0xa, 0x51, 0xc, 0x51, 0xe, 0x51, 
    0x363, 0xb, 0x51, 0x3, 0x51, 0x3, 0x51, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 
    0x3, 0x52, 0x5, 0x52, 0x36b, 0xa, 0x52, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 
    0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x55, 0x7, 0x55, 0x375, 
    0xa, 0x55, 0xc, 0x55, 0xe, 0x55, 0x378, 0xb, 0x55, 0x3, 0x56, 0x3, 0x56, 
    0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x5, 0x56, 0x37f, 0xa, 0x56, 0x3, 0x56, 
    0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x5, 
    0x56, 0x388, 0xa, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 
    0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 
    0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 
    0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 
    0x56, 0x3, 0x56, 0x5, 0x56, 0x3a3, 0xa, 0x56, 0x3, 0x56, 0x3, 0x56, 
    0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 
    0x56, 0x3, 0x56, 0x5, 0x56, 0x3af, 0xa, 0x56, 0x3, 0x56, 0x3, 0x56, 
    0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x5, 0x56, 0x3b8, 
    0xa, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x5, 0x56, 0x3bd, 0xa, 0x56, 
    0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 
    0x56, 0x3, 0x56, 0x5, 0x56, 0x3c7, 0xa, 0x56, 0x3, 0x57, 0x3, 0x57, 
    0x7, 0x57, 0x3cb, 0xa, 0x57, 0xc, 0x57, 0xe, 0x57, 0x3ce, 0xb, 0x57, 
    0x3, 0x58, 0x3, 0x58, 0x3, 0x58, 0x3, 0x58, 0x3, 0x58, 0x3, 0x58, 0x3, 
    0x59, 0x3, 0x59, 0x3, 0x59, 0x3, 0x59, 0x3, 0x5a, 0x3, 0x5a, 0x7, 0x5a, 
    0x3dc, 0xa, 0x5a, 0xc, 0x5a, 0xe, 0x5a, 0x3df, 0xb, 0x5a, 0x3, 0x5a, 
    0x7, 0x5a, 0x3e2, 0xa, 0x5a, 0xc, 0x5a, 0xe, 0x5a, 0x3e5, 0xb, 0x5a, 
    0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5b, 0x6, 0x5b, 0x3ea, 0xa, 0x5b, 0xd, 0x5b, 
    0xe, 0x5b, 0x3eb, 0x3, 0x5b, 0x7, 0x5b, 0x3ef, 0xa, 0x5b, 0xc, 0x5b, 
    0xe, 0x5b, 0x3f2, 0xb, 0x5b, 0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5c, 
    0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5c, 0x5, 
    0x5c, 0x3fe, 0xa, 0x5c, 0x3, 0x5d, 0x3, 0x5d, 0x5, 0x5d, 0x402, 0xa, 
    0x5d, 0x3, 0x5d, 0x3, 0x5d, 0x5, 0x5d, 0x406, 0xa, 0x5d, 0x3, 0x5d, 
    0x3, 0x5d, 0x5, 0x5d, 0x40a, 0xa, 0x5d, 0x5, 0x5d, 0x40c, 0xa, 0x5d, 
    0x3, 0x5e, 0x3, 0x5e, 0x5, 0x5e, 0x410, 0xa, 0x5e, 0x3, 0x5f, 0x3, 0x5f, 
    0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x3, 0x60, 0x3, 0x60, 0x3, 
    0x61, 0x3, 0x61, 0x3, 0x61, 0x3, 0x61, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 
    0x7, 0x62, 0x421, 0xa, 0x62, 0xc, 0x62, 0xe, 0x62, 0x424, 0xb, 0x62, 
    0x3, 0x63, 0x3, 0x63, 0x3, 0x64, 0x3, 0x64, 0x3, 0x65, 0x3, 0x65, 0x3, 
    0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 
    0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x5, 0x65, 0x437, 0xa, 0x65, 
    0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 
    0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 
    0x3, 0x65, 0x5, 0x65, 0x447, 0xa, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 
    0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x5, 0x65, 0x451, 
    0xa, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 
    0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 
    0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 
    0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 
    0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 
    0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 
    0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 
    0x65, 0x5, 0x65, 0x480, 0xa, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 
    0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 
    0x65, 0x3, 0x65, 0x3, 0x65, 0x5, 0x65, 0x48e, 0xa, 0x65, 0x3, 0x65, 
    0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x5, 
    0x65, 0x497, 0xa, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 
    0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x5, 0x65, 0x4a0, 0xa, 0x65, 0x3, 0x65, 
    0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 
    0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x5, 0x65, 0x4ad, 0xa, 0x65, 
    0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x7, 
    0x65, 0x4b5, 0xa, 0x65, 0xc, 0x65, 0xe, 0x65, 0x4b8, 0xb, 0x65, 0x3, 
    0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 
    0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 
    0x66, 0x3, 0x66, 0x5, 0x66, 0x4c9, 0xa, 0x66, 0x3, 0x67, 0x3, 0x67, 
    0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x5, 0x67, 0x4d2, 
    0xa, 0x67, 0x5, 0x67, 0x4d4, 0xa, 0x67, 0x3, 0x68, 0x3, 0x68, 0x5, 0x68, 
    0x4d8, 0xa, 0x68, 0x3, 0x69, 0x5, 0x69, 0x4db, 0xa, 0x69, 0x3, 0x69, 
    0x3, 0x69, 0x3, 0x69, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 
    0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x7, 0x6b, 0x4e8, 0xa, 0x6b, 
    0xc, 0x6b, 0xe, 0x6b, 0x4eb, 0xb, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 
    0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x7, 0x6b, 0x4f4, 0xa, 0x6b, 
    0xc, 0x6b, 0xe, 0x6b, 0x4f7, 0xb, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x7, 0x6b, 
    0x4fb, 0xa, 0x6b, 0xc, 0x6b, 0xe, 0x6b, 0x4fe, 0xb, 0x6b, 0x5, 0x6b, 
    0x500, 0xa, 0x6b, 0x3, 0x6c, 0x3, 0x6c, 0x5, 0x6c, 0x504, 0xa, 0x6c, 
    0x3, 0x6d, 0x3, 0x6d, 0x3, 0x6d, 0x3, 0x6d, 0x3, 0x6e, 0x3, 0x6e, 0x5, 
    0x6e, 0x50c, 0xa, 0x6e, 0x3, 0x6e, 0x3, 0x6e, 0x3, 0x6e, 0x2, 0x3, 0xc8, 
    0x6f, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 
    0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 
    0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x40, 0x42, 0x44, 0x46, 0x48, 
    0x4a, 0x4c, 0x4e, 0x50, 0x52, 0x54, 0x56, 0x58, 0x5a, 0x5c, 0x5e, 0x60, 
    0x62, 0x64, 0x66, 0x68, 0x6a, 0x6c, 0x6e, 0x70, 0x72, 0x74, 0x76, 0x78, 
    0x7a, 0x7c, 0x7e, 0x80, 0x82, 0x84, 0x86, 0x88, 0x8a, 0x8c, 0x8e, 0x90, 
    0x92, 0x94, 0x96, 0x98, 0x9a, 0x9c, 0x9e, 0xa0, 0xa2, 0xa4, 0xa6, 0xa8, 
    0xaa, 0xac, 0xae, 0xb0, 0xb2, 0xb4, 0xb6, 0xb8, 0xba, 0xbc, 0xbe, 0xc0, 
    0xc2, 0xc4, 0xc6, 0xc8, 0xca, 0xcc, 0xce, 0xd0, 0xd2, 0xd4, 0xd6, 0xd8, 
    0xda, 0x2, 0xd, 0x3, 0x2, 0x22, 0x29, 0x4, 0x2, 0xa, 0xa, 0x2b, 0x2b, 
    0x4, 0x2, 0x2b, 0x2b, 0x2f, 0x2f, 0x3, 0x2, 0x5c, 0x5e, 0x3, 0x2, 0x31, 
    0x32, 0x3, 0x2, 0x45, 0x48, 0x3, 0x2, 0x49, 0x4a, 0x4, 0x2, 0x8, 0x8, 
    0x4b, 0x4c, 0x3, 0x2, 0x47, 0x48, 0x3, 0x2, 0x4e, 0x4f, 0x3, 0x2, 0x45, 
    0x46, 0x2, 0x58b, 0x2, 0xdd, 0x3, 0x2, 0x2, 0x2, 0x4, 0xed, 0x3, 0x2, 
    0x2, 0x2, 0x6, 0xf1, 0x3, 0x2, 0x2, 0x2, 0x8, 0x108, 0x3, 0x2, 0x2, 
    0x2, 0xa, 0x10a, 0x3, 0x2, 0x2, 0x2, 0xc, 0x119, 0x3, 0x2, 0x2, 0x2, 
    0xe, 0x123, 0x3, 0x2, 0x2, 0x2, 0x10, 0x12d, 0x3, 0x2, 0x2, 0x2, 0x12, 
    0x132, 0x3, 0x2, 0x2, 0x2, 0x14, 0x135, 0x3, 0x2, 0x2, 0x2, 0x16, 0x140, 
    0x3, 0x2, 0x2, 0x2, 0x18, 0x145, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x14d, 0x3, 
    0x2, 0x2, 0x2, 0x1c, 0x159, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x162, 0x3, 0x2, 
    0x2, 0x2, 0x20, 0x16b, 0x3, 0x2, 0x2, 0x2, 0x22, 0x172, 0x3, 0x2, 0x2, 
    0x2, 0x24, 0x17d, 0x3, 0x2, 0x2, 0x2, 0x26, 0x185, 0x3, 0x2, 0x2, 0x2, 
    0x28, 0x18e, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x19f, 0x3, 0x2, 0x2, 0x2, 0x2c, 
    0x1a7, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x1ba, 0x3, 0x2, 0x2, 0x2, 0x30, 0x1be, 
    0x3, 0x2, 0x2, 0x2, 0x32, 0x1c4, 0x3, 0x2, 0x2, 0x2, 0x34, 0x1c7, 0x3, 
    0x2, 0x2, 0x2, 0x36, 0x1cc, 0x3, 0x2, 0x2, 0x2, 0x38, 0x1da, 0x3, 0x2, 
    0x2, 0x2, 0x3a, 0x1e3, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x1e5, 0x3, 0x2, 0x2, 
    0x2, 0x3e, 0x1ed, 0x3, 0x2, 0x2, 0x2, 0x40, 0x1ef, 0x3, 0x2, 0x2, 0x2, 
    0x42, 0x1f8, 0x3, 0x2, 0x2, 0x2, 0x44, 0x206, 0x3, 0x2, 0x2, 0x2, 0x46, 
    0x20e, 0x3, 0x2, 0x2, 0x2, 0x48, 0x215, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x218, 
    0x3, 0x2, 0x2, 0x2, 0x4c, 0x220, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x225, 0x3, 
    0x2, 0x2, 0x2, 0x50, 0x231, 0x3, 0x2, 0x2, 0x2, 0x52, 0x237, 0x3, 0x2, 
    0x2, 0x2, 0x54, 0x241, 0x3, 0x2, 0x2, 0x2, 0x56, 0x243, 0x3, 0x2, 0x2, 
    0x2, 0x58, 0x25f, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x261, 0x3, 0x2, 0x2, 0x2, 
    0x5c, 0x263, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x265, 0x3, 0x2, 0x2, 0x2, 0x60, 
    0x277, 0x3, 0x2, 0x2, 0x2, 0x62, 0x279, 0x3, 0x2, 0x2, 0x2, 0x64, 0x287, 
    0x3, 0x2, 0x2, 0x2, 0x66, 0x28b, 0x3, 0x2, 0x2, 0x2, 0x68, 0x28d, 0x3, 
    0x2, 0x2, 0x2, 0x6a, 0x29e, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x2a0, 0x3, 0x2, 
    0x2, 0x2, 0x6e, 0x2a8, 0x3, 0x2, 0x2, 0x2, 0x70, 0x2ae, 0x3, 0x2, 0x2, 
    0x2, 0x72, 0x2b9, 0x3, 0x2, 0x2, 0x2, 0x74, 0x2bb, 0x3, 0x2, 0x2, 0x2, 
    0x76, 0x2bd, 0x3, 0x2, 0x2, 0x2, 0x78, 0x2d9, 0x3, 0x2, 0x2, 0x2, 0x7a, 
    0x2db, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x2e9, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x2eb, 
    0x3, 0x2, 0x2, 0x2, 0x80, 0x2ed, 0x3, 0x2, 0x2, 0x2, 0x82, 0x2f0, 0x3, 
    0x2, 0x2, 0x2, 0x84, 0x2f4, 0x3, 0x2, 0x2, 0x2, 0x86, 0x2fe, 0x3, 0x2, 
    0x2, 0x2, 0x88, 0x306, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x30e, 0x3, 0x2, 0x2, 
    0x2, 0x8c, 0x315, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x317, 0x3, 0x2, 0x2, 0x2, 
    0x90, 0x327, 0x3, 0x2, 0x2, 0x2, 0x92, 0x32c, 0x3, 0x2, 0x2, 0x2, 0x94, 
    0x335, 0x3, 0x2, 0x2, 0x2, 0x96, 0x34c, 0x3, 0x2, 0x2, 0x2, 0x98, 0x350, 
    0x3, 0x2, 0x2, 0x2, 0x9a, 0x352, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x358, 0x3, 
    0x2, 0x2, 0x2, 0x9e, 0x35a, 0x3, 0x2, 0x2, 0x2, 0xa0, 0x35d, 0x3, 0x2, 
    0x2, 0x2, 0xa2, 0x36a, 0x3, 0x2, 0x2, 0x2, 0xa4, 0x36c, 0x3, 0x2, 0x2, 
    0x2, 0xa6, 0x36f, 0x3, 0x2, 0x2, 0x2, 0xa8, 0x376, 0x3, 0x2, 0x2, 0x2, 
    0xaa, 0x3c6, 0x3, 0x2, 0x2, 0x2, 0xac, 0x3c8, 0x3, 0x2, 0x2, 0x2, 0xae, 
    0x3cf, 0x3, 0x2, 0x2, 0x2, 0xb0, 0x3d5, 0x3, 0x2, 0x2, 0x2, 0xb2, 0x3d9, 
    0x3, 0x2, 0x2, 0x2, 0xb4, 0x3e9, 0x3, 0x2, 0x2, 0x2, 0xb6, 0x3fd, 0x3, 
    0x2, 0x2, 0x2, 0xb8, 0x40b, 0x3, 0x2, 0x2, 0x2, 0xba, 0x40f, 0x3, 0x2, 
    0x2, 0x2, 0xbc, 0x411, 0x3, 0x2, 0x2, 0x2, 0xbe, 0x417, 0x3, 0x2, 0x2, 
    0x2, 0xc0, 0x419, 0x3, 0x2, 0x2, 0x2, 0xc2, 0x41d, 0x3, 0x2, 0x2, 0x2, 
    0xc4, 0x425, 0x3, 0x2, 0x2, 0x2, 0xc6, 0x427, 0x3, 0x2, 0x2, 0x2, 0xc8, 
    0x436, 0x3, 0x2, 0x2, 0x2, 0xca, 0x4c8, 0x3, 0x2, 0x2, 0x2, 0xcc, 0x4d3, 
    0x3, 0x2, 0x2, 0x2, 0xce, 0x4d7, 0x3, 0x2, 0x2, 0x2, 0xd0, 0x4da, 0x3, 
    0x2, 0x2, 0x2, 0xd2, 0x4df, 0x3, 0x2, 0x2, 0x2, 0xd4, 0x4e3, 0x3, 0x2, 
    0x2, 0x2, 0xd6, 0x501, 0x3, 0x2, 0x2, 0x2, 0xd8, 0x505, 0x3, 0x2, 0x2, 
    0x2, 0xda, 0x509, 0x3, 0x2, 0x2, 0x2, 0xdc, 0xde, 0x5, 0x4, 0x3, 0x2, 
    0xdd, 0xdc, 0x3, 0x2, 0x2, 0x2, 0xdd, 0xde, 0x3, 0x2, 0x2, 0x2, 0xde, 
    0xe2, 0x3, 0x2, 0x2, 0x2, 0xdf, 0xe1, 0x5, 0x6, 0x4, 0x2, 0xe0, 0xdf, 
    0x3, 0x2, 0x2, 0x2, 0xe1, 0xe4, 0x3, 0x2, 0x2, 0x2, 0xe2, 0xe0, 0x3, 
    0x2, 0x2, 0x2, 0xe2, 0xe3, 0x3, 0x2, 0x2, 0x2, 0xe3, 0xe8, 0x3, 0x2, 
    0x2, 0x2, 0xe4, 0xe2, 0x3, 0x2, 0x2, 0x2, 0xe5, 0xe7, 0x5, 0x8, 0x5, 
    0x2, 0xe6, 0xe5, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xea, 0x3, 0x2, 0x2, 0x2, 
    0xe8, 0xe6, 0x3, 0x2, 0x2, 0x2, 0xe8, 0xe9, 0x3, 0x2, 0x2, 0x2, 0xe9, 
    0xeb, 0x3, 0x2, 0x2, 0x2, 0xea, 0xe8, 0x3, 0x2, 0x2, 0x2, 0xeb, 0xec, 
    0x7, 0x2, 0x2, 0x3, 0xec, 0x3, 0x3, 0x2, 0x2, 0x2, 0xed, 0xee, 0x7, 
    0x3, 0x2, 0x2, 0xee, 0xef, 0x5, 0x7a, 0x3e, 0x2, 0xef, 0xf0, 0x7, 0x4, 
    0x2, 0x2, 0xf0, 0x5, 0x3, 0x2, 0x2, 0x2, 0xf1, 0xf3, 0x7, 0x5, 0x2, 
    0x2, 0xf2, 0xf4, 0x7, 0x6, 0x2, 0x2, 0xf3, 0xf2, 0x3, 0x2, 0x2, 0x2, 
    0xf3, 0xf4, 0x3, 0x2, 0x2, 0x2, 0xf4, 0xf5, 0x3, 0x2, 0x2, 0x2, 0xf5, 
    0xf8, 0x5, 0x7a, 0x3e, 0x2, 0xf6, 0xf7, 0x7, 0x7, 0x2, 0x2, 0xf7, 0xf9, 
    0x7, 0x8, 0x2, 0x2, 0xf8, 0xf6, 0x3, 0x2, 0x2, 0x2, 0xf8, 0xf9, 0x3, 
    0x2, 0x2, 0x2, 0xf9, 0xfa, 0x3, 0x2, 0x2, 0x2, 0xfa, 0xfb, 0x7, 0x4, 
    0x2, 0x2, 0xfb, 0x7, 0x3, 0x2, 0x2, 0x2, 0xfc, 0xfe, 0x5, 0x10, 0x9, 
    0x2, 0xfd, 0xfc, 0x3, 0x2, 0x2, 0x2, 0xfe, 0x101, 0x3, 0x2, 0x2, 0x2, 
    0xff, 0xfd, 0x3, 0x2, 0x2, 0x2, 0xff, 0x100, 0x3, 0x2, 0x2, 0x2, 0x100, 
    0x105, 0x3, 0x2, 0x2, 0x2, 0x101, 0xff, 0x3, 0x2, 0x2, 0x2, 0x102, 0x106, 
    0x5, 0xa, 0x6, 0x2, 0x103, 0x106, 0x5, 0xe, 0x8, 0x2, 0x104, 0x106, 
    0x5, 0xc, 0x7, 0x2, 0x105, 0x102, 0x3, 0x2, 0x2, 0x2, 0x105, 0x103, 
    0x3, 0x2, 0x2, 0x2, 0x105, 0x104, 0x3, 0x2, 0x2, 0x2, 0x106, 0x109, 
    0x3, 0x2, 0x2, 0x2, 0x107, 0x109, 0x7, 0x4, 0x2, 0x2, 0x108, 0xff, 0x3, 
    0x2, 0x2, 0x2, 0x108, 0x107, 0x3, 0x2, 0x2, 0x2, 0x109, 0x9, 0x3, 0x2, 
    0x2, 0x2, 0x10a, 0x10b, 0x7, 0x9, 0x2, 0x2, 0x10b, 0x10d, 0x7, 0x64, 
    0x2, 0x2, 0x10c, 0x10e, 0x5, 0x14, 0xb, 0x2, 0x10d, 0x10c, 0x3, 0x2, 
    0x2, 0x2, 0x10d, 0x10e, 0x3, 0x2, 0x2, 0x2, 0x10e, 0x111, 0x3, 0x2, 
    0x2, 0x2, 0x10f, 0x110, 0x7, 0xa, 0x2, 0x2, 0x110, 0x112, 0x5, 0x60, 
    0x31, 0x2, 0x111, 0x10f, 0x3, 0x2, 0x2, 0x2, 0x111, 0x112, 0x3, 0x2, 
    0x2, 0x2, 0x112, 0x115, 0x3, 0x2, 0x2, 0x2, 0x113, 0x114, 0x7, 0xb, 
    0x2, 0x2, 0x114, 0x116, 0x5, 0x24, 0x13, 0x2, 0x115, 0x113, 0x3, 0x2, 
    0x2, 0x2, 0x115, 0x116, 0x3, 0x2, 0x2, 0x2, 0x116, 0x117, 0x3, 0x2, 
    0x2, 0x2, 0x117, 0x118, 0x5, 0x26, 0x14, 0x2, 0x118, 0xb, 0x3, 0x2, 
    0x2, 0x2, 0x119, 0x11a, 0x7, 0x62, 0x2, 0x2, 0x11a, 0x11d, 0x7, 0x64, 
    0x2, 0x2, 0x11b, 0x11c, 0x7, 0xb, 0x2, 0x2, 0x11c, 0x11e, 0x5, 0x24, 
    0x13, 0x2, 0x11d, 0x11b, 0x3, 0x2, 0x2, 0x2, 0x11d, 0x11e, 0x3, 0x2, 
    0x2, 0x2, 0x11e, 0x11f, 0x3, 0x2, 0x2, 0x2, 0x11f, 0x120, 0x5, 0x1a, 
    0xe, 0x2, 0x120, 0xd, 0x3, 0x2, 0x2, 0x2, 0x121, 0x124, 0x5, 0x22, 0x12, 
    0x2, 0x122, 0x124, 0x5, 0x90, 0x49, 0x2, 0x123, 0x121, 0x3, 0x2, 0x2, 
    0x2, 0x123, 0x122, 0x3, 0x2, 0x2, 0x2, 0x124, 0xf, 0x3, 0x2, 0x2, 0x2, 
    0x125, 0x12e, 0x5, 0x84, 0x43, 0x2, 0x126, 0x12e, 0x7, 0xc, 0x2, 0x2, 
    0x127, 0x12e, 0x7, 0xd, 0x2, 0x2, 0x128, 0x12e, 0x7, 0xe, 0x2, 0x2, 
    0x129, 0x12e, 0x7, 0xf, 0x2, 0x2, 0x12a, 0x12e, 0x7, 0x6, 0x2, 0x2, 
    0x12b, 0x12e, 0x7, 0x10, 0x2, 0x2, 0x12c, 0x12e, 0x7, 0x11, 0x2, 0x2, 
    0x12d, 0x125, 0x3, 0x2, 0x2, 0x2, 0x12d, 0x126, 0x3, 0x2, 0x2, 0x2, 
    0x12d, 0x127, 0x3, 0x2, 0x2, 0x2, 0x12d, 0x128, 0x3, 0x2, 0x2, 0x2, 
    0x12d, 0x129, 0x3, 0x2, 0x2, 0x2, 0x12d, 0x12a, 0x3, 0x2, 0x2, 0x2, 
    0x12d, 0x12b, 0x3, 0x2, 0x2, 0x2, 0x12d, 0x12c, 0x3, 0x2, 0x2, 0x2, 
    0x12e, 0x11, 0x3, 0x2, 0x2, 0x2, 0x12f, 0x131, 0x5, 0x58, 0x2d, 0x2, 
    0x130, 0x12f, 0x3, 0x2, 0x2, 0x2, 0x131, 0x134, 0x3, 0x2, 0x2, 0x2, 
    0x132, 0x130, 0x3, 0x2, 0x2, 0x2, 0x132, 0x133, 0x3, 0x2, 0x2, 0x2, 
    0x133, 0x13, 0x3, 0x2, 0x2, 0x2, 0x134, 0x132, 0x3, 0x2, 0x2, 0x2, 0x135, 
    0x136, 0x7, 0x12, 0x2, 0x2, 0x136, 0x13b, 0x5, 0x16, 0xc, 0x2, 0x137, 
    0x138, 0x7, 0x13, 0x2, 0x2, 0x138, 0x13a, 0x5, 0x16, 0xc, 0x2, 0x139, 
    0x137, 0x3, 0x2, 0x2, 0x2, 0x13a, 0x13d, 0x3, 0x2, 0x2, 0x2, 0x13b, 
    0x139, 0x3, 0x2, 0x2, 0x2, 0x13b, 0x13c, 0x3, 0x2, 0x2, 0x2, 0x13c, 
    0x13e, 0x3, 0x2, 0x2, 0x2, 0x13d, 0x13b, 0x3, 0x2, 0x2, 0x2, 0x13e, 
    0x13f, 0x7, 0x14, 0x2, 0x2, 0x13f, 0x15, 0x3, 0x2, 0x2, 0x2, 0x140, 
    0x143, 0x7, 0x64, 0x2, 0x2, 0x141, 0x142, 0x7, 0xa, 0x2, 0x2, 0x142, 
    0x144, 0x5, 0x18, 0xd, 0x2, 0x143, 0x141, 0x3, 0x2, 0x2, 0x2, 0x143, 
    0x144, 0x3, 0x2, 0x2, 0x2, 0x144, 0x17, 0x3, 0x2, 0x2, 0x2, 0x145, 0x14a, 
    0x5, 0x60, 0x31, 0x2, 0x146, 0x147, 0x7, 0x15, 0x2, 0x2, 0x147, 0x149, 
    0x5, 0x60, 0x31, 0x2, 0x148, 0x146, 0x3, 0x2, 0x2, 0x2, 0x149, 0x14c, 
    0x3, 0x2, 0x2, 0x2, 0x14a, 0x148, 0x3, 0x2, 0x2, 0x2, 0x14a, 0x14b, 
    0x3, 0x2, 0x2, 0x2, 0x14b, 0x19, 0x3, 0x2, 0x2, 0x2, 0x14c, 0x14a, 0x3, 
    0x2, 0x2, 0x2, 0x14d, 0x14f, 0x7, 0x16, 0x2, 0x2, 0x14e, 0x150, 0x5, 
    0x1c, 0xf, 0x2, 0x14f, 0x14e, 0x3, 0x2, 0x2, 0x2, 0x14f, 0x150, 0x3, 
    0x2, 0x2, 0x2, 0x150, 0x152, 0x3, 0x2, 0x2, 0x2, 0x151, 0x153, 0x7, 
    0x13, 0x2, 0x2, 0x152, 0x151, 0x3, 0x2, 0x2, 0x2, 0x152, 0x153, 0x3, 
    0x2, 0x2, 0x2, 0x153, 0x155, 0x3, 0x2, 0x2, 0x2, 0x154, 0x156, 0x5, 
    0x20, 0x11, 0x2, 0x155, 0x154, 0x3, 0x2, 0x2, 0x2, 0x155, 0x156, 0x3, 
    0x2, 0x2, 0x2, 0x156, 0x157, 0x3, 0x2, 0x2, 0x2, 0x157, 0x158, 0x7, 
    0x17, 0x2, 0x2, 0x158, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x159, 0x15e, 0x5, 
    0x1e, 0x10, 0x2, 0x15a, 0x15b, 0x7, 0x13, 0x2, 0x2, 0x15b, 0x15d, 0x5, 
    0x1e, 0x10, 0x2, 0x15c, 0x15a, 0x3, 0x2, 0x2, 0x2, 0x15d, 0x160, 0x3, 
    0x2, 0x2, 0x2, 0x15e, 0x15c, 0x3, 0x2, 0x2, 0x2, 0x15e, 0x15f, 0x3, 
    0x2, 0x2, 0x2, 0x15f, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x160, 0x15e, 0x3, 0x2, 
    0x2, 0x2, 0x161, 0x163, 0x5, 0x82, 0x42, 0x2, 0x162, 0x161, 0x3, 0x2, 
    0x2, 0x2, 0x162, 0x163, 0x3, 0x2, 0x2, 0x2, 0x163, 0x164, 0x3, 0x2, 
    0x2, 0x2, 0x164, 0x166, 0x7, 0x64, 0x2, 0x2, 0x165, 0x167, 0x5, 0xda, 
    0x6e, 0x2, 0x166, 0x165, 0x3, 0x2, 0x2, 0x2, 0x166, 0x167, 0x3, 0x2, 
    0x2, 0x2, 0x167, 0x169, 0x3, 0x2, 0x2, 0x2, 0x168, 0x16a, 0x5, 0x26, 
    0x14, 0x2, 0x169, 0x168, 0x3, 0x2, 0x2, 0x2, 0x169, 0x16a, 0x3, 0x2, 
    0x2, 0x2, 0x16a, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x16b, 0x16f, 0x7, 0x4, 0x2, 
    0x2, 0x16c, 0x16e, 0x5, 0x2a, 0x16, 0x2, 0x16d, 0x16c, 0x3, 0x2, 0x2, 
    0x2, 0x16e, 0x171, 0x3, 0x2, 0x2, 0x2, 0x16f, 0x16d, 0x3, 0x2, 0x2, 
    0x2, 0x16f, 0x170, 0x3, 0x2, 0x2, 0x2, 0x170, 0x21, 0x3, 0x2, 0x2, 0x2, 
    0x171, 0x16f, 0x3, 0x2, 0x2, 0x2, 0x172, 0x173, 0x7, 0x18, 0x2, 0x2, 
    0x173, 0x175, 0x7, 0x64, 0x2, 0x2, 0x174, 0x176, 0x5, 0x14, 0xb, 0x2, 
    0x175, 0x174, 0x3, 0x2, 0x2, 0x2, 0x175, 0x176, 0x3, 0x2, 0x2, 0x2, 
    0x176, 0x179, 0x3, 0x2, 0x2, 0x2, 0x177, 0x178, 0x7, 0xa, 0x2, 0x2, 
    0x178, 0x17a, 0x5, 0x24, 0x13, 0x2, 0x179, 0x177, 0x3, 0x2, 0x2, 0x2, 
    0x179, 0x17a, 0x3, 0x2, 0x2, 0x2, 0x17a, 0x17b, 0x3, 0x2, 0x2, 0x2, 
    0x17b, 0x17c, 0x5, 0x28, 0x15, 0x2, 0x17c, 0x23, 0x3, 0x2, 0x2, 0x2, 
    0x17d, 0x182, 0x5, 0x60, 0x31, 0x2, 0x17e, 0x17f, 0x7, 0x13, 0x2, 0x2, 
    0x17f, 0x181, 0x5, 0x60, 0x31, 0x2, 0x180, 0x17e, 0x3, 0x2, 0x2, 0x2, 
    0x181, 0x184, 0x3, 0x2, 0x2, 0x2, 0x182, 0x180, 0x3, 0x2, 0x2, 0x2, 
    0x182, 0x183, 0x3, 0x2, 0x2, 0x2, 0x183, 0x25, 0x3, 0x2, 0x2, 0x2, 0x184, 
    0x182, 0x3, 0x2, 0x2, 0x2, 0x185, 0x189, 0x7, 0x16, 0x2, 0x2, 0x186, 
    0x188, 0x5, 0x2a, 0x16, 0x2, 0x187, 0x186, 0x3, 0x2, 0x2, 0x2, 0x188, 
    0x18b, 0x3, 0x2, 0x2, 0x2, 0x189, 0x187, 0x3, 0x2, 0x2, 0x2, 0x189, 
    0x18a, 0x3, 0x2, 0x2, 0x2, 0x18a, 0x18c, 0x3, 0x2, 0x2, 0x2, 0x18b, 
    0x189, 0x3, 0x2, 0x2, 0x2, 0x18c, 0x18d, 0x7, 0x17, 0x2, 0x2, 0x18d, 
    0x27, 0x3, 0x2, 0x2, 0x2, 0x18e, 0x192, 0x7, 0x16, 0x2, 0x2, 0x18f, 
    0x191, 0x5, 0x38, 0x1d, 0x2, 0x190, 0x18f, 0x3, 0x2, 0x2, 0x2, 0x191, 
    0x194, 0x3, 0x2, 0x2, 0x2, 0x192, 0x190, 0x3, 0x2, 0x2, 0x2, 0x192, 
    0x193, 0x3, 0x2, 0x2, 0x2, 0x193, 0x195, 0x3, 0x2, 0x2, 0x2, 0x194, 
    0x192, 0x3, 0x2, 0x2, 0x2, 0x195, 0x196, 0x7, 0x17, 0x2, 0x2, 0x196, 
    0x29, 0x3, 0x2, 0x2, 0x2, 0x197, 0x1a0, 0x7, 0x4, 0x2, 0x2, 0x198, 0x19a, 
    0x7, 0x6, 0x2, 0x2, 0x199, 0x198, 0x3, 0x2, 0x2, 0x2, 0x199, 0x19a, 
    0x3, 0x2, 0x2, 0x2, 0x19a, 0x19b, 0x3, 0x2, 0x2, 0x2, 0x19b, 0x1a0, 
    0x5, 0xa0, 0x51, 0x2, 0x19c, 0x19d, 0x5, 0x12, 0xa, 0x2, 0x19d, 0x19e, 
    0x5, 0x2c, 0x17, 0x2, 0x19e, 0x1a0, 0x3, 0x2, 0x2, 0x2, 0x19f, 0x197, 
    0x3, 0x2, 0x2, 0x2, 0x19f, 0x199, 0x3, 0x2, 0x2, 0x2, 0x19f, 0x19c, 
    0x3, 0x2, 0x2, 0x2, 0x1a0, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x1a1, 0x1a8, 0x5, 
    0x32, 0x1a, 0x2, 0x1a2, 0x1a8, 0x5, 0x2e, 0x18, 0x2, 0x1a3, 0x1a8, 0x5, 
    0x34, 0x1b, 0x2, 0x1a4, 0x1a8, 0x5, 0x36, 0x1c, 0x2, 0x1a5, 0x1a8, 0x5, 
    0xe, 0x8, 0x2, 0x1a6, 0x1a8, 0x5, 0xa, 0x6, 0x2, 0x1a7, 0x1a1, 0x3, 
    0x2, 0x2, 0x2, 0x1a7, 0x1a2, 0x3, 0x2, 0x2, 0x2, 0x1a7, 0x1a3, 0x3, 
    0x2, 0x2, 0x2, 0x1a7, 0x1a4, 0x3, 0x2, 0x2, 0x2, 0x1a7, 0x1a5, 0x3, 
    0x2, 0x2, 0x2, 0x1a7, 0x1a6, 0x3, 0x2, 0x2, 0x2, 0x1a8, 0x2d, 0x3, 0x2, 
    0x2, 0x2, 0x1a9, 0x1aa, 0x5, 0x60, 0x31, 0x2, 0x1aa, 0x1ab, 0x7, 0x64, 
    0x2, 0x2, 0x1ab, 0x1b0, 0x5, 0x6e, 0x38, 0x2, 0x1ac, 0x1ad, 0x7, 0x19, 
    0x2, 0x2, 0x1ad, 0x1af, 0x7, 0x1a, 0x2, 0x2, 0x1ae, 0x1ac, 0x3, 0x2, 
    0x2, 0x2, 0x1af, 0x1b2, 0x3, 0x2, 0x2, 0x2, 0x1b0, 0x1ae, 0x3, 0x2, 
    0x2, 0x2, 0x1b0, 0x1b1, 0x3, 0x2, 0x2, 0x2, 0x1b1, 0x1b3, 0x3, 0x2, 
    0x2, 0x2, 0x1b2, 0x1b0, 0x3, 0x2, 0x2, 0x2, 0x1b3, 0x1b4, 0x5, 0x30, 
    0x19, 0x2, 0x1b4, 0x1bb, 0x3, 0x2, 0x2, 0x2, 0x1b5, 0x1b6, 0x7, 0x1b, 
    0x2, 0x2, 0x1b6, 0x1b7, 0x7, 0x64, 0x2, 0x2, 0x1b7, 0x1b8, 0x5, 0x6e, 
    0x38, 0x2, 0x1b8, 0x1b9, 0x5, 0x30, 0x19, 0x2, 0x1b9, 0x1bb, 0x3, 0x2, 
    0x2, 0x2, 0x1ba, 0x1a9, 0x3, 0x2, 0x2, 0x2, 0x1ba, 0x1b5, 0x3, 0x2, 
    0x2, 0x2, 0x1bb, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x1bc, 0x1bd, 0x7, 0x1c, 
    0x2, 0x2, 0x1bd, 0x1bf, 0x5, 0x6c, 0x37, 0x2, 0x1be, 0x1bc, 0x3, 0x2, 
    0x2, 0x2, 0x1be, 0x1bf, 0x3, 0x2, 0x2, 0x2, 0x1bf, 0x1c2, 0x3, 0x2, 
    0x2, 0x2, 0x1c0, 0x1c3, 0x5, 0x74, 0x3b, 0x2, 0x1c1, 0x1c3, 0x7, 0x4, 
    0x2, 0x2, 0x1c2, 0x1c0, 0x3, 0x2, 0x2, 0x2, 0x1c2, 0x1c1, 0x3, 0x2, 
    0x2, 0x2, 0x1c3, 0x31, 0x3, 0x2, 0x2, 0x2, 0x1c4, 0x1c5, 0x5, 0x14, 
    0xb, 0x2, 0x1c5, 0x1c6, 0x5, 0x2e, 0x18, 0x2, 0x1c6, 0x33, 0x3, 0x2, 
    0x2, 0x2, 0x1c7, 0x1c8, 0x5, 0x60, 0x31, 0x2, 0x1c8, 0x1c9, 0x5, 0x4a, 
    0x26, 0x2, 0x1c9, 0x1ca, 0x7, 0x4, 0x2, 0x2, 0x1ca, 0x35, 0x3, 0x2, 
    0x2, 0x2, 0x1cb, 0x1cd, 0x5, 0x14, 0xb, 0x2, 0x1cc, 0x1cb, 0x3, 0x2, 
    0x2, 0x2, 0x1cc, 0x1cd, 0x3, 0x2, 0x2, 0x2, 0x1cd, 0x1ce, 0x3, 0x2, 
    0x2, 0x2, 0x1ce, 0x1cf, 0x7, 0x64, 0x2, 0x2, 0x1cf, 0x1d2, 0x5, 0x6e, 
    0x38, 0x2, 0x1d0, 0x1d1, 0x7, 0x1c, 0x2, 0x2, 0x1d1, 0x1d3, 0x5, 0x6c, 
    0x37, 0x2, 0x1d2, 0x1d0, 0x3, 0x2, 0x2, 0x2, 0x1d2, 0x1d3, 0x3, 0x2, 
    0x2, 0x2, 0x1d3, 0x1d4, 0x3, 0x2, 0x2, 0x2, 0x1d4, 0x1d5, 0x5, 0x76, 
    0x3c, 0x2, 0x1d5, 0x37, 0x3, 0x2, 0x2, 0x2, 0x1d6, 0x1d7, 0x5, 0x12, 
    0xa, 0x2, 0x1d7, 0x1d8, 0x5, 0x3a, 0x1e, 0x2, 0x1d8, 0x1db, 0x3, 0x2, 
    0x2, 0x2, 0x1d9, 0x1db, 0x7, 0x4, 0x2, 0x2, 0x1da, 0x1d6, 0x3, 0x2, 
    0x2, 0x2, 0x1da, 0x1d9, 0x3, 0x2, 0x2, 0x2, 0x1db, 0x39, 0x3, 0x2, 0x2, 
    0x2, 0x1dc, 0x1e4, 0x5, 0x3c, 0x1f, 0x2, 0x1dd, 0x1e4, 0x5, 0x44, 0x23, 
    0x2, 0x1de, 0x1df, 0x7, 0x1b, 0x2, 0x2, 0x1df, 0x1e0, 0x7, 0x64, 0x2, 
    0x2, 0x1e0, 0x1e4, 0x5, 0x46, 0x24, 0x2, 0x1e1, 0x1e4, 0x5, 0xe, 0x8, 
    0x2, 0x1e2, 0x1e4, 0x5, 0xa, 0x6, 0x2, 0x1e3, 0x1dc, 0x3, 0x2, 0x2, 
    0x2, 0x1e3, 0x1dd, 0x3, 0x2, 0x2, 0x2, 0x1e3, 0x1de, 0x3, 0x2, 0x2, 
    0x2, 0x1e3, 0x1e1, 0x3, 0x2, 0x2, 0x2, 0x1e3, 0x1e2, 0x3, 0x2, 0x2, 
    0x2, 0x1e4, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x1e5, 0x1e6, 0x5, 0x60, 0x31, 
    0x2, 0x1e6, 0x1e7, 0x7, 0x64, 0x2, 0x2, 0x1e7, 0x1e8, 0x5, 0x3e, 0x20, 
    0x2, 0x1e8, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x1e9, 0x1ea, 0x5, 0x4e, 0x28, 
    0x2, 0x1ea, 0x1eb, 0x7, 0x4, 0x2, 0x2, 0x1eb, 0x1ee, 0x3, 0x2, 0x2, 
    0x2, 0x1ec, 0x1ee, 0x5, 0x42, 0x22, 0x2, 0x1ed, 0x1e9, 0x3, 0x2, 0x2, 
    0x2, 0x1ed, 0x1ec, 0x3, 0x2, 0x2, 0x2, 0x1ee, 0x3f, 0x3, 0x2, 0x2, 0x2, 
    0x1ef, 0x1f2, 0x5, 0x6e, 0x38, 0x2, 0x1f0, 0x1f1, 0x7, 0x1c, 0x2, 0x2, 
    0x1f1, 0x1f3, 0x5, 0x6c, 0x37, 0x2, 0x1f2, 0x1f0, 0x3, 0x2, 0x2, 0x2, 
    0x1f2, 0x1f3, 0x3, 0x2, 0x2, 0x2, 0x1f3, 0x1f6, 0x3, 0x2, 0x2, 0x2, 
    0x1f4, 0x1f7, 0x5, 0x74, 0x3b, 0x2, 0x1f5, 0x1f7, 0x7, 0x4, 0x2, 0x2, 
    0x1f6, 0x1f4, 0x3, 0x2, 0x2, 0x2, 0x1f6, 0x1f5, 0x3, 0x2, 0x2, 0x2, 
    0x1f7, 0x41, 0x3, 0x2, 0x2, 0x2, 0x1f8, 0x1fd, 0x5, 0x6e, 0x38, 0x2, 
    0x1f9, 0x1fa, 0x7, 0x19, 0x2, 0x2, 0x1fa, 0x1fc, 0x7, 0x1a, 0x2, 0x2, 
    0x1fb, 0x1f9, 0x3, 0x2, 0x2, 0x2, 0x1fc, 0x1ff, 0x3, 0x2, 0x2, 0x2, 
    0x1fd, 0x1fb, 0x3, 0x2, 0x2, 0x2, 0x1fd, 0x1fe, 0x3, 0x2, 0x2, 0x2, 
    0x1fe, 0x202, 0x3, 0x2, 0x2, 0x2, 0x1ff, 0x1fd, 0x3, 0x2, 0x2, 0x2, 
    0x200, 0x201, 0x7, 0x1c, 0x2, 0x2, 0x201, 0x203, 0x5, 0x6c, 0x37, 0x2, 
    0x202, 0x200, 0x3, 0x2, 0x2, 0x2, 0x202, 0x203, 0x3, 0x2, 0x2, 0x2, 
    0x203, 0x204, 0x3, 0x2, 0x2, 0x2, 0x204, 0x205, 0x7, 0x4, 0x2, 0x2, 
    0x205, 0x43, 0x3, 0x2, 0x2, 0x2, 0x206, 0x209, 0x5, 0x14, 0xb, 0x2, 
    0x207, 0x20a, 0x5, 0x60, 0x31, 0x2, 0x208, 0x20a, 0x7, 0x1b, 0x2, 0x2, 
    0x209, 0x207, 0x3, 0x2, 0x2, 0x2, 0x209, 0x208, 0x3, 0x2, 0x2, 0x2, 
    0x20a, 0x20b, 0x3, 0x2, 0x2, 0x2, 0x20b, 0x20c, 0x7, 0x64, 0x2, 0x2, 
    0x20c, 0x20d, 0x5, 0x42, 0x22, 0x2, 0x20d, 0x45, 0x3, 0x2, 0x2, 0x2, 
    0x20e, 0x211, 0x5, 0x6e, 0x38, 0x2, 0x20f, 0x210, 0x7, 0x1c, 0x2, 0x2, 
    0x210, 0x212, 0x5, 0x6c, 0x37, 0x2, 0x211, 0x20f, 0x3, 0x2, 0x2, 0x2, 
    0x211, 0x212, 0x3, 0x2, 0x2, 0x2, 0x212, 0x213, 0x3, 0x2, 0x2, 0x2, 
    0x213, 0x214, 0x7, 0x4, 0x2, 0x2, 0x214, 0x47, 0x3, 0x2, 0x2, 0x2, 0x215, 
    0x216, 0x7, 0x64, 0x2, 0x2, 0x216, 0x217, 0x5, 0x50, 0x29, 0x2, 0x217, 
    0x49, 0x3, 0x2, 0x2, 0x2, 0x218, 0x21d, 0x5, 0x4c, 0x27, 0x2, 0x219, 
    0x21a, 0x7, 0x13, 0x2, 0x2, 0x21a, 0x21c, 0x5, 0x4c, 0x27, 0x2, 0x21b, 
    0x219, 0x3, 0x2, 0x2, 0x2, 0x21c, 0x21f, 0x3, 0x2, 0x2, 0x2, 0x21d, 
    0x21b, 0x3, 0x2, 0x2, 0x2, 0x21d, 0x21e, 0x3, 0x2, 0x2, 0x2, 0x21e, 
    0x4b, 0x3, 0x2, 0x2, 0x2, 0x21f, 0x21d, 0x3, 0x2, 0x2, 0x2, 0x220, 0x223, 
    0x5, 0x52, 0x2a, 0x2, 0x221, 0x222, 0x7, 0x1d, 0x2, 0x2, 0x222, 0x224, 
    0x5, 0x54, 0x2b, 0x2, 0x223, 0x221, 0x3, 0x2, 0x2, 0x2, 0x223, 0x224, 
    0x3, 0x2, 0x2, 0x2, 0x224, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x225, 0x22a, 0x5, 
    0x50, 0x29, 0x2, 0x226, 0x227, 0x7, 0x13, 0x2, 0x2, 0x227, 0x229, 0x5, 
    0x48, 0x25, 0x2, 0x228, 0x226, 0x3, 0x2, 0x2, 0x2, 0x229, 0x22c, 0x3, 
    0x2, 0x2, 0x2, 0x22a, 0x228, 0x3, 0x2, 0x2, 0x2, 0x22a, 0x22b, 0x3, 
    0x2, 0x2, 0x2, 0x22b, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x22c, 0x22a, 0x3, 0x2, 
    0x2, 0x2, 0x22d, 0x22e, 0x7, 0x19, 0x2, 0x2, 0x22e, 0x230, 0x7, 0x1a, 
    0x2, 0x2, 0x22f, 0x22d, 0x3, 0x2, 0x2, 0x2, 0x230, 0x233, 0x3, 0x2, 
    0x2, 0x2, 0x231, 0x22f, 0x3, 0x2, 0x2, 0x2, 0x231, 0x232, 0x3, 0x2, 
    0x2, 0x2, 0x232, 0x234, 0x3, 0x2, 0x2, 0x2, 0x233, 0x231, 0x3, 0x2, 
    0x2, 0x2, 0x234, 0x235, 0x7, 0x1d, 0x2, 0x2, 0x235, 0x236, 0x5, 0x54, 
    0x2b, 0x2, 0x236, 0x51, 0x3, 0x2, 0x2, 0x2, 0x237, 0x23c, 0x7, 0x64, 
    0x2, 0x2, 0x238, 0x239, 0x7, 0x19, 0x2, 0x2, 0x239, 0x23b, 0x7, 0x1a, 
    0x2, 0x2, 0x23a, 0x238, 0x3, 0x2, 0x2, 0x2, 0x23b, 0x23e, 0x3, 0x2, 
    0x2, 0x2, 0x23c, 0x23a, 0x3, 0x2, 0x2, 0x2, 0x23c, 0x23d, 0x3, 0x2, 
    0x2, 0x2, 0x23d, 0x53, 0x3, 0x2, 0x2, 0x2, 0x23e, 0x23c, 0x3, 0x2, 0x2, 
    0x2, 0x23f, 0x242, 0x5, 0x56, 0x2c, 0x2, 0x240, 0x242, 0x5, 0xc8, 0x65, 
    0x2, 0x241, 0x23f, 0x3, 0x2, 0x2, 0x2, 0x241, 0x240, 0x3, 0x2, 0x2, 
    0x2, 0x242, 0x55, 0x3, 0x2, 0x2, 0x2, 0x243, 0x24f, 0x7, 0x16, 0x2, 
    0x2, 0x244, 0x249, 0x5, 0x54, 0x2b, 0x2, 0x245, 0x246, 0x7, 0x13, 0x2, 
    0x2, 0x246, 0x248, 0x5, 0x54, 0x2b, 0x2, 0x247, 0x245, 0x3, 0x2, 0x2, 
    0x2, 0x248, 0x24b, 0x3, 0x2, 0x2, 0x2, 0x249, 0x247, 0x3, 0x2, 0x2, 
    0x2, 0x249, 0x24a, 0x3, 0x2, 0x2, 0x2, 0x24a, 0x24d, 0x3, 0x2, 0x2, 
    0x2, 0x24b, 0x249, 0x3, 0x2, 0x2, 0x2, 0x24c, 0x24e, 0x7, 0x13, 0x2, 
    0x2, 0x24d, 0x24c, 0x3, 0x2, 0x2, 0x2, 0x24d, 0x24e, 0x3, 0x2, 0x2, 
    0x2, 0x24e, 0x250, 0x3, 0x2, 0x2, 0x2, 0x24f, 0x244, 0x3, 0x2, 0x2, 
    0x2, 0x24f, 0x250, 0x3, 0x2, 0x2, 0x2, 0x250, 0x251, 0x3, 0x2, 0x2, 
    0x2, 0x251, 0x252, 0x7, 0x17, 0x2, 0x2, 0x252, 0x57, 0x3, 0x2, 0x2, 
    0x2, 0x253, 0x260, 0x5, 0x84, 0x43, 0x2, 0x254, 0x260, 0x7, 0xc, 0x2, 
    0x2, 0x255, 0x260, 0x7, 0xd, 0x2, 0x2, 0x256, 0x260, 0x7, 0xe, 0x2, 
    0x2, 0x257, 0x260, 0x7, 0x6, 0x2, 0x2, 0x258, 0x260, 0x7, 0xf, 0x2, 
    0x2, 0x259, 0x260, 0x7, 0x10, 0x2, 0x2, 0x25a, 0x260, 0x7, 0x1e, 0x2, 
    0x2, 0x25b, 0x260, 0x7, 0x1f, 0x2, 0x2, 0x25c, 0x260, 0x7, 0x20, 0x2, 
    0x2, 0x25d, 0x260, 0x7, 0x21, 0x2, 0x2, 0x25e, 0x260, 0x7, 0x11, 0x2, 
    0x2, 0x25f, 0x253, 0x3, 0x2, 0x2, 0x2, 0x25f, 0x254, 0x3, 0x2, 0x2, 
    0x2, 0x25f, 0x255, 0x3, 0x2, 0x2, 0x2, 0x25f, 0x256, 0x3, 0x2, 0x2, 
    0x2, 0x25f, 0x257, 0x3, 0x2, 0x2, 0x2, 0x25f, 0x258, 0x3, 0x2, 0x2, 
    0x2, 0x25f, 0x259, 0x3, 0x2, 0x2, 0x2, 0x25f, 0x25a, 0x3, 0x2, 0x2, 
    0x2, 0x25f, 0x25b, 0x3, 0x2, 0x2, 0x2, 0x25f, 0x25c, 0x3, 0x2, 0x2, 
    0x2, 0x25f, 0x25d, 0x3, 0x2, 0x2, 0x2, 0x25f, 0x25e, 0x3, 0x2, 0x2, 
    0x2, 0x260, 0x59, 0x3, 0x2, 0x2, 0x2, 0x261, 0x262, 0x5, 0x7a, 0x3e, 
    0x2, 0x262, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x263, 0x264, 0x7, 0x64, 0x2, 
    0x2, 0x264, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x265, 0x266, 0x5, 0x7a, 0x3e, 
    0x2, 0x266, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x267, 0x26c, 0x5, 0x62, 0x32, 
    0x2, 0x268, 0x269, 0x7, 0x19, 0x2, 0x2, 0x269, 0x26b, 0x7, 0x1a, 0x2, 
    0x2, 0x26a, 0x268, 0x3, 0x2, 0x2, 0x2, 0x26b, 0x26e, 0x3, 0x2, 0x2, 
    0x2, 0x26c, 0x26a, 0x3, 0x2, 0x2, 0x2, 0x26c, 0x26d, 0x3, 0x2, 0x2, 
    0x2, 0x26d, 0x278, 0x3, 0x2, 0x2, 0x2, 0x26e, 0x26c, 0x3, 0x2, 0x2, 
    0x2, 0x26f, 0x274, 0x5, 0x64, 0x33, 0x2, 0x270, 0x271, 0x7, 0x19, 0x2, 
    0x2, 0x271, 0x273, 0x7, 0x1a, 0x2, 0x2, 0x272, 0x270, 0x3, 0x2, 0x2, 
    0x2, 0x273, 0x276, 0x3, 0x2, 0x2, 0x2, 0x274, 0x272, 0x3, 0x2, 0x2, 
    0x2, 0x274, 0x275, 0x3, 0x2, 0x2, 0x2, 0x275, 0x278, 0x3, 0x2, 0x2, 
    0x2, 0x276, 0x274, 0x3, 0x2, 0x2, 0x2, 0x277, 0x267, 0x3, 0x2, 0x2, 
    0x2, 0x277, 0x26f, 0x3, 0x2, 0x2, 0x2, 0x278, 0x61, 0x3, 0x2, 0x2, 0x2, 
    0x279, 0x27b, 0x7, 0x64, 0x2, 0x2, 0x27a, 0x27c, 0x5, 0x68, 0x35, 0x2, 
    0x27b, 0x27a, 0x3, 0x2, 0x2, 0x2, 0x27b, 0x27c, 0x3, 0x2, 0x2, 0x2, 
    0x27c, 0x284, 0x3, 0x2, 0x2, 0x2, 0x27d, 0x27e, 0x7, 0x7, 0x2, 0x2, 
    0x27e, 0x280, 0x7, 0x64, 0x2, 0x2, 0x27f, 0x281, 0x5, 0x68, 0x35, 0x2, 
    0x280, 0x27f, 0x3, 0x2, 0x2, 0x2, 0x280, 0x281, 0x3, 0x2, 0x2, 0x2, 
    0x281, 0x283, 0x3, 0x2, 0x2, 0x2, 0x282, 0x27d, 0x3, 0x2, 0x2, 0x2, 
    0x283, 0x286, 0x3, 0x2, 0x2, 0x2, 0x284, 0x282, 0x3, 0x2, 0x2, 0x2, 
    0x284, 0x285, 0x3, 0x2, 0x2, 0x2, 0x285, 0x63, 0x3, 0x2, 0x2, 0x2, 0x286, 
    0x284, 0x3, 0x2, 0x2, 0x2, 0x287, 0x288, 0x9, 0x2, 0x2, 0x2, 0x288, 
    0x65, 0x3, 0x2, 0x2, 0x2, 0x289, 0x28c, 0x7, 0x10, 0x2, 0x2, 0x28a, 
    0x28c, 0x5, 0x84, 0x43, 0x2, 0x28b, 0x289, 0x3, 0x2, 0x2, 0x2, 0x28b, 
    0x28a, 0x3, 0x2, 0x2, 0x2, 0x28c, 0x67, 0x3, 0x2, 0x2, 0x2, 0x28d, 0x28e, 
    0x7, 0x12, 0x2, 0x2, 0x28e, 0x293, 0x5, 0x6a, 0x36, 0x2, 0x28f, 0x290, 
    0x7, 0x13, 0x2, 0x2, 0x290, 0x292, 0x5, 0x6a, 0x36, 0x2, 0x291, 0x28f, 
    0x3, 0x2, 0x2, 0x2, 0x292, 0x295, 0x3, 0x2, 0x2, 0x2, 0x293, 0x291, 
    0x3, 0x2, 0x2, 0x2, 0x293, 0x294, 0x3, 0x2, 0x2, 0x2, 0x294, 0x296, 
    0x3, 0x2, 0x2, 0x2, 0x295, 0x293, 0x3, 0x2, 0x2, 0x2, 0x296, 0x297, 
    0x7, 0x14, 0x2, 0x2, 0x297, 0x69, 0x3, 0x2, 0x2, 0x2, 0x298, 0x29f, 
    0x5, 0x60, 0x31, 0x2, 0x299, 0x29c, 0x7, 0x2a, 0x2, 0x2, 0x29a, 0x29b, 
    0x9, 0x3, 0x2, 0x2, 0x29b, 0x29d, 0x5, 0x60, 0x31, 0x2, 0x29c, 0x29a, 
    0x3, 0x2, 0x2, 0x2, 0x29c, 0x29d, 0x3, 0x2, 0x2, 0x2, 0x29d, 0x29f, 
    0x3, 0x2, 0x2, 0x2, 0x29e, 0x298, 0x3, 0x2, 0x2, 0x2, 0x29e, 0x299, 
    0x3, 0x2, 0x2, 0x2, 0x29f, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x2a0, 0x2a5, 0x5, 
    0x7a, 0x3e, 0x2, 0x2a1, 0x2a2, 0x7, 0x13, 0x2, 0x2, 0x2a2, 0x2a4, 0x5, 
    0x7a, 0x3e, 0x2, 0x2a3, 0x2a1, 0x3, 0x2, 0x2, 0x2, 0x2a4, 0x2a7, 0x3, 
    0x2, 0x2, 0x2, 0x2a5, 0x2a3, 0x3, 0x2, 0x2, 0x2, 0x2a5, 0x2a6, 0x3, 
    0x2, 0x2, 0x2, 0x2a6, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x2a7, 0x2a5, 0x3, 0x2, 
    0x2, 0x2, 0x2a8, 0x2aa, 0x7, 0x2c, 0x2, 0x2, 0x2a9, 0x2ab, 0x5, 0x70, 
    0x39, 0x2, 0x2aa, 0x2a9, 0x3, 0x2, 0x2, 0x2, 0x2aa, 0x2ab, 0x3, 0x2, 
    0x2, 0x2, 0x2ab, 0x2ac, 0x3, 0x2, 0x2, 0x2, 0x2ac, 0x2ad, 0x7, 0x2d, 
    0x2, 0x2, 0x2ad, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x2ae, 0x2af, 0x5, 0xa8, 
    0x55, 0x2, 0x2af, 0x2b0, 0x5, 0x60, 0x31, 0x2, 0x2b0, 0x2b1, 0x5, 0x72, 
    0x3a, 0x2, 0x2b1, 0x71, 0x3, 0x2, 0x2, 0x2, 0x2b2, 0x2b5, 0x5, 0x52, 
    0x2a, 0x2, 0x2b3, 0x2b4, 0x7, 0x13, 0x2, 0x2, 0x2b4, 0x2b6, 0x5, 0x70, 
    0x39, 0x2, 0x2b5, 0x2b3, 0x3, 0x2, 0x2, 0x2, 0x2b5, 0x2b6, 0x3, 0x2, 
    0x2, 0x2, 0x2b6, 0x2ba, 0x3, 0x2, 0x2, 0x2, 0x2b7, 0x2b8, 0x7, 0x2e, 
    0x2, 0x2, 0x2b8, 0x2ba, 0x5, 0x52, 0x2a, 0x2, 0x2b9, 0x2b2, 0x3, 0x2, 
    0x2, 0x2, 0x2b9, 0x2b7, 0x3, 0x2, 0x2, 0x2, 0x2ba, 0x73, 0x3, 0x2, 0x2, 
    0x2, 0x2bb, 0x2bc, 0x5, 0xa0, 0x51, 0x2, 0x2bc, 0x75, 0x3, 0x2, 0x2, 
    0x2, 0x2bd, 0x2bf, 0x7, 0x16, 0x2, 0x2, 0x2be, 0x2c0, 0x5, 0x78, 0x3d, 
    0x2, 0x2bf, 0x2be, 0x3, 0x2, 0x2, 0x2, 0x2bf, 0x2c0, 0x3, 0x2, 0x2, 
    0x2, 0x2c0, 0x2c4, 0x3, 0x2, 0x2, 0x2, 0x2c1, 0x2c3, 0x5, 0xa2, 0x52, 
    0x2, 0x2c2, 0x2c1, 0x3, 0x2, 0x2, 0x2, 0x2c3, 0x2c6, 0x3, 0x2, 0x2, 
    0x2, 0x2c4, 0x2c2, 0x3, 0x2, 0x2, 0x2, 0x2c4, 0x2c5, 0x3, 0x2, 0x2, 
    0x2, 0x2c5, 0x2c7, 0x3, 0x2, 0x2, 0x2, 0x2c6, 0x2c4, 0x3, 0x2, 0x2, 
    0x2, 0x2c7, 0x2c8, 0x7, 0x17, 0x2, 0x2, 0x2c8, 0x77, 0x3, 0x2, 0x2, 
    0x2, 0x2c9, 0x2cb, 0x5, 0xd8, 0x6d, 0x2, 0x2ca, 0x2c9, 0x3, 0x2, 0x2, 
    0x2, 0x2ca, 0x2cb, 0x3, 0x2, 0x2, 0x2, 0x2cb, 0x2cc, 0x3, 0x2, 0x2, 
    0x2, 0x2cc, 0x2cd, 0x9, 0x4, 0x2, 0x2, 0x2cd, 0x2ce, 0x5, 0xda, 0x6e, 
    0x2, 0x2ce, 0x2cf, 0x7, 0x4, 0x2, 0x2, 0x2cf, 0x2da, 0x3, 0x2, 0x2, 
    0x2, 0x2d0, 0x2d1, 0x5, 0xca, 0x66, 0x2, 0x2d1, 0x2d3, 0x7, 0x7, 0x2, 
    0x2, 0x2d2, 0x2d4, 0x5, 0xd8, 0x6d, 0x2, 0x2d3, 0x2d2, 0x3, 0x2, 0x2, 
    0x2, 0x2d3, 0x2d4, 0x3, 0x2, 0x2, 0x2, 0x2d4, 0x2d5, 0x3, 0x2, 0x2, 
    0x2, 0x2d5, 0x2d6, 0x7, 0x2b, 0x2, 0x2, 0x2d6, 0x2d7, 0x5, 0xda, 0x6e, 
    0x2, 0x2d7, 0x2d8, 0x7, 0x4, 0x2, 0x2, 0x2d8, 0x2da, 0x3, 0x2, 0x2, 
    0x2, 0x2d9, 0x2ca, 0x3, 0x2, 0x2, 0x2, 0x2d9, 0x2d0, 0x3, 0x2, 0x2, 
    0x2, 0x2da, 0x79, 0x3, 0x2, 0x2, 0x2, 0x2db, 0x2e0, 0x7, 0x64, 0x2, 
    0x2, 0x2dc, 0x2dd, 0x7, 0x7, 0x2, 0x2, 0x2dd, 0x2df, 0x7, 0x64, 0x2, 
    0x2, 0x2de, 0x2dc, 0x3, 0x2, 0x2, 0x2, 0x2df, 0x2e2, 0x3, 0x2, 0x2, 
    0x2, 0x2e0, 0x2de, 0x3, 0x2, 0x2, 0x2, 0x2e0, 0x2e1, 0x3, 0x2, 0x2, 
    0x2, 0x2e1, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x2e2, 0x2e0, 0x3, 0x2, 0x2, 0x2, 
    0x2e3, 0x2ea, 0x5, 0x7e, 0x40, 0x2, 0x2e4, 0x2ea, 0x7, 0x5f, 0x2, 0x2, 
    0x2e5, 0x2ea, 0x7, 0x60, 0x2, 0x2, 0x2e6, 0x2ea, 0x7, 0x61, 0x2, 0x2, 
    0x2e7, 0x2ea, 0x5, 0x80, 0x41, 0x2, 0x2e8, 0x2ea, 0x7, 0x30, 0x2, 0x2, 
    0x2e9, 0x2e3, 0x3, 0x2, 0x2, 0x2, 0x2e9, 0x2e4, 0x3, 0x2, 0x2, 0x2, 
    0x2e9, 0x2e5, 0x3, 0x2, 0x2, 0x2, 0x2e9, 0x2e6, 0x3, 0x2, 0x2, 0x2, 
    0x2e9, 0x2e7, 0x3, 0x2, 0x2, 0x2, 0x2e9, 0x2e8, 0x3, 0x2, 0x2, 0x2, 
    0x2ea, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x2eb, 0x2ec, 0x9, 0x5, 0x2, 0x2, 0x2ec, 
    0x7f, 0x3, 0x2, 0x2, 0x2, 0x2ed, 0x2ee, 0x9, 0x6, 0x2, 0x2, 0x2ee, 0x81, 
    0x3, 0x2, 0x2, 0x2, 0x2ef, 0x2f1, 0x5, 0x84, 0x43, 0x2, 0x2f0, 0x2ef, 
    0x3, 0x2, 0x2, 0x2, 0x2f1, 0x2f2, 0x3, 0x2, 0x2, 0x2, 0x2f2, 0x2f0, 
    0x3, 0x2, 0x2, 0x2, 0x2f2, 0x2f3, 0x3, 0x2, 0x2, 0x2, 0x2f3, 0x83, 0x3, 
    0x2, 0x2, 0x2, 0x2f4, 0x2f5, 0x7, 0x33, 0x2, 0x2, 0x2f5, 0x2fc, 0x5, 
    0x86, 0x44, 0x2, 0x2f6, 0x2f9, 0x7, 0x2c, 0x2, 0x2, 0x2f7, 0x2fa, 0x5, 
    0x88, 0x45, 0x2, 0x2f8, 0x2fa, 0x5, 0x8c, 0x47, 0x2, 0x2f9, 0x2f7, 0x3, 
    0x2, 0x2, 0x2, 0x2f9, 0x2f8, 0x3, 0x2, 0x2, 0x2, 0x2f9, 0x2fa, 0x3, 
    0x2, 0x2, 0x2, 0x2fa, 0x2fb, 0x3, 0x2, 0x2, 0x2, 0x2fb, 0x2fd, 0x7, 
    0x2d, 0x2, 0x2, 0x2fc, 0x2f6, 0x3, 0x2, 0x2, 0x2, 0x2fc, 0x2fd, 0x3, 
    0x2, 0x2, 0x2, 0x2fd, 0x85, 0x3, 0x2, 0x2, 0x2, 0x2fe, 0x303, 0x7, 0x64, 
    0x2, 0x2, 0x2ff, 0x300, 0x7, 0x7, 0x2, 0x2, 0x300, 0x302, 0x7, 0x64, 
    0x2, 0x2, 0x301, 0x2ff, 0x3, 0x2, 0x2, 0x2, 0x302, 0x305, 0x3, 0x2, 
    0x2, 0x2, 0x303, 0x301, 0x3, 0x2, 0x2, 0x2, 0x303, 0x304, 0x3, 0x2, 
    0x2, 0x2, 0x304, 0x87, 0x3, 0x2, 0x2, 0x2, 0x305, 0x303, 0x3, 0x2, 0x2, 
    0x2, 0x306, 0x30b, 0x5, 0x8a, 0x46, 0x2, 0x307, 0x308, 0x7, 0x13, 0x2, 
    0x2, 0x308, 0x30a, 0x5, 0x8a, 0x46, 0x2, 0x309, 0x307, 0x3, 0x2, 0x2, 
    0x2, 0x30a, 0x30d, 0x3, 0x2, 0x2, 0x2, 0x30b, 0x309, 0x3, 0x2, 0x2, 
    0x2, 0x30b, 0x30c, 0x3, 0x2, 0x2, 0x2, 0x30c, 0x89, 0x3, 0x2, 0x2, 0x2, 
    0x30d, 0x30b, 0x3, 0x2, 0x2, 0x2, 0x30e, 0x30f, 0x7, 0x64, 0x2, 0x2, 
    0x30f, 0x310, 0x7, 0x1d, 0x2, 0x2, 0x310, 0x311, 0x5, 0x8c, 0x47, 0x2, 
    0x311, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x312, 0x316, 0x5, 0xc8, 0x65, 0x2, 
    0x313, 0x316, 0x5, 0x84, 0x43, 0x2, 0x314, 0x316, 0x5, 0x8e, 0x48, 0x2, 
    0x315, 0x312, 0x3, 0x2, 0x2, 0x2, 0x315, 0x313, 0x3, 0x2, 0x2, 0x2, 
    0x315, 0x314, 0x3, 0x2, 0x2, 0x2, 0x316, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x317, 
    0x320, 0x7, 0x16, 0x2, 0x2, 0x318, 0x31d, 0x5, 0x8c, 0x47, 0x2, 0x319, 
    0x31a, 0x7, 0x13, 0x2, 0x2, 0x31a, 0x31c, 0x5, 0x8c, 0x47, 0x2, 0x31b, 
    0x319, 0x3, 0x2, 0x2, 0x2, 0x31c, 0x31f, 0x3, 0x2, 0x2, 0x2, 0x31d, 
    0x31b, 0x3, 0x2, 0x2, 0x2, 0x31d, 0x31e, 0x3, 0x2, 0x2, 0x2, 0x31e, 
    0x321, 0x3, 0x2, 0x2, 0x2, 0x31f, 0x31d, 0x3, 0x2, 0x2, 0x2, 0x320, 
    0x318, 0x3, 0x2, 0x2, 0x2, 0x320, 0x321, 0x3, 0x2, 0x2, 0x2, 0x321, 
    0x323, 0x3, 0x2, 0x2, 0x2, 0x322, 0x324, 0x7, 0x13, 0x2, 0x2, 0x323, 
    0x322, 0x3, 0x2, 0x2, 0x2, 0x323, 0x324, 0x3, 0x2, 0x2, 0x2, 0x324, 
    0x325, 0x3, 0x2, 0x2, 0x2, 0x325, 0x326, 0x7, 0x17, 0x2, 0x2, 0x326, 
    0x8f, 0x3, 0x2, 0x2, 0x2, 0x327, 0x328, 0x7, 0x33, 0x2, 0x2, 0x328, 
    0x329, 0x7, 0x18, 0x2, 0x2, 0x329, 0x32a, 0x7, 0x64, 0x2, 0x2, 0x32a, 
    0x32b, 0x5, 0x92, 0x4a, 0x2, 0x32b, 0x91, 0x3, 0x2, 0x2, 0x2, 0x32c, 
    0x330, 0x7, 0x16, 0x2, 0x2, 0x32d, 0x32f, 0x5, 0x94, 0x4b, 0x2, 0x32e, 
    0x32d, 0x3, 0x2, 0x2, 0x2, 0x32f, 0x332, 0x3, 0x2, 0x2, 0x2, 0x330, 
    0x32e, 0x3, 0x2, 0x2, 0x2, 0x330, 0x331, 0x3, 0x2, 0x2, 0x2, 0x331, 
    0x333, 0x3, 0x2, 0x2, 0x2, 0x332, 0x330, 0x3, 0x2, 0x2, 0x2, 0x333, 
    0x334, 0x7, 0x17, 0x2, 0x2, 0x334, 0x93, 0x3, 0x2, 0x2, 0x2, 0x335, 
    0x336, 0x5, 0x12, 0xa, 0x2, 0x336, 0x337, 0x5, 0x96, 0x4c, 0x2, 0x337, 
    0x95, 0x3, 0x2, 0x2, 0x2, 0x338, 0x339, 0x5, 0x60, 0x31, 0x2, 0x339, 
    0x33a, 0x5, 0x98, 0x4d, 0x2, 0x33a, 0x33b, 0x7, 0x4, 0x2, 0x2, 0x33b, 
    0x34d, 0x3, 0x2, 0x2, 0x2, 0x33c, 0x33e, 0x5, 0xa, 0x6, 0x2, 0x33d, 
    0x33f, 0x7, 0x4, 0x2, 0x2, 0x33e, 0x33d, 0x3, 0x2, 0x2, 0x2, 0x33e, 
    0x33f, 0x3, 0x2, 0x2, 0x2, 0x33f, 0x34d, 0x3, 0x2, 0x2, 0x2, 0x340, 
    0x342, 0x5, 0x22, 0x12, 0x2, 0x341, 0x343, 0x7, 0x4, 0x2, 0x2, 0x342, 
    0x341, 0x3, 0x2, 0x2, 0x2, 0x342, 0x343, 0x3, 0x2, 0x2, 0x2, 0x343, 
    0x34d, 0x3, 0x2, 0x2, 0x2, 0x344, 0x346, 0x5, 0xc, 0x7, 0x2, 0x345, 
    0x347, 0x7, 0x4, 0x2, 0x2, 0x346, 0x345, 0x3, 0x2, 0x2, 0x2, 0x346, 
    0x347, 0x3, 0x2, 0x2, 0x2, 0x347, 0x34d, 0x3, 0x2, 0x2, 0x2, 0x348, 
    0x34a, 0x5, 0x90, 0x49, 0x2, 0x349, 0x34b, 0x7, 0x4, 0x2, 0x2, 0x34a, 
    0x349, 0x3, 0x2, 0x2, 0x2, 0x34a, 0x34b, 0x3, 0x2, 0x2, 0x2, 0x34b, 
    0x34d, 0x3, 0x2, 0x2, 0x2, 0x34c, 0x338, 0x3, 0x2, 0x2, 0x2, 0x34c, 
    0x33c, 0x3, 0x2, 0x2, 0x2, 0x34c, 0x340, 0x3, 0x2, 0x2, 0x2, 0x34c, 
    0x344, 0x3, 0x2, 0x2, 0x2, 0x34c, 0x348, 0x3, 0x2, 0x2, 0x2, 0x34d, 
    0x97, 0x3, 0x2, 0x2, 0x2, 0x34e, 0x351, 0x5, 0x9a, 0x4e, 0x2, 0x34f, 
    0x351, 0x5, 0x9c, 0x4f, 0x2, 0x350, 0x34e, 0x3, 0x2, 0x2, 0x2, 0x350, 
    0x34f, 0x3, 0x2, 0x2, 0x2, 0x351, 0x99, 0x3, 0x2, 0x2, 0x2, 0x352, 0x353, 
    0x7, 0x64, 0x2, 0x2, 0x353, 0x354, 0x7, 0x2c, 0x2, 0x2, 0x354, 0x356, 
    0x7, 0x2d, 0x2, 0x2, 0x355, 0x357, 0x5, 0x9e, 0x50, 0x2, 0x356, 0x355, 
    0x3, 0x2, 0x2, 0x2, 0x356, 0x357, 0x3, 0x2, 0x2, 0x2, 0x357, 0x9b, 0x3, 
    0x2, 0x2, 0x2, 0x358, 0x359, 0x5, 0x4a, 0x26, 0x2, 0x359, 0x9d, 0x3, 
    0x2, 0x2, 0x2, 0x35a, 0x35b, 0x7, 0x34, 0x2, 0x2, 0x35b, 0x35c, 0x5, 
    0x8c, 0x47, 0x2, 0x35c, 0x9f, 0x3, 0x2, 0x2, 0x2, 0x35d, 0x361, 0x7, 
    0x16, 0x2, 0x2, 0x35e, 0x360, 0x5, 0xa2, 0x52, 0x2, 0x35f, 0x35e, 0x3, 
    0x2, 0x2, 0x2, 0x360, 0x363, 0x3, 0x2, 0x2, 0x2, 0x361, 0x35f, 0x3, 
    0x2, 0x2, 0x2, 0x361, 0x362, 0x3, 0x2, 0x2, 0x2, 0x362, 0x364, 0x3, 
    0x2, 0x2, 0x2, 0x363, 0x361, 0x3, 0x2, 0x2, 0x2, 0x364, 0x365, 0x7, 
    0x17, 0x2, 0x2, 0x365, 0xa1, 0x3, 0x2, 0x2, 0x2, 0x366, 0x36b, 0x5, 
    0xa4, 0x53, 0x2, 0x367, 0x36b, 0x5, 0xa, 0x6, 0x2, 0x368, 0x36b, 0x5, 
    0xe, 0x8, 0x2, 0x369, 0x36b, 0x5, 0xaa, 0x56, 0x2, 0x36a, 0x366, 0x3, 
    0x2, 0x2, 0x2, 0x36a, 0x367, 0x3, 0x2, 0x2, 0x2, 0x36a, 0x368, 0x3, 
    0x2, 0x2, 0x2, 0x36a, 0x369, 0x3, 0x2, 0x2, 0x2, 0x36b, 0xa3, 0x3, 0x2, 
    0x2, 0x2, 0x36c, 0x36d, 0x5, 0xa6, 0x54, 0x2, 0x36d, 0x36e, 0x7, 0x4, 
    0x2, 0x2, 0x36e, 0xa5, 0x3, 0x2, 0x2, 0x2, 0x36f, 0x370, 0x5, 0xa8, 
    0x55, 0x2, 0x370, 0x371, 0x5, 0x60, 0x31, 0x2, 0x371, 0x372, 0x5, 0x4a, 
    0x26, 0x2, 0x372, 0xa7, 0x3, 0x2, 0x2, 0x2, 0x373, 0x375, 0x5, 0x66, 
    0x34, 0x2, 0x374, 0x373, 0x3, 0x2, 0x2, 0x2, 0x375, 0x378, 0x3, 0x2, 
    0x2, 0x2, 0x376, 0x374, 0x3, 0x2, 0x2, 0x2, 0x376, 0x377, 0x3, 0x2, 
    0x2, 0x2, 0x377, 0xa9, 0x3, 0x2, 0x2, 0x2, 0x378, 0x376, 0x3, 0x2, 0x2, 
    0x2, 0x379, 0x3c7, 0x5, 0xa0, 0x51, 0x2, 0x37a, 0x37b, 0x7, 0x63, 0x2, 
    0x2, 0x37b, 0x37e, 0x5, 0xc8, 0x65, 0x2, 0x37c, 0x37d, 0x7, 0x35, 0x2, 
    0x2, 0x37d, 0x37f, 0x5, 0xc8, 0x65, 0x2, 0x37e, 0x37c, 0x3, 0x2, 0x2, 
    0x2, 0x37e, 0x37f, 0x3, 0x2, 0x2, 0x2, 0x37f, 0x380, 0x3, 0x2, 0x2, 
    0x2, 0x380, 0x381, 0x7, 0x4, 0x2, 0x2, 0x381, 0x3c7, 0x3, 0x2, 0x2, 
    0x2, 0x382, 0x383, 0x7, 0x36, 0x2, 0x2, 0x383, 0x384, 0x5, 0xc0, 0x61, 
    0x2, 0x384, 0x387, 0x5, 0xaa, 0x56, 0x2, 0x385, 0x386, 0x7, 0x37, 0x2, 
    0x2, 0x386, 0x388, 0x5, 0xaa, 0x56, 0x2, 0x387, 0x385, 0x3, 0x2, 0x2, 
    0x2, 0x387, 0x388, 0x3, 0x2, 0x2, 0x2, 0x388, 0x3c7, 0x3, 0x2, 0x2, 
    0x2, 0x389, 0x38a, 0x7, 0x38, 0x2, 0x2, 0x38a, 0x38b, 0x7, 0x2c, 0x2, 
    0x2, 0x38b, 0x38c, 0x5, 0xb8, 0x5d, 0x2, 0x38c, 0x38d, 0x7, 0x2d, 0x2, 
    0x2, 0x38d, 0x38e, 0x5, 0xaa, 0x56, 0x2, 0x38e, 0x3c7, 0x3, 0x2, 0x2, 
    0x2, 0x38f, 0x390, 0x7, 0x39, 0x2, 0x2, 0x390, 0x391, 0x5, 0xc0, 0x61, 
    0x2, 0x391, 0x392, 0x5, 0xaa, 0x56, 0x2, 0x392, 0x3c7, 0x3, 0x2, 0x2, 
    0x2, 0x393, 0x394, 0x7, 0x3a, 0x2, 0x2, 0x394, 0x395, 0x5, 0xaa, 0x56, 
    0x2, 0x395, 0x396, 0x7, 0x39, 0x2, 0x2, 0x396, 0x397, 0x5, 0xc0, 0x61, 
    0x2, 0x397, 0x398, 0x7, 0x4, 0x2, 0x2, 0x398, 0x3c7, 0x3, 0x2, 0x2, 
    0x2, 0x399, 0x39a, 0x7, 0x3b, 0x2, 0x2, 0x39a, 0x3a2, 0x5, 0xa0, 0x51, 
    0x2, 0x39b, 0x39c, 0x5, 0xac, 0x57, 0x2, 0x39c, 0x39d, 0x7, 0x3c, 0x2, 
    0x2, 0x39d, 0x39e, 0x5, 0xa0, 0x51, 0x2, 0x39e, 0x3a3, 0x3, 0x2, 0x2, 
    0x2, 0x39f, 0x3a3, 0x5, 0xac, 0x57, 0x2, 0x3a0, 0x3a1, 0x7, 0x3c, 0x2, 
    0x2, 0x3a1, 0x3a3, 0x5, 0xa0, 0x51, 0x2, 0x3a2, 0x39b, 0x3, 0x2, 0x2, 
    0x2, 0x3a2, 0x39f, 0x3, 0x2, 0x2, 0x2, 0x3a2, 0x3a0, 0x3, 0x2, 0x2, 
    0x2, 0x3a3, 0x3c7, 0x3, 0x2, 0x2, 0x2, 0x3a4, 0x3a5, 0x7, 0x3d, 0x2, 
    0x2, 0x3a5, 0x3a6, 0x5, 0xc0, 0x61, 0x2, 0x3a6, 0x3a7, 0x5, 0xb2, 0x5a, 
    0x2, 0x3a7, 0x3c7, 0x3, 0x2, 0x2, 0x2, 0x3a8, 0x3a9, 0x7, 0x1f, 0x2, 
    0x2, 0x3a9, 0x3aa, 0x5, 0xc0, 0x61, 0x2, 0x3aa, 0x3ab, 0x5, 0xa0, 0x51, 
    0x2, 0x3ab, 0x3c7, 0x3, 0x2, 0x2, 0x2, 0x3ac, 0x3ae, 0x7, 0x3e, 0x2, 
    0x2, 0x3ad, 0x3af, 0x5, 0xc8, 0x65, 0x2, 0x3ae, 0x3ad, 0x3, 0x2, 0x2, 
    0x2, 0x3ae, 0x3af, 0x3, 0x2, 0x2, 0x2, 0x3af, 0x3b0, 0x3, 0x2, 0x2, 
    0x2, 0x3b0, 0x3c7, 0x7, 0x4, 0x2, 0x2, 0x3b1, 0x3b2, 0x7, 0x3f, 0x2, 
    0x2, 0x3b2, 0x3b3, 0x5, 0xc8, 0x65, 0x2, 0x3b3, 0x3b4, 0x7, 0x4, 0x2, 
    0x2, 0x3b4, 0x3c7, 0x3, 0x2, 0x2, 0x2, 0x3b5, 0x3b7, 0x7, 0x40, 0x2, 
    0x2, 0x3b6, 0x3b8, 0x7, 0x64, 0x2, 0x2, 0x3b7, 0x3b6, 0x3, 0x2, 0x2, 
    0x2, 0x3b7, 0x3b8, 0x3, 0x2, 0x2, 0x2, 0x3b8, 0x3b9, 0x3, 0x2, 0x2, 
    0x2, 0x3b9, 0x3c7, 0x7, 0x4, 0x2, 0x2, 0x3ba, 0x3bc, 0x7, 0x41, 0x2, 
    0x2, 0x3bb, 0x3bd, 0x7, 0x64, 0x2, 0x2, 0x3bc, 0x3bb, 0x3, 0x2, 0x2, 
    0x2, 0x3bc, 0x3bd, 0x3, 0x2, 0x2, 0x2, 0x3bd, 0x3be, 0x3, 0x2, 0x2, 
    0x2, 0x3be, 0x3c7, 0x7, 0x4, 0x2, 0x2, 0x3bf, 0x3c7, 0x7, 0x4, 0x2, 
    0x2, 0x3c0, 0x3c1, 0x5, 0xc4, 0x63, 0x2, 0x3c1, 0x3c2, 0x7, 0x4, 0x2, 
    0x2, 0x3c2, 0x3c7, 0x3, 0x2, 0x2, 0x2, 0x3c3, 0x3c4, 0x7, 0x64, 0x2, 
    0x2, 0x3c4, 0x3c5, 0x7, 0x35, 0x2, 0x2, 0x3c5, 0x3c7, 0x5, 0xaa, 0x56, 
    0x2, 0x3c6, 0x379, 0x3, 0x2, 0x2, 0x2, 0x3c6, 0x37a, 0x3, 0x2, 0x2, 
    0x2, 0x3c6, 0x382, 0x3, 0x2, 0x2, 0x2, 0x3c6, 0x389, 0x3, 0x2, 0x2, 
    0x2, 0x3c6, 0x38f, 0x3, 0x2, 0x2, 0x2, 0x3c6, 0x393, 0x3, 0x2, 0x2, 
    0x2, 0x3c6, 0x399, 0x3, 0x2, 0x2, 0x2, 0x3c6, 0x3a4, 0x3, 0x2, 0x2, 
    0x2, 0x3c6, 0x3a8, 0x3, 0x2, 0x2, 0x2, 0x3c6, 0x3ac, 0x3, 0x2, 0x2, 
    0x2, 0x3c6, 0x3b1, 0x3, 0x2, 0x2, 0x2, 0x3c6, 0x3b5, 0x3, 0x2, 0x2, 
    0x2, 0x3c6, 0x3ba, 0x3, 0x2, 0x2, 0x2, 0x3c6, 0x3bf, 0x3, 0x2, 0x2, 
    0x2, 0x3c6, 0x3c0, 0x3, 0x2, 0x2, 0x2, 0x3c6, 0x3c3, 0x3, 0x2, 0x2, 
    0x2, 0x3c7, 0xab, 0x3, 0x2, 0x2, 0x2, 0x3c8, 0x3cc, 0x5, 0xae, 0x58, 
    0x2, 0x3c9, 0x3cb, 0x5, 0xae, 0x58, 0x2, 0x3ca, 0x3c9, 0x3, 0x2, 0x2, 
    0x2, 0x3cb, 0x3ce, 0x3, 0x2, 0x2, 0x2, 0x3cc, 0x3ca, 0x3, 0x2, 0x2, 
    0x2, 0x3cc, 0x3cd, 0x3, 0x2, 0x2, 0x2, 0x3cd, 0xad, 0x3, 0x2, 0x2, 0x2, 
    0x3ce, 0x3cc, 0x3, 0x2, 0x2, 0x2, 0x3cf, 0x3d0, 0x7, 0x42, 0x2, 0x2, 
    0x3d0, 0x3d1, 0x7, 0x2c, 0x2, 0x2, 0x3d1, 0x3d2, 0x5, 0xb0, 0x59, 0x2, 
    0x3d2, 0x3d3, 0x7, 0x2d, 0x2, 0x2, 0x3d3, 0x3d4, 0x5, 0xa0, 0x51, 0x2, 
    0x3d4, 0xaf, 0x3, 0x2, 0x2, 0x2, 0x3d5, 0x3d6, 0x5, 0xa8, 0x55, 0x2, 
    0x3d6, 0x3d7, 0x5, 0x60, 0x31, 0x2, 0x3d7, 0x3d8, 0x5, 0x52, 0x2a, 0x2, 
    0x3d8, 0xb1, 0x3, 0x2, 0x2, 0x2, 0x3d9, 0x3dd, 0x7, 0x16, 0x2, 0x2, 
    0x3da, 0x3dc, 0x5, 0xb4, 0x5b, 0x2, 0x3db, 0x3da, 0x3, 0x2, 0x2, 0x2, 
    0x3dc, 0x3df, 0x3, 0x2, 0x2, 0x2, 0x3dd, 0x3db, 0x3, 0x2, 0x2, 0x2, 
    0x3dd, 0x3de, 0x3, 0x2, 0x2, 0x2, 0x3de, 0x3e3, 0x3, 0x2, 0x2, 0x2, 
    0x3df, 0x3dd, 0x3, 0x2, 0x2, 0x2, 0x3e0, 0x3e2, 0x5, 0xb6, 0x5c, 0x2, 
    0x3e1, 0x3e0, 0x3, 0x2, 0x2, 0x2, 0x3e2, 0x3e5, 0x3, 0x2, 0x2, 0x2, 
    0x3e3, 0x3e1, 0x3, 0x2, 0x2, 0x2, 0x3e3, 0x3e4, 0x3, 0x2, 0x2, 0x2, 
    0x3e4, 0x3e6, 0x3, 0x2, 0x2, 0x2, 0x3e5, 0x3e3, 0x3, 0x2, 0x2, 0x2, 
    0x3e6, 0x3e7, 0x7, 0x17, 0x2, 0x2, 0x3e7, 0xb3, 0x3, 0x2, 0x2, 0x2, 
    0x3e8, 0x3ea, 0x5, 0xb6, 0x5c, 0x2, 0x3e9, 0x3e8, 0x3, 0x2, 0x2, 0x2, 
    0x3ea, 0x3eb, 0x3, 0x2, 0x2, 0x2, 0x3eb, 0x3e9, 0x3, 0x2, 0x2, 0x2, 
    0x3eb, 0x3ec, 0x3, 0x2, 0x2, 0x2, 0x3ec, 0x3f0, 0x3, 0x2, 0x2, 0x2, 
    0x3ed, 0x3ef, 0x5, 0xa2, 0x52, 0x2, 0x3ee, 0x3ed, 0x3, 0x2, 0x2, 0x2, 
    0x3ef, 0x3f2, 0x3, 0x2, 0x2, 0x2, 0x3f0, 0x3ee, 0x3, 0x2, 0x2, 0x2, 
    0x3f0, 0x3f1, 0x3, 0x2, 0x2, 0x2, 0x3f1, 0xb5, 0x3, 0x2, 0x2, 0x2, 0x3f2, 
    0x3f0, 0x3, 0x2, 0x2, 0x2, 0x3f3, 0x3f4, 0x7, 0x43, 0x2, 0x2, 0x3f4, 
    0x3f5, 0x5, 0xc6, 0x64, 0x2, 0x3f5, 0x3f6, 0x7, 0x35, 0x2, 0x2, 0x3f6, 
    0x3fe, 0x3, 0x2, 0x2, 0x2, 0x3f7, 0x3f8, 0x7, 0x43, 0x2, 0x2, 0x3f8, 
    0x3f9, 0x5, 0x5c, 0x2f, 0x2, 0x3f9, 0x3fa, 0x7, 0x35, 0x2, 0x2, 0x3fa, 
    0x3fe, 0x3, 0x2, 0x2, 0x2, 0x3fb, 0x3fc, 0x7, 0x34, 0x2, 0x2, 0x3fc, 
    0x3fe, 0x7, 0x35, 0x2, 0x2, 0x3fd, 0x3f3, 0x3, 0x2, 0x2, 0x2, 0x3fd, 
    0x3f7, 0x3, 0x2, 0x2, 0x2, 0x3fd, 0x3fb, 0x3, 0x2, 0x2, 0x2, 0x3fe, 
    0xb7, 0x3, 0x2, 0x2, 0x2, 0x3ff, 0x40c, 0x5, 0xbc, 0x5f, 0x2, 0x400, 
    0x402, 0x5, 0xba, 0x5e, 0x2, 0x401, 0x400, 0x3, 0x2, 0x2, 0x2, 0x401, 
    0x402, 0x3, 0x2, 0x2, 0x2, 0x402, 0x403, 0x3, 0x2, 0x2, 0x2, 0x403, 
    0x405, 0x7, 0x4, 0x2, 0x2, 0x404, 0x406, 0x5, 0xc8, 0x65, 0x2, 0x405, 
    0x404, 0x3, 0x2, 0x2, 0x2, 0x405, 0x406, 0x3, 0x2, 0x2, 0x2, 0x406, 
    0x407, 0x3, 0x2, 0x2, 0x2, 0x407, 0x409, 0x7, 0x4, 0x2, 0x2, 0x408, 
    0x40a, 0x5, 0xbe, 0x60, 0x2, 0x409, 0x408, 0x3, 0x2, 0x2, 0x2, 0x409, 
    0x40a, 0x3, 0x2, 0x2, 0x2, 0x40a, 0x40c, 0x3, 0x2, 0x2, 0x2, 0x40b, 
    0x3ff, 0x3, 0x2, 0x2, 0x2, 0x40b, 0x401, 0x3, 0x2, 0x2, 0x2, 0x40c, 
    0xb9, 0x3, 0x2, 0x2, 0x2, 0x40d, 0x410, 0x5, 0xa6, 0x54, 0x2, 0x40e, 
    0x410, 0x5, 0xc2, 0x62, 0x2, 0x40f, 0x40d, 0x3, 0x2, 0x2, 0x2, 0x40f, 
    0x40e, 0x3, 0x2, 0x2, 0x2, 0x410, 0xbb, 0x3, 0x2, 0x2, 0x2, 0x411, 0x412, 
    0x5, 0xa8, 0x55, 0x2, 0x412, 0x413, 0x5, 0x60, 0x31, 0x2, 0x413, 0x414, 
    0x7, 0x64, 0x2, 0x2, 0x414, 0x415, 0x7, 0x35, 0x2, 0x2, 0x415, 0x416, 
    0x5, 0xc8, 0x65, 0x2, 0x416, 0xbd, 0x3, 0x2, 0x2, 0x2, 0x417, 0x418, 
    0x5, 0xc2, 0x62, 0x2, 0x418, 0xbf, 0x3, 0x2, 0x2, 0x2, 0x419, 0x41a, 
    0x7, 0x2c, 0x2, 0x2, 0x41a, 0x41b, 0x5, 0xc8, 0x65, 0x2, 0x41b, 0x41c, 
    0x7, 0x2d, 0x2, 0x2, 0x41c, 0xc1, 0x3, 0x2, 0x2, 0x2, 0x41d, 0x422, 
    0x5, 0xc8, 0x65, 0x2, 0x41e, 0x41f, 0x7, 0x13, 0x2, 0x2, 0x41f, 0x421, 
    0x5, 0xc8, 0x65, 0x2, 0x420, 0x41e, 0x3, 0x2, 0x2, 0x2, 0x421, 0x424, 
    0x3, 0x2, 0x2, 0x2, 0x422, 0x420, 0x3, 0x2, 0x2, 0x2, 0x422, 0x423, 
    0x3, 0x2, 0x2, 0x2, 0x423, 0xc3, 0x3, 0x2, 0x2, 0x2, 0x424, 0x422, 0x3, 
    0x2, 0x2, 0x2, 0x425, 0x426, 0x5, 0xc8, 0x65, 0x2, 0x426, 0xc5, 0x3, 
    0x2, 0x2, 0x2, 0x427, 0x428, 0x5, 0xc8, 0x65, 0x2, 0x428, 0xc7, 0x3, 
    0x2, 0x2, 0x2, 0x429, 0x42a, 0x8, 0x65, 0x1, 0x2, 0x42a, 0x437, 0x5, 
    0xca, 0x66, 0x2, 0x42b, 0x42c, 0x9, 0x7, 0x2, 0x2, 0x42c, 0x437, 0x5, 
    0xc8, 0x65, 0x13, 0x42d, 0x42e, 0x9, 0x8, 0x2, 0x2, 0x42e, 0x437, 0x5, 
    0xc8, 0x65, 0x12, 0x42f, 0x430, 0x7, 0x2c, 0x2, 0x2, 0x430, 0x431, 0x5, 
    0x60, 0x31, 0x2, 0x431, 0x432, 0x7, 0x2d, 0x2, 0x2, 0x432, 0x433, 0x5, 
    0xc8, 0x65, 0x11, 0x433, 0x437, 0x3, 0x2, 0x2, 0x2, 0x434, 0x435, 0x7, 
    0x44, 0x2, 0x2, 0x435, 0x437, 0x5, 0xcc, 0x67, 0x2, 0x436, 0x429, 0x3, 
    0x2, 0x2, 0x2, 0x436, 0x42b, 0x3, 0x2, 0x2, 0x2, 0x436, 0x42d, 0x3, 
    0x2, 0x2, 0x2, 0x436, 0x42f, 0x3, 0x2, 0x2, 0x2, 0x436, 0x434, 0x3, 
    0x2, 0x2, 0x2, 0x437, 0x4b6, 0x3, 0x2, 0x2, 0x2, 0x438, 0x439, 0xc, 
    0xf, 0x2, 0x2, 0x439, 0x43a, 0x9, 0x9, 0x2, 0x2, 0x43a, 0x4b5, 0x5, 
    0xc8, 0x65, 0x10, 0x43b, 0x43c, 0xc, 0xe, 0x2, 0x2, 0x43c, 0x43d, 0x9, 
    0xa, 0x2, 0x2, 0x43d, 0x4b5, 0x5, 0xc8, 0x65, 0xf, 0x43e, 0x446, 0xc, 
    0xd, 0x2, 0x2, 0x43f, 0x440, 0x7, 0x12, 0x2, 0x2, 0x440, 0x447, 0x7, 
    0x12, 0x2, 0x2, 0x441, 0x442, 0x7, 0x14, 0x2, 0x2, 0x442, 0x443, 0x7, 
    0x14, 0x2, 0x2, 0x443, 0x447, 0x7, 0x14, 0x2, 0x2, 0x444, 0x445, 0x7, 
    0x14, 0x2, 0x2, 0x445, 0x447, 0x7, 0x14, 0x2, 0x2, 0x446, 0x43f, 0x3, 
    0x2, 0x2, 0x2, 0x446, 0x441, 0x3, 0x2, 0x2, 0x2, 0x446, 0x444, 0x3, 
    0x2, 0x2, 0x2, 0x447, 0x448, 0x3, 0x2, 0x2, 0x2, 0x448, 0x4b5, 0x5, 
    0xc8, 0x65, 0xe, 0x449, 0x450, 0xc, 0xc, 0x2, 0x2, 0x44a, 0x44b, 0x7, 
    0x12, 0x2, 0x2, 0x44b, 0x451, 0x7, 0x1d, 0x2, 0x2, 0x44c, 0x44d, 0x7, 
    0x14, 0x2, 0x2, 0x44d, 0x451, 0x7, 0x1d, 0x2, 0x2, 0x44e, 0x451, 0x7, 
    0x14, 0x2, 0x2, 0x44f, 0x451, 0x7, 0x12, 0x2, 0x2, 0x450, 0x44a, 0x3, 
    0x2, 0x2, 0x2, 0x450, 0x44c, 0x3, 0x2, 0x2, 0x2, 0x450, 0x44e, 0x3, 
    0x2, 0x2, 0x2, 0x450, 0x44f, 0x3, 0x2, 0x2, 0x2, 0x451, 0x452, 0x3, 
    0x2, 0x2, 0x2, 0x452, 0x4b5, 0x5, 0xc8, 0x65, 0xd, 0x453, 0x454, 0xc, 
    0xa, 0x2, 0x2, 0x454, 0x455, 0x9, 0xb, 0x2, 0x2, 0x455, 0x4b5, 0x5, 
    0xc8, 0x65, 0xb, 0x456, 0x457, 0xc, 0x9, 0x2, 0x2, 0x457, 0x458, 0x7, 
    0x15, 0x2, 0x2, 0x458, 0x4b5, 0x5, 0xc8, 0x65, 0xa, 0x459, 0x45a, 0xc, 
    0x8, 0x2, 0x2, 0x45a, 0x45b, 0x7, 0x50, 0x2, 0x2, 0x45b, 0x4b5, 0x5, 
    0xc8, 0x65, 0x9, 0x45c, 0x45d, 0xc, 0x7, 0x2, 0x2, 0x45d, 0x45e, 0x7, 
    0x51, 0x2, 0x2, 0x45e, 0x4b5, 0x5, 0xc8, 0x65, 0x8, 0x45f, 0x460, 0xc, 
    0x6, 0x2, 0x2, 0x460, 0x461, 0x7, 0x52, 0x2, 0x2, 0x461, 0x4b5, 0x5, 
    0xc8, 0x65, 0x7, 0x462, 0x463, 0xc, 0x5, 0x2, 0x2, 0x463, 0x464, 0x7, 
    0x53, 0x2, 0x2, 0x464, 0x4b5, 0x5, 0xc8, 0x65, 0x6, 0x465, 0x466, 0xc, 
    0x4, 0x2, 0x2, 0x466, 0x467, 0x7, 0x2a, 0x2, 0x2, 0x467, 0x468, 0x5, 
    0xc8, 0x65, 0x2, 0x468, 0x469, 0x7, 0x35, 0x2, 0x2, 0x469, 0x46a, 0x5, 
    0xc8, 0x65, 0x5, 0x46a, 0x4b5, 0x3, 0x2, 0x2, 0x2, 0x46b, 0x47f, 0xc, 
    0x3, 0x2, 0x2, 0x46c, 0x480, 0x7, 0x54, 0x2, 0x2, 0x46d, 0x480, 0x7, 
    0x55, 0x2, 0x2, 0x46e, 0x480, 0x7, 0x56, 0x2, 0x2, 0x46f, 0x480, 0x7, 
    0x57, 0x2, 0x2, 0x470, 0x480, 0x7, 0x58, 0x2, 0x2, 0x471, 0x480, 0x7, 
    0x59, 0x2, 0x2, 0x472, 0x480, 0x7, 0x5a, 0x2, 0x2, 0x473, 0x480, 0x7, 
    0x1d, 0x2, 0x2, 0x474, 0x475, 0x7, 0x14, 0x2, 0x2, 0x475, 0x476, 0x7, 
    0x14, 0x2, 0x2, 0x476, 0x480, 0x7, 0x1d, 0x2, 0x2, 0x477, 0x478, 0x7, 
    0x14, 0x2, 0x2, 0x478, 0x479, 0x7, 0x14, 0x2, 0x2, 0x479, 0x47a, 0x7, 
    0x14, 0x2, 0x2, 0x47a, 0x480, 0x7, 0x1d, 0x2, 0x2, 0x47b, 0x47c, 0x7, 
    0x12, 0x2, 0x2, 0x47c, 0x47d, 0x7, 0x12, 0x2, 0x2, 0x47d, 0x480, 0x7, 
    0x1d, 0x2, 0x2, 0x47e, 0x480, 0x7, 0x5b, 0x2, 0x2, 0x47f, 0x46c, 0x3, 
    0x2, 0x2, 0x2, 0x47f, 0x46d, 0x3, 0x2, 0x2, 0x2, 0x47f, 0x46e, 0x3, 
    0x2, 0x2, 0x2, 0x47f, 0x46f, 0x3, 0x2, 0x2, 0x2, 0x47f, 0x470, 0x3, 
    0x2, 0x2, 0x2, 0x47f, 0x471, 0x3, 0x2, 0x2, 0x2, 0x47f, 0x472, 0x3, 
    0x2, 0x2, 0x2, 0x47f, 0x473, 0x3, 0x2, 0x2, 0x2, 0x47f, 0x474, 0x3, 
    0x2, 0x2, 0x2, 0x47f, 0x477, 0x3, 0x2, 0x2, 0x2, 0x47f, 0x47b, 0x3, 
    0x2, 0x2, 0x2, 0x47f, 0x47e, 0x3, 0x2, 0x2, 0x2, 0x480, 0x481, 0x3, 
    0x2, 0x2, 0x2, 0x481, 0x4b5, 0x5, 0xc8, 0x65, 0x4, 0x482, 0x483, 0xc, 
    0x1c, 0x2, 0x2, 0x483, 0x484, 0x7, 0x7, 0x2, 0x2, 0x484, 0x4b5, 0x7, 
    0x64, 0x2, 0x2, 0x485, 0x486, 0xc, 0x1b, 0x2, 0x2, 0x486, 0x487, 0x7, 
    0x7, 0x2, 0x2, 0x487, 0x4b5, 0x7, 0x2f, 0x2, 0x2, 0x488, 0x489, 0xc, 
    0x1a, 0x2, 0x2, 0x489, 0x48a, 0x7, 0x7, 0x2, 0x2, 0x48a, 0x48b, 0x7, 
    0x2b, 0x2, 0x2, 0x48b, 0x48d, 0x7, 0x2c, 0x2, 0x2, 0x48c, 0x48e, 0x5, 
    0xc2, 0x62, 0x2, 0x48d, 0x48c, 0x3, 0x2, 0x2, 0x2, 0x48d, 0x48e, 0x3, 
    0x2, 0x2, 0x2, 0x48e, 0x48f, 0x3, 0x2, 0x2, 0x2, 0x48f, 0x4b5, 0x7, 
    0x2d, 0x2, 0x2, 0x490, 0x491, 0xc, 0x19, 0x2, 0x2, 0x491, 0x492, 0x7, 
    0x7, 0x2, 0x2, 0x492, 0x493, 0x7, 0x44, 0x2, 0x2, 0x493, 0x494, 0x7, 
    0x64, 0x2, 0x2, 0x494, 0x496, 0x7, 0x2c, 0x2, 0x2, 0x495, 0x497, 0x5, 
    0xc2, 0x62, 0x2, 0x496, 0x495, 0x3, 0x2, 0x2, 0x2, 0x496, 0x497, 0x3, 
    0x2, 0x2, 0x2, 0x497, 0x498, 0x3, 0x2, 0x2, 0x2, 0x498, 0x4b5, 0x7, 
    0x2d, 0x2, 0x2, 0x499, 0x49a, 0xc, 0x18, 0x2, 0x2, 0x49a, 0x49b, 0x7, 
    0x7, 0x2, 0x2, 0x49b, 0x49c, 0x7, 0x2b, 0x2, 0x2, 0x49c, 0x49d, 0x7, 
    0x7, 0x2, 0x2, 0x49d, 0x49f, 0x7, 0x64, 0x2, 0x2, 0x49e, 0x4a0, 0x5, 
    0xda, 0x6e, 0x2, 0x49f, 0x49e, 0x3, 0x2, 0x2, 0x2, 0x49f, 0x4a0, 0x3, 
    0x2, 0x2, 0x2, 0x4a0, 0x4b5, 0x3, 0x2, 0x2, 0x2, 0x4a1, 0x4a2, 0xc, 
    0x17, 0x2, 0x2, 0x4a2, 0x4a3, 0x7, 0x7, 0x2, 0x2, 0x4a3, 0x4b5, 0x5, 
    0xd2, 0x6a, 0x2, 0x4a4, 0x4a5, 0xc, 0x16, 0x2, 0x2, 0x4a5, 0x4a6, 0x7, 
    0x19, 0x2, 0x2, 0x4a6, 0x4a7, 0x5, 0xc8, 0x65, 0x2, 0x4a7, 0x4a8, 0x7, 
    0x1a, 0x2, 0x2, 0x4a8, 0x4b5, 0x3, 0x2, 0x2, 0x2, 0x4a9, 0x4aa, 0xc, 
    0x15, 0x2, 0x2, 0x4aa, 0x4ac, 0x7, 0x2c, 0x2, 0x2, 0x4ab, 0x4ad, 0x5, 
    0xc2, 0x62, 0x2, 0x4ac, 0x4ab, 0x3, 0x2, 0x2, 0x2, 0x4ac, 0x4ad, 0x3, 
    0x2, 0x2, 0x2, 0x4ad, 0x4ae, 0x3, 0x2, 0x2, 0x2, 0x4ae, 0x4b5, 0x7, 
    0x2d, 0x2, 0x2, 0x4af, 0x4b0, 0xc, 0x14, 0x2, 0x2, 0x4b0, 0x4b5, 0x9, 
    0xc, 0x2, 0x2, 0x4b1, 0x4b2, 0xc, 0xb, 0x2, 0x2, 0x4b2, 0x4b3, 0x7, 
    0x4d, 0x2, 0x2, 0x4b3, 0x4b5, 0x5, 0x60, 0x31, 0x2, 0x4b4, 0x438, 0x3, 
    0x2, 0x2, 0x2, 0x4b4, 0x43b, 0x3, 0x2, 0x2, 0x2, 0x4b4, 0x43e, 0x3, 
    0x2, 0x2, 0x2, 0x4b4, 0x449, 0x3, 0x2, 0x2, 0x2, 0x4b4, 0x453, 0x3, 
    0x2, 0x2, 0x2, 0x4b4, 0x456, 0x3, 0x2, 0x2, 0x2, 0x4b4, 0x459, 0x3, 
    0x2, 0x2, 0x2, 0x4b4, 0x45c, 0x3, 0x2, 0x2, 0x2, 0x4b4, 0x45f, 0x3, 
    0x2, 0x2, 0x2, 0x4b4, 0x462, 0x3, 0x2, 0x2, 0x2, 0x4b4, 0x465, 0x3, 
    0x2, 0x2, 0x2, 0x4b4, 0x46b, 0x3, 0x2, 0x2, 0x2, 0x4b4, 0x482, 0x3, 
    0x2, 0x2, 0x2, 0x4b4, 0x485, 0x3, 0x2, 0x2, 0x2, 0x4b4, 0x488, 0x3, 
    0x2, 0x2, 0x2, 0x4b4, 0x490, 0x3, 0x2, 0x2, 0x2, 0x4b4, 0x499, 0x3, 
    0x2, 0x2, 0x2, 0x4b4, 0x4a1, 0x3, 0x2, 0x2, 0x2, 0x4b4, 0x4a4, 0x3, 
    0x2, 0x2, 0x2, 0x4b4, 0x4a9, 0x3, 0x2, 0x2, 0x2, 0x4b4, 0x4af, 0x3, 
    0x2, 0x2, 0x2, 0x4b4, 0x4b1, 0x3, 0x2, 0x2, 0x2, 0x4b5, 0x4b8, 0x3, 
    0x2, 0x2, 0x2, 0x4b6, 0x4b4, 0x3, 0x2, 0x2, 0x2, 0x4b6, 0x4b7, 0x3, 
    0x2, 0x2, 0x2, 0x4b7, 0xc9, 0x3, 0x2, 0x2, 0x2, 0x4b8, 0x4b6, 0x3, 0x2, 
    0x2, 0x2, 0x4b9, 0x4ba, 0x7, 0x2c, 0x2, 0x2, 0x4ba, 0x4bb, 0x5, 0xc8, 
    0x65, 0x2, 0x4bb, 0x4bc, 0x7, 0x2d, 0x2, 0x2, 0x4bc, 0x4c9, 0x3, 0x2, 
    0x2, 0x2, 0x4bd, 0x4c9, 0x7, 0x2f, 0x2, 0x2, 0x4be, 0x4c9, 0x7, 0x2b, 
    0x2, 0x2, 0x4bf, 0x4c9, 0x5, 0x7c, 0x3f, 0x2, 0x4c0, 0x4c9, 0x7, 0x64, 
    0x2, 0x2, 0x4c1, 0x4c2, 0x5, 0x60, 0x31, 0x2, 0x4c2, 0x4c3, 0x7, 0x7, 
    0x2, 0x2, 0x4c3, 0x4c4, 0x7, 0x9, 0x2, 0x2, 0x4c4, 0x4c9, 0x3, 0x2, 
    0x2, 0x2, 0x4c5, 0x4c6, 0x7, 0x1b, 0x2, 0x2, 0x4c6, 0x4c7, 0x7, 0x7, 
    0x2, 0x2, 0x4c7, 0x4c9, 0x7, 0x9, 0x2, 0x2, 0x4c8, 0x4b9, 0x3, 0x2, 
    0x2, 0x2, 0x4c8, 0x4bd, 0x3, 0x2, 0x2, 0x2, 0x4c8, 0x4be, 0x3, 0x2, 
    0x2, 0x2, 0x4c8, 0x4bf, 0x3, 0x2, 0x2, 0x2, 0x4c8, 0x4c0, 0x3, 0x2, 
    0x2, 0x2, 0x4c8, 0x4c1, 0x3, 0x2, 0x2, 0x2, 0x4c8, 0x4c5, 0x3, 0x2, 
    0x2, 0x2, 0x4c9, 0xcb, 0x3, 0x2, 0x2, 0x2, 0x4ca, 0x4cb, 0x5, 0xd8, 
    0x6d, 0x2, 0x4cb, 0x4cc, 0x5, 0xce, 0x68, 0x2, 0x4cc, 0x4cd, 0x5, 0xd6, 
    0x6c, 0x2, 0x4cd, 0x4d4, 0x3, 0x2, 0x2, 0x2, 0x4ce, 0x4d1, 0x5, 0xce, 
    0x68, 0x2, 0x4cf, 0x4d2, 0x5, 0xd4, 0x6b, 0x2, 0x4d0, 0x4d2, 0x5, 0xd6, 
    0x6c, 0x2, 0x4d1, 0x4cf, 0x3, 0x2, 0x2, 0x2, 0x4d1, 0x4d0, 0x3, 0x2, 
    0x2, 0x2, 0x4d2, 0x4d4, 0x3, 0x2, 0x2, 0x2, 0x4d3, 0x4ca, 0x3, 0x2, 
    0x2, 0x2, 0x4d3, 0x4ce, 0x3, 0x2, 0x2, 0x2, 0x4d4, 0xcd, 0x3, 0x2, 0x2, 
    0x2, 0x4d5, 0x4d8, 0x5, 0x62, 0x32, 0x2, 0x4d6, 0x4d8, 0x5, 0x64, 0x33, 
    0x2, 0x4d7, 0x4d5, 0x3, 0x2, 0x2, 0x2, 0x4d7, 0x4d6, 0x3, 0x2, 0x2, 
    0x2, 0x4d8, 0xcf, 0x3, 0x2, 0x2, 0x2, 0x4d9, 0x4db, 0x5, 0xd8, 0x6d, 
    0x2, 0x4da, 0x4d9, 0x3, 0x2, 0x2, 0x2, 0x4da, 0x4db, 0x3, 0x2, 0x2, 
    0x2, 0x4db, 0x4dc, 0x3, 0x2, 0x2, 0x2, 0x4dc, 0x4dd, 0x7, 0x64, 0x2, 
    0x2, 0x4dd, 0x4de, 0x5, 0xd6, 0x6c, 0x2, 0x4de, 0xd1, 0x3, 0x2, 0x2, 
    0x2, 0x4df, 0x4e0, 0x5, 0xd8, 0x6d, 0x2, 0x4e0, 0x4e1, 0x7, 0x64, 0x2, 
    0x2, 0x4e1, 0x4e2, 0x5, 0xda, 0x6e, 0x2, 0x4e2, 0xd3, 0x3, 0x2, 0x2, 
    0x2, 0x4e3, 0x4ff, 0x7, 0x19, 0x2, 0x2, 0x4e4, 0x4e9, 0x7, 0x1a, 0x2, 
    0x2, 0x4e5, 0x4e6, 0x7, 0x19, 0x2, 0x2, 0x4e6, 0x4e8, 0x7, 0x1a, 0x2, 
    0x2, 0x4e7, 0x4e5, 0x3, 0x2, 0x2, 0x2, 0x4e8, 0x4eb, 0x3, 0x2, 0x2, 
    0x2, 0x4e9, 0x4e7, 0x3, 0x2, 0x2, 0x2, 0x4e9, 0x4ea, 0x3, 0x2, 0x2, 
    0x2, 0x4ea, 0x4ec, 0x3, 0x2, 0x2, 0x2, 0x4eb, 0x4e9, 0x3, 0x2, 0x2, 
    0x2, 0x4ec, 0x500, 0x5, 0x56, 0x2c, 0x2, 0x4ed, 0x4ee, 0x5, 0xc8, 0x65, 
    0x2, 0x4ee, 0x4f5, 0x7, 0x1a, 0x2, 0x2, 0x4ef, 0x4f0, 0x7, 0x19, 0x2, 
    0x2, 0x4f0, 0x4f1, 0x5, 0xc8, 0x65, 0x2, 0x4f1, 0x4f2, 0x7, 0x1a, 0x2, 
    0x2, 0x4f2, 0x4f4, 0x3, 0x2, 0x2, 0x2, 0x4f3, 0x4ef, 0x3, 0x2, 0x2, 
    0x2, 0x4f4, 0x4f7, 0x3, 0x2, 0x2, 0x2, 0x4f5, 0x4f3, 0x3, 0x2, 0x2, 
    0x2, 0x4f5, 0x4f6, 0x3, 0x2, 0x2, 0x2, 0x4f6, 0x4fc, 0x3, 0x2, 0x2, 
    0x2, 0x4f7, 0x4f5, 0x3, 0x2, 0x2, 0x2, 0x4f8, 0x4f9, 0x7, 0x19, 0x2, 
    0x2, 0x4f9, 0x4fb, 0x7, 0x1a, 0x2, 0x2, 0x4fa, 0x4f8, 0x3, 0x2, 0x2, 
    0x2, 0x4fb, 0x4fe, 0x3, 0x2, 0x2, 0x2, 0x4fc, 0x4fa, 0x3, 0x2, 0x2, 
    0x2, 0x4fc, 0x4fd, 0x3, 0x2, 0x2, 0x2, 0x4fd, 0x500, 0x3, 0x2, 0x2, 
    0x2, 0x4fe, 0x4fc, 0x3, 0x2, 0x2, 0x2, 0x4ff, 0x4e4, 0x3, 0x2, 0x2, 
    0x2, 0x4ff, 0x4ed, 0x3, 0x2, 0x2, 0x2, 0x500, 0xd5, 0x3, 0x2, 0x2, 0x2, 
    0x501, 0x503, 0x5, 0xda, 0x6e, 0x2, 0x502, 0x504, 0x5, 0x26, 0x14, 0x2, 
    0x503, 0x502, 0x3, 0x2, 0x2, 0x2, 0x503, 0x504, 0x3, 0x2, 0x2, 0x2, 
    0x504, 0xd7, 0x3, 0x2, 0x2, 0x2, 0x505, 0x506, 0x7, 0x12, 0x2, 0x2, 
    0x506, 0x507, 0x5, 0x24, 0x13, 0x2, 0x507, 0x508, 0x7, 0x14, 0x2, 0x2, 
    0x508, 0xd9, 0x3, 0x2, 0x2, 0x2, 0x509, 0x50b, 0x7, 0x2c, 0x2, 0x2, 
    0x50a, 0x50c, 0x5, 0xc2, 0x62, 0x2, 0x50b, 0x50a, 0x3, 0x2, 0x2, 0x2, 
    0x50b, 0x50c, 0x3, 0x2, 0x2, 0x2, 0x50c, 0x50d, 0x3, 0x2, 0x2, 0x2, 
    0x50d, 0x50e, 0x7, 0x2d, 0x2, 0x2, 0x50e, 0xdb, 0x3, 0x2, 0x2, 0x2, 
    0x8e, 0xdd, 0xe2, 0xe8, 0xf3, 0xf8, 0xff, 0x105, 0x108, 0x10d, 0x111, 
    0x115, 0x11d, 0x123, 0x12d, 0x132, 0x13b, 0x143, 0x14a, 0x14f, 0x152, 
    0x155, 0x15e, 0x162, 0x166, 0x169, 0x16f, 0x175, 0x179, 0x182, 0x189, 
    0x192, 0x199, 0x19f, 0x1a7, 0x1b0, 0x1ba, 0x1be, 0x1c2, 0x1cc, 0x1d2, 
    0x1da, 0x1e3, 0x1ed, 0x1f2, 0x1f6, 0x1fd, 0x202, 0x209, 0x211, 0x21d, 
    0x223, 0x22a, 0x231, 0x23c, 0x241, 0x249, 0x24d, 0x24f, 0x25f, 0x26c, 
    0x274, 0x277, 0x27b, 0x280, 0x284, 0x28b, 0x293, 0x29c, 0x29e, 0x2a5, 
    0x2aa, 0x2b5, 0x2b9, 0x2bf, 0x2c4, 0x2ca, 0x2d3, 0x2d9, 0x2e0, 0x2e9, 
    0x2f2, 0x2f9, 0x2fc, 0x303, 0x30b, 0x315, 0x31d, 0x320, 0x323, 0x330, 
    0x33e, 0x342, 0x346, 0x34a, 0x34c, 0x350, 0x356, 0x361, 0x36a, 0x376, 
    0x37e, 0x387, 0x3a2, 0x3ae, 0x3b7, 0x3bc, 0x3c6, 0x3cc, 0x3dd, 0x3e3, 
    0x3eb, 0x3f0, 0x3fd, 0x401, 0x405, 0x409, 0x40b, 0x40f, 0x422, 0x436, 
    0x446, 0x450, 0x47f, 0x48d, 0x496, 0x49f, 0x4ac, 0x4b4, 0x4b6, 0x4c8, 
    0x4d1, 0x4d3, 0x4d7, 0x4da, 0x4e9, 0x4f5, 0x4fc, 0x4ff, 0x503, 0x50b, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

JavaParser::Initializer JavaParser::_init;
