#ifndef _CP1_H_
#define _CP1_H_

#include "problem.h"

class CP1 : public CProblem
{
	typedef CProblem super;

public:
	CP1();
	virtual ~CP1();

	virtual int nRun(int argc, const char * argv[]);

protected:

};

#endif
