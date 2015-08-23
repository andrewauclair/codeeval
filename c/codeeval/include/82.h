#ifndef _CP82_H_
#define _CP82_H_
#include "problem.h"
class CP82 : public CProblem
{
	typedef CProblem super;
	
public:
	CP82();
	virtual ~CP82();
	virtual void vRun();
protected:
	int power(int p_x, int p_y);
};
#endif