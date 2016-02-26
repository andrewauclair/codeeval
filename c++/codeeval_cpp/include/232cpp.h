#pragma once

#include "problem.h"

class CP232 : public CProblem
{
	typedef CProblem super;
	
public:
	CP232() {};
	virtual ~CP232() {};

	virtual int nRun(int argc, const char * argv[]);

protected:

	void vStupidSort(vector<int> &p_vector, int p_cIterations);
};
