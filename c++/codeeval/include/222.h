#ifndef _CP222_H_
#define _CP222_H_

#include "problem.h"

class CP222 : public CProblem
{
	typedef CProblem super;
	
public:
	CP222();
	virtual ~CP222();

	virtual int nRun(int argc, const char * argv[]);

protected:

};

#endif
