#ifndef _CP102_H_
#define _CP102_H_

#include "problem.h"

class CP102 : public CProblem
{
	typedef CProblem super;
	
public:
	CP102();
	virtual ~CP102();

	virtual int nRun(int argc, const char * argv[]);

protected:

};

#endif
