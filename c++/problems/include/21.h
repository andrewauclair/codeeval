#ifndef _CP21_H_
#define _CP21_H_

#include "problem.h"

class CP21 : public CProblem
{
	typedef CProblem super;
	
public:
	CP21();
	virtual ~CP21();

	virtual int nRun(int argc, const char * argv[]);

protected:

};

#endif
