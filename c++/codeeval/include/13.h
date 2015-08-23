#ifndef _CP13_H_
#define _CP13_H_

#include "problem.h"

class CP13 : public CProblem
{
	typedef CProblem super;
	
public:
	CP13();
	virtual ~CP13();

	virtual int nRun(int argc, const char * argv[]);

protected:

};

#endif
