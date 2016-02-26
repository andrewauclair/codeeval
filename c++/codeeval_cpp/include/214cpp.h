#pragma once

#include "problem.h"
#include <string>
#include <vector>
using namespace std;

class CP214 : public CProblem
{
	typedef CProblem super;
	
public:
	CP214() {};
	virtual ~CP214() {};

	virtual int nRun(int argc, const char * argv[]);

protected:
	void vBubbleSort(vector<string> &p_vector);
};
