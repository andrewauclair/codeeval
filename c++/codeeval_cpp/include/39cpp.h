#pragma once

#include "problem.h"

class CP39 : public CProblem
{
	typedef CProblem super;
	
public:
	CP39() {};
	virtual ~CP39() {};

	virtual int nRun(int argc, const char * argv[]);

protected:

	int nNext(int p_nNum);
};
