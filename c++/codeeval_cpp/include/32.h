#ifndef _CP32_H_
#define _CP32_H_

#include "problem.h"

class CP32 : public CProblem
{
	typedef CProblem super;
	
public:
	CP32();
	virtual ~CP32();

	virtual int nRun(int argc, const char * argv[]);

protected:

};

#endif
