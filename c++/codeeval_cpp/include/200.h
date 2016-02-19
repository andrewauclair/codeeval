#ifndef _CP200_H_
#define _CP200_H_

#include "problem.h"

class CP200 : public CProblem
{
	typedef CProblem super;
	
public:
	CP200();
	virtual ~CP200();

	virtual int nRun(int argc, const char * argv[]);

protected:

};

#endif
