#pragma once

#include "problem.h"
#include <vector>
using namespace std;

class CP2 : public CProblem
{
	typedef CProblem super;

public:
	CP2() {};
	virtual ~CP2() {};

	virtual int nRun(int argc, const char * argv[]);

protected:

	void vSortAndPrint(vector<string> p_aryStrLines, int p_c);
};
