#ifndef _CP4_H_
#define _CP4_H_

#include "problem.h"

class CP4 : public CProblem
{
	typedef CProblem super;
	
public:
	CP4();
	virtual ~CP4();

	virtual int nRun(int argc, const char * argv[]);

protected:

};

#endif
