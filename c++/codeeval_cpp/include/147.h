#ifndef _CP147_H_
#define _CP147_H_

#include "problem.h"

class CP147 : public CProblem
{
	typedef CProblem super;

public:
	CP147();
	virtual ~CP147();

	virtual int nRun(int argc, const char * argv[]);

protected:

};

#endif
