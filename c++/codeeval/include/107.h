#ifndef _CP107_H_
#define _CP107_H_

#include "problem.h"

class CP107 : public CProblem
{
	typedef CProblem super;
	
public:
	CP107();
	virtual ~CP107();

	virtual int nRun(int argc, const char * argv[]);

protected:

};

#endif