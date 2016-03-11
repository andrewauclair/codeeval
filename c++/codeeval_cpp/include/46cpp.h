#pragma once

#include "problem.h"

class C46 : public CChallenge
{
	typedef CChallenge super;
	
public:
	C46() {};
	virtual ~C46() {};

	virtual int nRun(int argc, const char * argv[]);

protected:

	bool isPrime(long int p_nNum);
};
