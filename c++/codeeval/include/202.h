#ifndef _CP202_H_
#define _CP202_H_

#include "problem.h"

class CP202 : public CProblem
{
	typedef CProblem super;
	
public:
	CP202();
	virtual ~CP202();

	virtual int nRun(int argc, const char * argv[]);

protected:

};

#endif