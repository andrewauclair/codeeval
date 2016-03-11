#pragma once

#include "problem.h"

class C43 : public CChallenge
{
	typedef CChallenge super;
	
public:
	C43() {};
	virtual ~C43() {};

	virtual int nRun(int argc, const char * argv[]);

protected:

	void vBubbleSort(vector<int> &p_vector);
};
