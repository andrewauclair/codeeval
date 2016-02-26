#pragma once

#include "problem.h"

class CP22 : public CProblem
{
	typedef CProblem super;
	
public:
	CP22() {};
	virtual ~CP22() {};

	virtual int nRun(int argc, const char * argv[]);

protected:

	int fib(int p_nNum);
};
