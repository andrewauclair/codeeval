#ifndef _CP54_H_
#define _CP54_H_

#include "problem.h"

class CP54 : public CProblem
{
	typedef CProblem super;
	
public:
	CP54();
	virtual ~CP54();

	virtual int nRun(int argc, const char * argv[]);

protected:

};

#endif