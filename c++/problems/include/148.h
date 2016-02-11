#ifndef _CP148_H_
#define _CP148_H_

#include "problem.h"

class CP148 : public CProblem
{
	typedef CProblem super;
	
public:
	CP148();
	virtual ~CP148();

	virtual int nRun(int argc, const char * argv[]);

protected:

	float hue2rgb(float p, float q, float t);
};

#endif
