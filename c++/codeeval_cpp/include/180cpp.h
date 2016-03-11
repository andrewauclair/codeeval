#pragma once

#include "problem.h"

class C180 : public CChallenge
{
	typedef CChallenge super;
	
public:
	C180() {};
	virtual ~C180() {};

	virtual int nRun(int argc, const char * argv[]);

protected:

	void vBubbleSort(vector<char> &p_v1, vector<int> &p_v2);
};
