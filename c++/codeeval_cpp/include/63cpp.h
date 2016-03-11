#pragma once

#include "problem.h"

class C63 : public CChallenge
{
	typedef CChallenge super;
	
public:
	C63() {};
	virtual ~C63() {};

	virtual int nRun(int argc, const char * argv[]);

protected:

	bool isPrime(long int p_nNum);
};
