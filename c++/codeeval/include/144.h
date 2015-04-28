#ifndef _CP144_H_
#define _CP144_H_

#include "problem.h"

class CP144 : public CProblem
{
	typedef CProblem super;

public:
	CP144();
	virtual ~CP144();

	virtual void vRun();

protected:
	int nOnes(int p_nNum);
};

#endif
