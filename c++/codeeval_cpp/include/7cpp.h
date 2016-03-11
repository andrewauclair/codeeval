#pragma once

#include "problem.h"

class C7 : public CChallenge
{
	typedef CChallenge super;
	
public:
	C7() {};
	virtual ~C7() {};

	virtual int nRun(int argc, const char * argv[]);

protected:

	float rEval(std::vector<string>::iterator &p_it);
};
