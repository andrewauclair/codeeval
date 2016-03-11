#pragma once

#include "problem.h"

class C45 : public CChallenge
{
	typedef CChallenge super;
	
public:
	C45() {};
	virtual ~C45() {};

	virtual int nRun(int argc, const char * argv[]);

protected:

	bool isPalindrome(string p_str);
};
