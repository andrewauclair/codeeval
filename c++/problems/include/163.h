#ifndef _CP163_H_
#define _CP163_H_

#include "problem.h"

class CP163 : public CProblem
{
	typedef CProblem super;

public:
	CP163();
	virtual ~CP163();

	virtual int nRun(int argc, const char * argv[]);

protected:

};

#endif
