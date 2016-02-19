#ifndef _CP11_H_
#define _CP11_H_

#include "problem.h"

class CP11 : public CProblem
{
	typedef CProblem super;
	
public:
	CP11();
	virtual ~CP11();

	virtual int nRun(int argc, const char * argv[]);

protected:

};

#endif
