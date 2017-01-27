/*
Theresa Geckle
CMSC 330 Project 2
Implements the Variable class.
*/
#include <strstream>
#include <vector>
using namespace std;

#include "expression.h"
#include "operand.h"
#include "variable.h"
#include "symboltable.h"

extern SymbolTable symbolTable;

/* Evaluates a variable by looking up its value in the symbol table. */
int Variable::evaluate()
{
	return symbolTable.lookUp(name);
}