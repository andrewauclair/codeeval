#pragma once

#include "problem.h"
#include <vector>
using namespace std;

class CP158 : public CProblem
{
	typedef CProblem super;
	
public:
	CP158() {};
	virtual ~CP158() {};

	virtual int nRun(int argc, const char * argv[]);

protected:

	void vBubbleSort(vector<int> &p_vector, int p_cLoops);
};
