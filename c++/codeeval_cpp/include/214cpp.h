#pragma once

#include "problem.h"
#include <string>
#include <vector>
using namespace std;

class C214 : public CChallenge
{
	typedef CChallenge super;
	
public:
	C214() {};
	virtual ~C214() {};

	virtual int nRun(int argc, const char * argv[]);

protected:
	void vBubbleSort(vector<string> &p_vector);
};
