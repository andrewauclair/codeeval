#ifndef _CP146_H_
#define _CP146_H_
#include "problem.h"
class CP146 : public CProblem
{
	typedef CProblem super;
	
public:
	CP146();
	virtual ~CP146();
	virtual void vRun();
protected:
	void vBubbleSort(vector<int> &p_vector);
};
#endif
