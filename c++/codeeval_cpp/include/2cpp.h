#pragma once

#include "problem.h"
#include <vector>
using namespace std;

class C2 : public CChallenge
{
	typedef CChallenge super;

public:
	C2() {};
	virtual ~C2() {};

	virtual int nRun(int argc, const char * argv[]);

protected:

	void vSortAndPrint(vector<string> p_aryStrLines, int p_c);
};
