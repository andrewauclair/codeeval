#ifndef _CP153_H_
#define _CP153_H_

#include "problem.h"

class CP153 : public CProblem
{
	typedef CProblem super;

public:
	CP153();
	virtual ~CP153();

	virtual int nRun(int argc, const char * argv[]);

protected:

};

#endif