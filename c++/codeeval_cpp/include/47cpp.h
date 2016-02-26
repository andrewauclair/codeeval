#pragma once

#include "problem.h"

class CP47 : public CProblem
{
	typedef CProblem super;
	
public:
	CP47() {};
	virtual ~CP47() {};

	virtual int nRun(int argc, const char * argv[]);

protected:

	bool isPalindrome(string p_str);
};
