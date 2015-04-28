#ifndef _CP2_H_
#define _CP2_H_

#include "problem.h"
#include <vector>
using namespace std;

class CP2 : public CProblem
{
	typedef CProblem super;

public:
	CP2();
	virtual ~CP2();

	virtual void vRun();

protected:
	void vSortAndPrint(vector<string> p_aryStrLines, int p_c);
};

#endif
