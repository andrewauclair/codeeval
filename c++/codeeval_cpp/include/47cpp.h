#pragma once

#include "problem.h"

class C47 : public CChallenge
{
	typedef CChallenge super;
	
public:
	C47() {};
	virtual ~C47() {};

	virtual int nRun(int argc, const char * argv[]);

protected:

	bool isPalindrome(string p_str);
};
