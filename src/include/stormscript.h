#pragma once
#ifndef STSCLASSES_H_
#define STSCLASSES_H_

#if defined(__MINGW32__)
#define PLATFORM "Windows"
#include <windows.h>
#else
#define PLATFORM "other"
#include <unistd.h>
#endif
/*
NOTE:
Place All StormScript headers here separated by 2 lines.
*/
#include "includes.h"


#include "core.h"


#include "classes.h"


#include "variables.h"


#include "functions.h"


#include "modules.h"


#include "stsrand.h"

using std::cout;

// for the most part, it is a better idea to use functions outside of the sts class

string striplit(string line);
bool condition(sts *program, int *ln, std::vector<stsvars> vars);
bool isint(string s);
bool toBool(string s);

#endif
