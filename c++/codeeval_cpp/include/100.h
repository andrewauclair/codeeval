#ifndef _CP100_H_
#define _CP100_H_

#include "problem.h"

class CP100 : public CProblem
{
	typedef CProblem super;
	
public:
	CP100();
	virtual ~CP100();

	virtual int nRun(int argc, const char * argv[]);

protected:

};

#endif
