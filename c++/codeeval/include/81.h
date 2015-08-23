#ifndef _CP81_H_
#define _CP81_H_

#include "problem.h"

class CP81 : public CProblem
{
	typedef CProblem super;
	
public:
	CP81();
	virtual ~CP81();

	virtual int nRun(int argc, const char * argv[]);

protected:

	int nFactorial(int p_nNum);
};

#endif
