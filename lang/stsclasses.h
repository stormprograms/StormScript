#pragma once
#ifndef STSCLASSES_H_
#define STSCLASSES_H_

#if defined(_WIN32)
#define PLATFORM "Windows"
#else
#define PLATFORM "other"
#endif

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <cctype>
#include <cstdlib>

using std::string;
using std::cout;
using std::endl;


class stsvars{
public:
	int valint = 0;
	string valstring = "";
	char type;
	bool glob;
	string name;
};

class sts
{
public:
	//variables
	int lineon; //line the parser is on
	unsigned int sizeoff = 0; //size of the program

	std::vector<string> prg;
	std::vector<string> prs;
	std::vector<stsvars> globvars; //global variables
	//functions
	stsvars declare(char type, int line); //declare variables -
	void error(int num, string issue); //error
	void read(char *argv[], int argc); //read file
	void print(int line, std::vector<stsvars> current_vars); //out function
	void sys(int line);
	stsvars in(int line);
	std::vector<string> parse(std::vector<string> prg);
	void interp(string fname, std::vector<string> prg, int psize, char *argv[], int argc);
	bool compare(int line, std::vector<stsvars> current_vars);
};



#endif