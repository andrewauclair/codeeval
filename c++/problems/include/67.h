#ifndef _CP67_H_
#define _CP67_H_

#include "problem.h"

class CP67 : public CProblem
{
	typedef CProblem super;
	
public:
	CP67();
	virtual ~CP67();

	virtual int nRun(int argc, const char * argv[]);

protected:

};

#endif