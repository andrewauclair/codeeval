#ifndef _CP191_H_
#define _CP191_H_

#include "problem.h"

class CP191 : public CProblem
{
	typedef CProblem super;
	
public:
	CP191();
	virtual ~CP191();

	virtual int nRun(int argc, const char * argv[]);

protected:

};

#endif