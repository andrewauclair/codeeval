#ifndef _CP98_H_
#define _CP98_H_

#include "problem.h"

class CP98 : public CProblem
{
	typedef CProblem super;
	
public:
	CP98();
	virtual ~CP98();

	virtual int nRun(int argc, const char * argv[]);

protected:

};

#endif