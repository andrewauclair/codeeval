#ifndef _CP45_H_
#define _CP45_H_
#include "problem.h"
class CP45 : public CProblem
{
	typedef CProblem super;
	
public:
	CP45();
	virtual ~CP45();
	virtual void vRun();
protected:
	bool isPalindrome(string p_str);
};
#endif
