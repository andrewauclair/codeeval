#ifndef _CP41_H_
#define _CP41_H_

#include "problem.h"

class CP41 : public CProblem
{
	typedef CProblem super;
	
public:
	CP41();
	virtual ~CP41();

	virtual int nRun(int argc, const char * argv[]);

protected:

};

#endif