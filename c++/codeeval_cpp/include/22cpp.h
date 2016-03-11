#pragma once

#include "problem.h"

class C22 : public CChallenge
{
	typedef CChallenge super;
	
public:
	C22() {};
	virtual ~C22() {};

	virtual int nRun(int argc, const char * argv[]);

protected:

	int fib(int p_nNum);
};
