#ifndef _CP24_H_
#define _CP24_H_

#include "problem.h"

class CP24 : public CProblem
{
	typedef CProblem super;
	
public:
	CP24();
	virtual ~CP24();

	virtual int nRun(int argc, const char * argv[]);

protected:

};

#endif