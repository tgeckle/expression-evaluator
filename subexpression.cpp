/*
Theresa Geckle
CMSC 330 Project 2
Implements the SubExpression class.
*/
#include <iostream>
#include <sstream>
using namespace std;

#include "expression.h"
#include "subexpression.h"
#include "operand.h"
#include "plus.h"
#include "minus.h"
#include "times.h"
#include "divide.h"
#include "and.h"
#include "or.h"
#include "equivalent.h"
#include "less.h"
#include "greater.h"
#include "negation.h"
#include "conditional.h"

/* Constructor for the SubExpression class. */
SubExpression::SubExpression(Expression* left, Expression* right)
{
	this->left = left;
	this->right = right;
}

/* Parses a SubExpression based on a stringstream input. */
Expression* SubExpression::parse(stringstream& in)
{
	Expression* left;
	Expression* right;
	Expression* condition;
	char operation, paren, qmark;

	left = Operand::parse(in);
	in >> operation;
	right = Operand::parse(in);
	if (operation == ':') {
		in >> qmark;
		condition = Operand::parse(in);
	}
	else {
		condition = 0;
	}
	in >> paren;
	switch (operation)
	{
	case '+':
		return new Plus(left, right);
	case '-':
		return new Minus(left, right);
	case '*':
		return new Times(left, right);
	case '/':
		return new Divide(left, right);
	case '&':
		return new And(left, right);
	case '|':
		return new Or(left, right);
	case '=':
		return new Equivalent(left, right);
	case '>':
		return new Greater(left, right);
	case '<':
		return new Less(left, right);
	case '!':
		return new Negation(left, right);
	case ':':
		return new Conditional(left, right, condition);
	}
	return 0;
}
