/*
Theresa Geckle
CMSC 330 Project 2
Implements the funstions of the Operand class.
*/
#include <cctype>
#include <iostream>
#include <sstream>
#include <list>
#include <string>

using namespace std;

#include "expression.h"
#include "subexpression.h"
#include "operand.h"
#include "variable.h"
#include "literal.h"
#include "parse.h"

/* Parses a stringstream input for an operand. */
Expression* Operand::parse(stringstream& in)
{
	char paren;
	int value;

	in >> ws;
	if (isdigit(in.peek()))
	{
		in >> value;
		Expression* literal = new Literal(value);
		return literal;
	}
	if (in.peek() == '(')
	{
		in >> paren;
		return SubExpression::parse(in);
	}
	else
		return new Variable(parseName(in));
	return 0;
}