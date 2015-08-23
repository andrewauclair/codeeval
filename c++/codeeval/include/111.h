#ifndef _CP111_H_
#define _CP111_H_

#include "problem.h"

class CP111 : public CProblem
{
	typedef CProblem super;
	
public:
	CP111();
	virtual ~CP111();
	
	virtual int nRun(int argc, const char * argv[]);

protected:

};

#endif
