#pragma once

#include "problem.h"

class C81 : public CChallenge
{
	typedef CChallenge super;
	
public:
	C81() {};
	virtual ~C81() {};

	virtual int nRun(int argc, const char * argv[]);

protected:

	int nFactorial(int p_nNum);
};
