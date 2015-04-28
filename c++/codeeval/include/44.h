#ifndef _CP44_H_
#define _CP44_H_

#include "problem.h"
#include <vector>
#include <string>
using namespace std;

class CP44 : public CProblem
{
	typedef CProblem super;
	
public:
	CP44();
	virtual ~CP44();
	virtual void vRun();
protected:
	void vBubbleSort(vector<string> &p_vector);
	vector<string> aryGetPermutations(string p_strNum);
};
#endif
