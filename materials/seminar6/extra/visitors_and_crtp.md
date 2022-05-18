CRTP -- это когда класс наследуется от шаблона, параметризованного этим же классом.

например, class ScalarExprEmitter: public StmtVisitor<ScalarExprEmitter, Value*> {


};

Зачем? А добавим-ка в этот класс метод Visit:

Value* ScalarExprEmitter::Visit(Expr* E) {
  return StmtVisitor<ScalarExprEmitter, Value*>::Visit(E);
}

И ещё функцию создания экземпляра:

Value *EmitScalarExpr(Expr *E) {
  return ScalarExprEmitter(*this).Visit(E);
}

Тогда вся логика будет происходить в ScalarExprEmitter, а StmtVisitor просто может выполнять какие-то действия со ScalarExprEmitter.
