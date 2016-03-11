#pragma once

#include "problem.h"
#include <vector>
#include <string>
using namespace std;

class C44 : public CChallenge
{
	typedef CChallenge super;
	
public:
	C44() {};
	virtual ~C44() {};

	virtual int nRun(int argc, const char * argv[]);

protected:

	void vBubbleSort(vector<string> &p_vector);
	vector<string> aryGetPermutations(string p_strNum);
};
