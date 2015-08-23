#ifndef _CP15_H_
#define _CP15_H_

#include "problem.h"

class CP15 : public CProblem
{
	typedef CProblem super;
	
public:
	CP15();
	virtual ~CP15();

	virtual int nRun(int argc, const char * argv[]);

protected:

};

#endif
