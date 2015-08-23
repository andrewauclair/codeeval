#ifndef _CP96_H_
#define _CP96_H_

#include "problem.h"

class CP96 : public CProblem
{
	typedef CProblem super;
	
public:
	CP96();
	virtual ~CP96();

	virtual int nRun(int argc, const char * argv[]);

protected:

};

#endif
