#ifndef _CP208_H_
#define _CP208_H_

#include "problem.h"

class CP208 : public CProblem
{
	typedef CProblem super;
	
public:
	CP208();
	virtual ~CP208();

	virtual int nRun(int argc, const char * argv[]);

protected:

};

#endif
