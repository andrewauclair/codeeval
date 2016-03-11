#pragma once

#include "problem.h"

class C3 : public CChallenge
{
	typedef CChallenge super;
	
public:
	C3() {	m_fInputRequired = false; };
	virtual ~C3() {};

	virtual int nRun(int argc, const char * argv[]);

protected:

	bool isPrime(long int p_nNum);
	bool isPalindrome(string p_str);
};
