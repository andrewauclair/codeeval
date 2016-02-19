#ifndef _CP66_H_
#define _CP66_H_

#include "problem.h"

class CP66 : public CProblem
{
	typedef CProblem super;
	
public:
	CP66();
	virtual ~CP66();

	virtual int nRun(int argc, const char * argv[]);

protected:

};

#endif
