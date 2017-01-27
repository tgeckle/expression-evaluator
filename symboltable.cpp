/*
Theresa Geckle
CMSC 330 Project 2
Implements the SymbolTable class..
*/
#include <string>
#include <vector>
using namespace std;

#include "symboltable.h"

/* Adds a definition to the symbol table. */
void SymbolTable::insert(string variable, int value)
{
	const Symbol& symbol = Symbol(variable, value);
	elements.push_back(symbol);
}

/* Looks up a variable's value in the symbol table. */
int SymbolTable::lookUp(string variable) const
{
	for (int i = 0; i < elements.size(); i++)
		if (elements[i].variable == variable)
			return elements[i].value;
	return -1;
}

/* Resets the symbol table. */
void SymbolTable::init() {
	elements.clear();
}

