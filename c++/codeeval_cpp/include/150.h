#ifndef _CP150_H_
#define _CP150_H_

#include "problem.h"

class CP150 : public CProblem
{
	typedef CProblem super;
	
public:
	CP150();
	virtual ~CP150();

	virtual int nRun(int argc, const char * argv[]);

protected:

};

#endif
