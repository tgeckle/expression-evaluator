/*
Theresa Geckle
CMSC 330 Project 2
Implements the utility function parseName().
*/
#include <cctype>
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

#include "parse.h"

/* Parses a variable name. */
string parseName(stringstream& in)
{
	char alnum;
	string name = "";

	in >> ws;
	while (isalnum(in.peek()))
	{
		in >> alnum;
		name += alnum;
	}
	return name;
}