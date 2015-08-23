#ifndef _CPPROBLEM_NUMBER_H_
#define _CPPROBLEM_NUMBER_H_

#include "problem.h"

class CPPROBLEM_NUMBER : public CProblem
{
	typedef CProblem super;
	
public:
	CPPROBLEM_NUMBER();
	virtual ~CPPROBLEM_NUMBER();

	virtual int nRun(int argc, const char * argv[]);

protected:

};

#endif
