#ifndef _CP235_H_
#define _CP235_H_

#include "problem.h"

class CP235 : public CProblem
{
	typedef CProblem super;
	
public:
	CP235();
	virtual ~CP235();

	virtual int nRun(int argc, const char * argv[]);

protected:

};

#endif
