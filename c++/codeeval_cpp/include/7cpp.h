#pragma once

#include "problem.h"

class CP7 : public CProblem
{
	typedef CProblem super;
	
public:
	CP7() {};
	virtual ~CP7() {};

	virtual int nRun(int argc, const char * argv[]);

protected:

	float rEval(std::vector<string>::iterator &p_it);
};