#pragma once

#include "problem.h"

class C59 : public CChallenge
{
	typedef CChallenge super;
	
public:
	C59() {};
	virtual ~C59() {};

	virtual int nRun(int argc, const char * argv[]);

protected:

	void vBubbleSort(vector<string> &p_vector);
};
