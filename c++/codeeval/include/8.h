#ifndef _CP8_H_
#define _CP8_H_

#include "problem.h"

class CP8 : public CProblem
{
	typedef CProblem super;
	
public:
	CP8();
	virtual ~CP8();

	virtual int nRun(int argc, const char * argv[]);

protected:

};

#endif
