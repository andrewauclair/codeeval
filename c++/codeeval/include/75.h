#ifndef _CP75_H_
#define _CP75_H_

#include "problem.h"

class CP75 : public CProblem
{
	typedef CProblem super;
	
public:
	CP75();
	virtual ~CP75();

	virtual int nRun(int argc, const char * argv[]);

protected:

};

#endif
