#ifndef _CP124_H_
#define _CP124_H_

#include "problem.h"
#include <vector>
using namespace std;

class CP124 : public CProblem
{
	typedef CProblem super;
	
public:
	CP124();
	virtual ~CP124();

	virtual int nRun(int argc, const char * argv[]);

protected:

	void vBubbleSort(vector<int> &p_vector);
};

#endif
