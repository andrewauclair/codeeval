#ifndef _CP62_H_
#define _CP62_H_

#include "problem.h"

class CP62 : public CProblem
{
	typedef CProblem super;
	
public:
	CP62();
	virtual ~CP62();

	virtual int nRun(int argc, const char * argv[]);

protected:

};

#endif