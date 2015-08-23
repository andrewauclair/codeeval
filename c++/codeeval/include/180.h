#ifndef _CP180_H_
#define _CP180_H_

#include "problem.h"

class CP180 : public CProblem
{
	typedef CProblem super;
	
public:
	CP180();
	virtual ~CP180();

	virtual int nRun(int argc, const char * argv[]);

protected:

	void vBubbleSort(vector<char> &p_v1, vector<int> &p_v2);
};

#endif
