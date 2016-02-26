#pragma once

#include "problem.h"

class CP46 : public CProblem
{
	typedef CProblem super;
	
public:
	CP46() {};
	virtual ~CP46() {};

	virtual int nRun(int argc, const char * argv[]);

protected:

	bool isPrime(long int p_nNum);
};
