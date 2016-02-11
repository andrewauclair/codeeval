#ifndef _CP40_H_
#define _CP40_H_

#include "problem.h"

class CP40 : public CProblem
{
	typedef CProblem super;
	
public:
	CP40();
	virtual ~CP40();

	virtual int nRun(int argc, const char * argv[]);

protected:

};

#endif
