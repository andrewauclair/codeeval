#ifndef _CP203_H_
#define _CP203_H_

#include "problem.h"

class CP203 : public CProblem
{
	typedef CProblem super;
	
public:
	CP203();
	virtual ~CP203();

	virtual int nRun(int argc, const char * argv[]);

protected:

};

#endif
