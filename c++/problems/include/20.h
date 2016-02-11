#ifndef _CP20_H_
#define _CP20_H_

#include "problem.h"

class CP20 : public CProblem
{
	typedef CProblem super;
	
public:
	CP20();
	virtual ~CP20();

	virtual int nRun(int argc, const char * argv[]);

protected:

};

#endif
