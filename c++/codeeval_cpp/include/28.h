#ifndef _CP28_H_
#define _CP28_H_

#include "problem.h"

class CP28 : public CProblem
{
	typedef CProblem super;
	
public:
	CP28();
	virtual ~CP28();

	virtual int nRun(int argc, const char * argv[]);

protected:

};

#endif
