#pragma once

#include "problem.h"
#include <vector>
using namespace std;

class C124 : public CChallenge
{
	typedef CChallenge super;
	
public:
	C124() {};
	virtual ~C124() {};

	virtual int nRun(int argc, const char * argv[]);

protected:

	void vBubbleSort(vector<int> &p_vector);
};
