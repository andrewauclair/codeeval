#ifndef _CP5_H_
#define _CP5_H_

#include "problem.h"

class CP5 : public CProblem
{
	typedef CProblem super;
	
public:
	CP5();
	virtual ~CP5();

	virtual int nRun(int argc, const char * argv[]);

protected:

};

#endif
