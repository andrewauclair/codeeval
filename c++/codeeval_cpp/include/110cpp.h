#pragma once

#include "problem.h"
#include <string>
using namespace std;

class C110 : public CChallenge
{
	typedef CChallenge super;
	
public:
	C110() {};
	virtual ~C110() {};

	virtual int nRun(int argc, const char * argv[]);

protected:

	bool fNumber(string p_str);
	bool fCount(string p_str);
	int nNumber(string p_str);
	int nCount(string p_str);
};
