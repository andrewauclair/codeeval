#ifndef _CP170_H_
#define _CP170_H_

#include "problem.h"

class CP170 : public CProblem
{
	typedef CProblem super;
	
public:
	CP170();
	virtual ~CP170();

	virtual int nRun(int argc, const char * argv[]);

protected:

};

#endif
