#pragma once

#include "problem.h"
#include <string>
using namespace std;

class C116 : public CChallenge
{
	typedef CChallenge super;
	
public:
	C116() {};
	virtual ~C116() {};

	virtual int nRun(int argc, const char * argv[]);

protected:

	void vMorse(string p_str);
};
