#ifndef _CP59_H_
#define _CP59_H_

#include "problem.h"

class CP59 : public CProblem
{
	typedef CProblem super;
	
public:
	CP59();
	virtual ~CP59();

	virtual int nRun(int argc, const char * argv[]);

protected:

	void vBubbleSort(vector<string> &p_vector);
};

#endif
