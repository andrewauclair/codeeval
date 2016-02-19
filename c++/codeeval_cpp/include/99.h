#ifndef _CP99_H_
#define _CP99_H_

#include "problem.h"

class CP99 : public CProblem
{
	typedef CProblem super;
	
public:
	CP99();
	virtual ~CP99();

	virtual int nRun(int argc, const char * argv[]);

protected:

};

#endif
