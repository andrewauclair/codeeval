#ifndef _CP29_H_
#define _CP29_H_

#include "problem.h"

class CP29 : public CProblem
{
	typedef CProblem super;
	
public:
	CP29();
	virtual ~CP29();

	virtual int nRun(int argc, const char * argv[]);

protected:

};

#endif
