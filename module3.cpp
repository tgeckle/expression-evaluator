/*
Theresa Geckle
CMSC 330 Project 2
Implements the main function for the expression calculator.
*/
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

#include "expression.h"
#include "subexpression.h"
#include "symboltable.h"
#include "parse.h"

SymbolTable symbolTable;

void parseAssignments(stringstream& in);

int main()
{
	const int SIZE = 256;
    Expression* expression;
    char paren, comma, line[SIZE];
	ifstream fin("input.txt");
//	string program;
	while (true) {
		symbolTable.init();
		fin.getline(line, SIZE);
		if (!fin)
			break;
		stringstream in(line, ios_base::in);
		in >> paren;
		cout << line << " ";
		expression = SubExpression::parse(in);
		in >> comma;
		parseAssignments(in);
		cout << "Value = " << expression->evaluate() << endl;
	}
	system("pause");
    return 0;
}

void parseAssignments(stringstream& in)
{
    char assignop, delimiter;
    string variable;
    int value;
    do
    {
        variable = parseName(in);
        in >> ws >> assignop >> value >> delimiter;
        symbolTable.insert(variable, value);
    }
    while (delimiter == ',');
}
   
