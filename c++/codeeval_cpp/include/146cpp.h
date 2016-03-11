#pragma once

#include "problem.h"

class C146 : public CChallenge
{
	typedef CChallenge super;
	
public:
	C146() {};
	virtual ~C146() {};

	virtual int nRun(int argc, const char * argv[]);

protected:

	void vBubbleSort(vector<int> &p_vector);
};
