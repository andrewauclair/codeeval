#ifndef _CP12_H_
#define _CP12_H_

#include "problem.h"

class CP12 : public CProblem
{
	typedef CProblem super;
	
public:
	CP12();
	virtual ~CP12();

	virtual int nRun(int argc, const char * argv[]);

protected:

};

#endif