#ifndef _CP43_H_
#define _CP43_H_

#include "problem.h"

class CP43 : public CProblem
{
	typedef CProblem super;
	
public:
	CP43();
	virtual ~CP43();

	virtual int nRun(int argc, const char * argv[]);

protected:

	void vBubbleSort(vector<int> &p_vector);
};

#endif