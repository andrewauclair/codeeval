#ifndef _CP112_H_
#define _CP112_H_

#include "problem.h"

class CP112 : public CProblem
{
	typedef CProblem super;
	
public:
	CP112();
	virtual ~CP112();

	virtual int nRun(int argc, const char * argv[]);

protected:

};

#endif