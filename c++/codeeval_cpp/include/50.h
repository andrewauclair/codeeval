#ifndef _CP50_H_
#define _CP50_H_

#include "problem.h"

class CP50 : public CProblem
{
	typedef CProblem super;
	
public:
	CP50();
	virtual ~CP50();

	virtual int nRun(int argc, const char * argv[]);

protected:

};

#endif
