#pragma once

#include "problem.h"

class CP3 : public CProblem
{
	typedef CProblem super;
	
public:
	CP3() {	m_fInputRequired = false; };
	virtual ~CP3() {};

	virtual int nRun(int argc, const char * argv[]);

protected:

	bool isPrime(long int p_nNum);
	bool isPalindrome(string p_str);
};
