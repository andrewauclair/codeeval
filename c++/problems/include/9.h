#ifndef _CP9_H_
#define _CP9_H_

#include "problem.h"

class CP9 : public CProblem
{
	typedef CProblem super;
	
public:
	CP9();
	virtual ~CP9();

	virtual int nRun(int argc, const char * argv[]);

protected:

};

#endif
