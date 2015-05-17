#ifndef _CP14_H_
#define _CP14_H_
#include "problem.h"
#include <vector>
using namespace std;

class CP14 : public CProblem
{
	typedef CProblem super;
	
public:
	CP14();
	virtual ~CP14();
	virtual void vRun();
protected:
	void vBubbleSort(vector<string> &p_vector);
	vector<string> aryGetPermutations(string p_strNum);
};
#endif
