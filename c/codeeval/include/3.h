#ifndef _CP3_H_
#define _CP3_H_

#include "problem.h"

class CP3 : public CProblem
{
	typedef CProblem super;
	
public:
	CP3();
	virtual ~CP3();
	virtual void vRun();

protected:
	bool isPrime(long int p_nNum);
	bool isPalindrome(string p_str);
};

#endif
