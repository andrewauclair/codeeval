#ifndef _CP63_H_
#define _CP63_H_

#include "problem.h"

class CP63 : public CProblem
{
	typedef CProblem super;
	
public:
	CP63();
	virtual ~CP63();

	virtual int nRun(int argc, const char * argv[]);

protected:

	bool isPrime(long int p_nNum);
};

#endif
