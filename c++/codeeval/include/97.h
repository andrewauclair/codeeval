#ifndef _CP97_H_
#define _CP97_H_

#include "problem.h"

class CP97 : public CProblem
{
	typedef CProblem super;
	
public:
	CP97();
	virtual ~CP97();

	virtual int nRun(int argc, const char * argv[]);

protected:

};

#endif
