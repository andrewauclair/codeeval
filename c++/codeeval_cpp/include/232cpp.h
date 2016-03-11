#pragma once

#include "problem.h"

class C232 : public CChallenge
{
	typedef CChallenge super;
	
public:
	C232() {};
	virtual ~C232() {};

	virtual int nRun(int argc, const char * argv[]);

protected:

	void vStupidSort(vector<int> &p_vector, int p_cIterations);
};
