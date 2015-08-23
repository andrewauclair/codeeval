#ifndef _CP92_H_
#define _CP92_H_

#include "problem.h"

class CP92 : public CProblem
{
	typedef CProblem super;
	
public:
	CP92();
	virtual ~CP92();

	virtual int nRun(int argc, const char * argv[]);

protected:

};

#endif
