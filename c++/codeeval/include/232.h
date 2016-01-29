#ifndef _CP232_H_
#define _CP232_H_

#include "problem.h"

class CP232 : public CProblem
{
	typedef CProblem super;
	
public:
	CP232();
	virtual ~CP232();

	virtual int nRun(int argc, const char * argv[]);

protected:

};

#endif
