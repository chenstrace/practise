
// Generated from Java.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"
#include "JavaParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by JavaParser.
 */
class  JavaListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterCompilationUnit(JavaParser::CompilationUnitContext *ctx) = 0;
  virtual void exitCompilationUnit(JavaParser::CompilationUnitContext *ctx) = 0;

  virtual void enterPackageDeclaration(JavaParser::PackageDeclarationContext *ctx) = 0;
  virtual void exitPackageDeclaration(JavaParser::PackageDeclarationContext *ctx) = 0;

  virtual void enterImportDeclaration(JavaParser::ImportDeclarationContext *ctx) = 0;
  virtual void exitImportDeclaration(JavaParser::ImportDeclarationContext *ctx) = 0;

  virtual void enterTypeDeclaration(JavaParser::TypeDeclarationContext *ctx) = 0;
  virtual void exitTypeDeclaration(JavaParser::TypeDeclarationContext *ctx) = 0;

  virtual void enterClassDeclaration(JavaParser::ClassDeclarationContext *ctx) = 0;
  virtual void exitClassDeclaration(JavaParser::ClassDeclarationContext *ctx) = 0;

  virtual void enterEnumDeclaration(JavaParser::EnumDeclarationContext *ctx) = 0;
  virtual void exitEnumDeclaration(JavaParser::EnumDeclarationContext *ctx) = 0;

  virtual void enterInterfaceDeclaration(JavaParser::InterfaceDeclarationContext *ctx) = 0;
  virtual void exitInterfaceDeclaration(JavaParser::InterfaceDeclarationContext *ctx) = 0;

  virtual void enterClassOrInterfaceModifier(JavaParser::ClassOrInterfaceModifierContext *ctx) = 0;
  virtual void exitClassOrInterfaceModifier(JavaParser::ClassOrInterfaceModifierContext *ctx) = 0;

  virtual void enterModifiers(JavaParser::ModifiersContext *ctx) = 0;
  virtual void exitModifiers(JavaParser::ModifiersContext *ctx) = 0;

  virtual void enterTypeParameters(JavaParser::TypeParametersContext *ctx) = 0;
  virtual void exitTypeParameters(JavaParser::TypeParametersContext *ctx) = 0;

  virtual void enterTypeParameter(JavaParser::TypeParameterContext *ctx) = 0;
  virtual void exitTypeParameter(JavaParser::TypeParameterContext *ctx) = 0;

  virtual void enterTypeBound(JavaParser::TypeBoundContext *ctx) = 0;
  virtual void exitTypeBound(JavaParser::TypeBoundContext *ctx) = 0;

  virtual void enterEnumBody(JavaParser::EnumBodyContext *ctx) = 0;
  virtual void exitEnumBody(JavaParser::EnumBodyContext *ctx) = 0;

  virtual void enterEnumConstants(JavaParser::EnumConstantsContext *ctx) = 0;
  virtual void exitEnumConstants(JavaParser::EnumConstantsContext *ctx) = 0;

  virtual void enterEnumConstant(JavaParser::EnumConstantContext *ctx) = 0;
  virtual void exitEnumConstant(JavaParser::EnumConstantContext *ctx) = 0;

  virtual void enterEnumBodyDeclarations(JavaParser::EnumBodyDeclarationsContext *ctx) = 0;
  virtual void exitEnumBodyDeclarations(JavaParser::EnumBodyDeclarationsContext *ctx) = 0;

  virtual void enterNormalInterfaceDeclaration(JavaParser::NormalInterfaceDeclarationContext *ctx) = 0;
  virtual void exitNormalInterfaceDeclaration(JavaParser::NormalInterfaceDeclarationContext *ctx) = 0;

  virtual void enterTypeList(JavaParser::TypeListContext *ctx) = 0;
  virtual void exitTypeList(JavaParser::TypeListContext *ctx) = 0;

  virtual void enterClassBody(JavaParser::ClassBodyContext *ctx) = 0;
  virtual void exitClassBody(JavaParser::ClassBodyContext *ctx) = 0;

  virtual void enterInterfaceBody(JavaParser::InterfaceBodyContext *ctx) = 0;
  virtual void exitInterfaceBody(JavaParser::InterfaceBodyContext *ctx) = 0;

  virtual void enterClassBodyDeclaration(JavaParser::ClassBodyDeclarationContext *ctx) = 0;
  virtual void exitClassBodyDeclaration(JavaParser::ClassBodyDeclarationContext *ctx) = 0;

  virtual void enterMember(JavaParser::MemberContext *ctx) = 0;
  virtual void exitMember(JavaParser::MemberContext *ctx) = 0;

  virtual void enterMethodDeclaration(JavaParser::MethodDeclarationContext *ctx) = 0;
  virtual void exitMethodDeclaration(JavaParser::MethodDeclarationContext *ctx) = 0;

  virtual void enterMethodDeclarationRest(JavaParser::MethodDeclarationRestContext *ctx) = 0;
  virtual void exitMethodDeclarationRest(JavaParser::MethodDeclarationRestContext *ctx) = 0;

  virtual void enterGenericMethodDeclaration(JavaParser::GenericMethodDeclarationContext *ctx) = 0;
  virtual void exitGenericMethodDeclaration(JavaParser::GenericMethodDeclarationContext *ctx) = 0;

  virtual void enterFieldDeclaration(JavaParser::FieldDeclarationContext *ctx) = 0;
  virtual void exitFieldDeclaration(JavaParser::FieldDeclarationContext *ctx) = 0;

  virtual void enterConstructorDeclaration(JavaParser::ConstructorDeclarationContext *ctx) = 0;
  virtual void exitConstructorDeclaration(JavaParser::ConstructorDeclarationContext *ctx) = 0;

  virtual void enterInterfaceBodyDeclaration(JavaParser::InterfaceBodyDeclarationContext *ctx) = 0;
  virtual void exitInterfaceBodyDeclaration(JavaParser::InterfaceBodyDeclarationContext *ctx) = 0;

  virtual void enterInterfaceMemberDecl(JavaParser::InterfaceMemberDeclContext *ctx) = 0;
  virtual void exitInterfaceMemberDecl(JavaParser::InterfaceMemberDeclContext *ctx) = 0;

  virtual void enterInterfaceMethodOrFieldDecl(JavaParser::InterfaceMethodOrFieldDeclContext *ctx) = 0;
  virtual void exitInterfaceMethodOrFieldDecl(JavaParser::InterfaceMethodOrFieldDeclContext *ctx) = 0;

  virtual void enterInterfaceMethodOrFieldRest(JavaParser::InterfaceMethodOrFieldRestContext *ctx) = 0;
  virtual void exitInterfaceMethodOrFieldRest(JavaParser::InterfaceMethodOrFieldRestContext *ctx) = 0;

  virtual void enterVoidMethodDeclaratorRest(JavaParser::VoidMethodDeclaratorRestContext *ctx) = 0;
  virtual void exitVoidMethodDeclaratorRest(JavaParser::VoidMethodDeclaratorRestContext *ctx) = 0;

  virtual void enterInterfaceMethodDeclaratorRest(JavaParser::InterfaceMethodDeclaratorRestContext *ctx) = 0;
  virtual void exitInterfaceMethodDeclaratorRest(JavaParser::InterfaceMethodDeclaratorRestContext *ctx) = 0;

  virtual void enterInterfaceGenericMethodDecl(JavaParser::InterfaceGenericMethodDeclContext *ctx) = 0;
  virtual void exitInterfaceGenericMethodDecl(JavaParser::InterfaceGenericMethodDeclContext *ctx) = 0;

  virtual void enterVoidInterfaceMethodDeclaratorRest(JavaParser::VoidInterfaceMethodDeclaratorRestContext *ctx) = 0;
  virtual void exitVoidInterfaceMethodDeclaratorRest(JavaParser::VoidInterfaceMethodDeclaratorRestContext *ctx) = 0;

  virtual void enterConstantDeclarator(JavaParser::ConstantDeclaratorContext *ctx) = 0;
  virtual void exitConstantDeclarator(JavaParser::ConstantDeclaratorContext *ctx) = 0;

  virtual void enterVariableDeclarators(JavaParser::VariableDeclaratorsContext *ctx) = 0;
  virtual void exitVariableDeclarators(JavaParser::VariableDeclaratorsContext *ctx) = 0;

  virtual void enterVariableDeclarator(JavaParser::VariableDeclaratorContext *ctx) = 0;
  virtual void exitVariableDeclarator(JavaParser::VariableDeclaratorContext *ctx) = 0;

  virtual void enterConstantDeclaratorsRest(JavaParser::ConstantDeclaratorsRestContext *ctx) = 0;
  virtual void exitConstantDeclaratorsRest(JavaParser::ConstantDeclaratorsRestContext *ctx) = 0;

  virtual void enterConstantDeclaratorRest(JavaParser::ConstantDeclaratorRestContext *ctx) = 0;
  virtual void exitConstantDeclaratorRest(JavaParser::ConstantDeclaratorRestContext *ctx) = 0;

  virtual void enterVariableDeclaratorId(JavaParser::VariableDeclaratorIdContext *ctx) = 0;
  virtual void exitVariableDeclaratorId(JavaParser::VariableDeclaratorIdContext *ctx) = 0;

  virtual void enterVariableInitializer(JavaParser::VariableInitializerContext *ctx) = 0;
  virtual void exitVariableInitializer(JavaParser::VariableInitializerContext *ctx) = 0;

  virtual void enterArrayInitializer(JavaParser::ArrayInitializerContext *ctx) = 0;
  virtual void exitArrayInitializer(JavaParser::ArrayInitializerContext *ctx) = 0;

  virtual void enterModifier(JavaParser::ModifierContext *ctx) = 0;
  virtual void exitModifier(JavaParser::ModifierContext *ctx) = 0;

  virtual void enterPackageOrTypeName(JavaParser::PackageOrTypeNameContext *ctx) = 0;
  virtual void exitPackageOrTypeName(JavaParser::PackageOrTypeNameContext *ctx) = 0;

  virtual void enterEnumConstantName(JavaParser::EnumConstantNameContext *ctx) = 0;
  virtual void exitEnumConstantName(JavaParser::EnumConstantNameContext *ctx) = 0;

  virtual void enterTypeName(JavaParser::TypeNameContext *ctx) = 0;
  virtual void exitTypeName(JavaParser::TypeNameContext *ctx) = 0;

  virtual void enterType(JavaParser::TypeContext *ctx) = 0;
  virtual void exitType(JavaParser::TypeContext *ctx) = 0;

  virtual void enterClassOrInterfaceType(JavaParser::ClassOrInterfaceTypeContext *ctx) = 0;
  virtual void exitClassOrInterfaceType(JavaParser::ClassOrInterfaceTypeContext *ctx) = 0;

  virtual void enterPrimitiveType(JavaParser::PrimitiveTypeContext *ctx) = 0;
  virtual void exitPrimitiveType(JavaParser::PrimitiveTypeContext *ctx) = 0;

  virtual void enterVariableModifier(JavaParser::VariableModifierContext *ctx) = 0;
  virtual void exitVariableModifier(JavaParser::VariableModifierContext *ctx) = 0;

  virtual void enterTypeArguments(JavaParser::TypeArgumentsContext *ctx) = 0;
  virtual void exitTypeArguments(JavaParser::TypeArgumentsContext *ctx) = 0;

  virtual void enterTypeArgument(JavaParser::TypeArgumentContext *ctx) = 0;
  virtual void exitTypeArgument(JavaParser::TypeArgumentContext *ctx) = 0;

  virtual void enterQualifiedNameList(JavaParser::QualifiedNameListContext *ctx) = 0;
  virtual void exitQualifiedNameList(JavaParser::QualifiedNameListContext *ctx) = 0;

  virtual void enterFormalParameters(JavaParser::FormalParametersContext *ctx) = 0;
  virtual void exitFormalParameters(JavaParser::FormalParametersContext *ctx) = 0;

  virtual void enterFormalParameterDecls(JavaParser::FormalParameterDeclsContext *ctx) = 0;
  virtual void exitFormalParameterDecls(JavaParser::FormalParameterDeclsContext *ctx) = 0;

  virtual void enterFormalParameterDeclsRest(JavaParser::FormalParameterDeclsRestContext *ctx) = 0;
  virtual void exitFormalParameterDeclsRest(JavaParser::FormalParameterDeclsRestContext *ctx) = 0;

  virtual void enterMethodBody(JavaParser::MethodBodyContext *ctx) = 0;
  virtual void exitMethodBody(JavaParser::MethodBodyContext *ctx) = 0;

  virtual void enterConstructorBody(JavaParser::ConstructorBodyContext *ctx) = 0;
  virtual void exitConstructorBody(JavaParser::ConstructorBodyContext *ctx) = 0;

  virtual void enterExplicitConstructorInvocation(JavaParser::ExplicitConstructorInvocationContext *ctx) = 0;
  virtual void exitExplicitConstructorInvocation(JavaParser::ExplicitConstructorInvocationContext *ctx) = 0;

  virtual void enterQualifiedName(JavaParser::QualifiedNameContext *ctx) = 0;
  virtual void exitQualifiedName(JavaParser::QualifiedNameContext *ctx) = 0;

  virtual void enterLiteral(JavaParser::LiteralContext *ctx) = 0;
  virtual void exitLiteral(JavaParser::LiteralContext *ctx) = 0;

  virtual void enterIntegerLiteral(JavaParser::IntegerLiteralContext *ctx) = 0;
  virtual void exitIntegerLiteral(JavaParser::IntegerLiteralContext *ctx) = 0;

  virtual void enterBooleanLiteral(JavaParser::BooleanLiteralContext *ctx) = 0;
  virtual void exitBooleanLiteral(JavaParser::BooleanLiteralContext *ctx) = 0;

  virtual void enterAnnotations(JavaParser::AnnotationsContext *ctx) = 0;
  virtual void exitAnnotations(JavaParser::AnnotationsContext *ctx) = 0;

  virtual void enterAnnotation(JavaParser::AnnotationContext *ctx) = 0;
  virtual void exitAnnotation(JavaParser::AnnotationContext *ctx) = 0;

  virtual void enterAnnotationName(JavaParser::AnnotationNameContext *ctx) = 0;
  virtual void exitAnnotationName(JavaParser::AnnotationNameContext *ctx) = 0;

  virtual void enterElementValuePairs(JavaParser::ElementValuePairsContext *ctx) = 0;
  virtual void exitElementValuePairs(JavaParser::ElementValuePairsContext *ctx) = 0;

  virtual void enterElementValuePair(JavaParser::ElementValuePairContext *ctx) = 0;
  virtual void exitElementValuePair(JavaParser::ElementValuePairContext *ctx) = 0;

  virtual void enterElementValue(JavaParser::ElementValueContext *ctx) = 0;
  virtual void exitElementValue(JavaParser::ElementValueContext *ctx) = 0;

  virtual void enterElementValueArrayInitializer(JavaParser::ElementValueArrayInitializerContext *ctx) = 0;
  virtual void exitElementValueArrayInitializer(JavaParser::ElementValueArrayInitializerContext *ctx) = 0;

  virtual void enterAnnotationTypeDeclaration(JavaParser::AnnotationTypeDeclarationContext *ctx) = 0;
  virtual void exitAnnotationTypeDeclaration(JavaParser::AnnotationTypeDeclarationContext *ctx) = 0;

  virtual void enterAnnotationTypeBody(JavaParser::AnnotationTypeBodyContext *ctx) = 0;
  virtual void exitAnnotationTypeBody(JavaParser::AnnotationTypeBodyContext *ctx) = 0;

  virtual void enterAnnotationTypeElementDeclaration(JavaParser::AnnotationTypeElementDeclarationContext *ctx) = 0;
  virtual void exitAnnotationTypeElementDeclaration(JavaParser::AnnotationTypeElementDeclarationContext *ctx) = 0;

  virtual void enterAnnotationTypeElementRest(JavaParser::AnnotationTypeElementRestContext *ctx) = 0;
  virtual void exitAnnotationTypeElementRest(JavaParser::AnnotationTypeElementRestContext *ctx) = 0;

  virtual void enterAnnotationMethodOrConstantRest(JavaParser::AnnotationMethodOrConstantRestContext *ctx) = 0;
  virtual void exitAnnotationMethodOrConstantRest(JavaParser::AnnotationMethodOrConstantRestContext *ctx) = 0;

  virtual void enterAnnotationMethodRest(JavaParser::AnnotationMethodRestContext *ctx) = 0;
  virtual void exitAnnotationMethodRest(JavaParser::AnnotationMethodRestContext *ctx) = 0;

  virtual void enterAnnotationConstantRest(JavaParser::AnnotationConstantRestContext *ctx) = 0;
  virtual void exitAnnotationConstantRest(JavaParser::AnnotationConstantRestContext *ctx) = 0;

  virtual void enterDefaultValue(JavaParser::DefaultValueContext *ctx) = 0;
  virtual void exitDefaultValue(JavaParser::DefaultValueContext *ctx) = 0;

  virtual void enterBlock(JavaParser::BlockContext *ctx) = 0;
  virtual void exitBlock(JavaParser::BlockContext *ctx) = 0;

  virtual void enterBlockStatement(JavaParser::BlockStatementContext *ctx) = 0;
  virtual void exitBlockStatement(JavaParser::BlockStatementContext *ctx) = 0;

  virtual void enterLocalVariableDeclarationStatement(JavaParser::LocalVariableDeclarationStatementContext *ctx) = 0;
  virtual void exitLocalVariableDeclarationStatement(JavaParser::LocalVariableDeclarationStatementContext *ctx) = 0;

  virtual void enterLocalVariableDeclaration(JavaParser::LocalVariableDeclarationContext *ctx) = 0;
  virtual void exitLocalVariableDeclaration(JavaParser::LocalVariableDeclarationContext *ctx) = 0;

  virtual void enterVariableModifiers(JavaParser::VariableModifiersContext *ctx) = 0;
  virtual void exitVariableModifiers(JavaParser::VariableModifiersContext *ctx) = 0;

  virtual void enterStatement(JavaParser::StatementContext *ctx) = 0;
  virtual void exitStatement(JavaParser::StatementContext *ctx) = 0;

  virtual void enterCatches(JavaParser::CatchesContext *ctx) = 0;
  virtual void exitCatches(JavaParser::CatchesContext *ctx) = 0;

  virtual void enterCatchClause(JavaParser::CatchClauseContext *ctx) = 0;
  virtual void exitCatchClause(JavaParser::CatchClauseContext *ctx) = 0;

  virtual void enterFormalParameter(JavaParser::FormalParameterContext *ctx) = 0;
  virtual void exitFormalParameter(JavaParser::FormalParameterContext *ctx) = 0;

  virtual void enterSwitchBlock(JavaParser::SwitchBlockContext *ctx) = 0;
  virtual void exitSwitchBlock(JavaParser::SwitchBlockContext *ctx) = 0;

  virtual void enterSwitchBlockStatementGroup(JavaParser::SwitchBlockStatementGroupContext *ctx) = 0;
  virtual void exitSwitchBlockStatementGroup(JavaParser::SwitchBlockStatementGroupContext *ctx) = 0;

  virtual void enterSwitchLabel(JavaParser::SwitchLabelContext *ctx) = 0;
  virtual void exitSwitchLabel(JavaParser::SwitchLabelContext *ctx) = 0;

  virtual void enterForControl(JavaParser::ForControlContext *ctx) = 0;
  virtual void exitForControl(JavaParser::ForControlContext *ctx) = 0;

  virtual void enterForInit(JavaParser::ForInitContext *ctx) = 0;
  virtual void exitForInit(JavaParser::ForInitContext *ctx) = 0;

  virtual void enterEnhancedForControl(JavaParser::EnhancedForControlContext *ctx) = 0;
  virtual void exitEnhancedForControl(JavaParser::EnhancedForControlContext *ctx) = 0;

  virtual void enterForUpdate(JavaParser::ForUpdateContext *ctx) = 0;
  virtual void exitForUpdate(JavaParser::ForUpdateContext *ctx) = 0;

  virtual void enterParExpression(JavaParser::ParExpressionContext *ctx) = 0;
  virtual void exitParExpression(JavaParser::ParExpressionContext *ctx) = 0;

  virtual void enterExpressionList(JavaParser::ExpressionListContext *ctx) = 0;
  virtual void exitExpressionList(JavaParser::ExpressionListContext *ctx) = 0;

  virtual void enterStatementExpression(JavaParser::StatementExpressionContext *ctx) = 0;
  virtual void exitStatementExpression(JavaParser::StatementExpressionContext *ctx) = 0;

  virtual void enterConstantExpression(JavaParser::ConstantExpressionContext *ctx) = 0;
  virtual void exitConstantExpression(JavaParser::ConstantExpressionContext *ctx) = 0;

  virtual void enterExpression(JavaParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(JavaParser::ExpressionContext *ctx) = 0;

  virtual void enterPrimary(JavaParser::PrimaryContext *ctx) = 0;
  virtual void exitPrimary(JavaParser::PrimaryContext *ctx) = 0;

  virtual void enterCreator(JavaParser::CreatorContext *ctx) = 0;
  virtual void exitCreator(JavaParser::CreatorContext *ctx) = 0;

  virtual void enterCreatedName(JavaParser::CreatedNameContext *ctx) = 0;
  virtual void exitCreatedName(JavaParser::CreatedNameContext *ctx) = 0;

  virtual void enterInnerCreator(JavaParser::InnerCreatorContext *ctx) = 0;
  virtual void exitInnerCreator(JavaParser::InnerCreatorContext *ctx) = 0;

  virtual void enterExplicitGenericInvocation(JavaParser::ExplicitGenericInvocationContext *ctx) = 0;
  virtual void exitExplicitGenericInvocation(JavaParser::ExplicitGenericInvocationContext *ctx) = 0;

  virtual void enterArrayCreatorRest(JavaParser::ArrayCreatorRestContext *ctx) = 0;
  virtual void exitArrayCreatorRest(JavaParser::ArrayCreatorRestContext *ctx) = 0;

  virtual void enterClassCreatorRest(JavaParser::ClassCreatorRestContext *ctx) = 0;
  virtual void exitClassCreatorRest(JavaParser::ClassCreatorRestContext *ctx) = 0;

  virtual void enterNonWildcardTypeArguments(JavaParser::NonWildcardTypeArgumentsContext *ctx) = 0;
  virtual void exitNonWildcardTypeArguments(JavaParser::NonWildcardTypeArgumentsContext *ctx) = 0;

  virtual void enterArguments(JavaParser::ArgumentsContext *ctx) = 0;
  virtual void exitArguments(JavaParser::ArgumentsContext *ctx) = 0;


};

