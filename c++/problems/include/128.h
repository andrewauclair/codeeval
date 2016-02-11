#ifndef _CP128_H_
#define _CP128_H_

#include "problem.h"

class CP128 : public CProblem
{
	typedef CProblem super;
	
public:
	CP128();
	virtual ~CP128();

	virtual int nRun(int argc, const char * argv[]);

protected:

};

#endif
