#ifndef _CP211_H_
#define _CP211_H_

#include "problem.h"

class CP211 : public CProblem
{
	typedef CProblem super;
	
public:
	CP211();
	virtual ~CP211();

	virtual int nRun(int argc, const char * argv[]);

protected:

};

#endif
