#ifndef _CP101_H_
#define _CP101_H_

#include "problem.h"

class CP101 : public CProblem
{
	typedef CProblem super;
	
public:
	CP101();
	virtual ~CP101();

	virtual int nRun(int argc, const char * argv[]);

protected:

};

#endif
