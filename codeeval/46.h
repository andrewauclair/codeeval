#ifndef _CP46_H_
#define _CP46_H_
#include "problem.h"
class CP46 : public CProblem
{
	typedef CProblem super;
	
public:
	CP46();
	virtual ~CP46();
	virtual void vRun();
protected:
	bool isPrime(long int p_nNum);
};
#endif
