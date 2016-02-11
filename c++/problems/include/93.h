#ifndef _CP93_H_
#define _CP93_H_

#include "problem.h"

class CP93 : public CProblem
{
	typedef CProblem super;
	
public:
	CP93();
	virtual ~CP93();

	virtual int nRun(int argc, const char * argv[]);

protected:

};

#endif
