#ifndef _CP140_H_
#define _CP140_H_

#include "problem.h"

class CP140 : public CProblem
{
	typedef CProblem super;
	
public:
	CP140();
	virtual ~CP140();

	virtual int nRun(int argc, const char * argv[]);

protected:

};

#endif
