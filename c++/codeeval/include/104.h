#ifndef _CP104_H_
#define _CP104_H_

#include "problem.h"

class CP104 : public CProblem
{
	typedef CProblem super;
	
public:
	CP104();
	virtual ~CP104();

	virtual int nRun(int argc, const char * argv[]);

protected:

};

#endif
