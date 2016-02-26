#pragma once

#include "problem.h"

class CP82 : public CProblem
{
	typedef CProblem super;
	
public:
	CP82() {};
	virtual ~CP82() {};

	virtual int nRun(int argc, const char * argv[]);

protected:

	int power(int p_x, int p_y);
};
