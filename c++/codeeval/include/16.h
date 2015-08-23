#ifndef _CP16_H_
#define _CP16_H_

#include "problem.h"

class CP16 : public CProblem
{
	typedef CProblem super;

public:
	CP16();
	virtual ~CP16();

	virtual int nRun(int argc, const char * argv[]);

protected:

};

#endif
