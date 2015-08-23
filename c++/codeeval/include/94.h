#ifndef _CP94_H_
#define _CP94_H_

#include "problem.h"

class CP94 : public CProblem
{
	typedef CProblem super;
	
public:
	CP94();
	virtual ~CP94();

	virtual int nRun(int argc, const char * argv[]);

protected:

};

#endif
