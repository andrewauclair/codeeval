#ifndef _CP196_H_
#define _CP196_H_

#include "problem.h"

class CP196 : public CProblem
{
	typedef CProblem super;
	
public:
	CP196();
	virtual ~CP196();

	virtual int nRun(int argc, const char * argv[]);

protected:

};

#endif