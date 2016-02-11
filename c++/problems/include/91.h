#ifndef _CP91_H_
#define _CP91_H_

#include "problem.h"

class CP91 : public CProblem
{
	typedef CProblem super;
	
public:
	CP91();
	virtual ~CP91();

	virtual int nRun(int argc, const char * argv[]);

protected:

};

#endif
