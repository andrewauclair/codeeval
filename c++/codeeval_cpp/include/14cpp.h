#pragma once

#include "problem.h"
#include <vector>
using namespace std;

class C14 : public CChallenge
{
	typedef CChallenge super;
	
public:
	C14() {};
	virtual ~C14() {};

	virtual int nRun(int argc, const char * argv[]);

protected:

	void vBubbleSort(vector<string> &p_vector);
	vector<string> aryGetPermutations(string p_strNum);
};
