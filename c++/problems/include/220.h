#ifndef _CP220_H_
#define _CP220_H_

#include "problem.h"

class CP220 : public CProblem
{
	typedef CProblem super;
	
public:
	CP220();
	virtual ~CP220();

	virtual int nRun(int argc, const char * argv[]);

protected:

};

#endif
