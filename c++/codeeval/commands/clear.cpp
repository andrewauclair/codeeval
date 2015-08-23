#include "clear.h"
#include "problems.h"
#include "globals.h"
#include <string>
#include <sstream>
#include <fstream>
#include <iostream>
#include <assert.h>
using namespace std;

CClear::CClear()
	: super("clear")
{
}

CClear::~CClear()
{
}

void CClear::vRun(const vector<string> &p_aArgs)
{
	system("cls");
	cout << "<code_eval> c++ code_eval solutions - Andrew Auclair - Game Programmer" << endl << endl;

	g_inputConsole->vClear();
	g_outputConsole->vClear();
}
