#ifndef _CP205_H_
#define _CP205_H_

#include "problem.h"

class CP205 : public CProblem
{
	typedef CProblem super;
	
public:
	CP205();
	virtual ~CP205();

	virtual int nRun(int argc, const char * argv[]);

protected:

};

#endif
