#pragma once

#include "problem.h"
#include <vector>
#include <string>
using namespace std;

class CP44 : public CProblem
{
	typedef CProblem super;
	
public:
	CP44() {};
	virtual ~CP44() {};

	virtual int nRun(int argc, const char * argv[]);

protected:

	void vBubbleSort(vector<string> &p_vector);
	vector<string> aryGetPermutations(string p_strNum);
};
