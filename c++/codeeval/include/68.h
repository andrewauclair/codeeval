#ifndef _CP68_H_
#define _CP68_H_

#include "problem.h"

class CP68 : public CProblem
{
	typedef CProblem super;
	
public:
	CP68();
	virtual ~CP68();

	virtual int nRun(int argc, const char * argv[]);

protected:

};

#endif
