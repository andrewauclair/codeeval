#ifndef _CP103_H_
#define _CP103_H_

#include "problem.h"

class CP103 : public CProblem
{
	typedef CProblem super;
	
public:
	CP103();
	virtual ~CP103();

	virtual int nRun(int argc, const char * argv[]);

protected:

};

#endif
