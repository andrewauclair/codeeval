#ifndef _CP57_H_
#define _CP57_H_

#include "problem.h"

class CP57 : public CProblem
{
	typedef CProblem super;
	
public:
	CP57();
	virtual ~CP57();

	virtual int nRun(int argc, const char * argv[]);

protected:

};

#endif