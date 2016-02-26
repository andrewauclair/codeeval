#pragma once

#include "problem.h"

class CP45 : public CProblem
{
	typedef CProblem super;
	
public:
	CP45() {};
	virtual ~CP45() {};

	virtual int nRun(int argc, const char * argv[]);

protected:

	bool isPalindrome(string p_str);
};
