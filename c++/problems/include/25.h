#ifndef _CP25_H_
#define _CP25_H_

#include "problem.h"

class CP25 : public CProblem
{
	typedef CProblem super;
	
public:
	CP25();
	virtual ~CP25();

	virtual int nRun(int argc, const char * argv[]);

protected:

};

#endif