#pragma once

#include "problem.h"
#include <vector>
using namespace std;

class C158 : public CChallenge
{
	typedef CChallenge super;
	
public:
	C158() {};
	virtual ~C158() {};

	virtual int nRun(int argc, const char * argv[]);

protected:

	void vBubbleSort(vector<int> &p_vector, int p_cLoops);
};
