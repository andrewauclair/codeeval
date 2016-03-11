#pragma once

#include "problem.h"

class C39 : public CChallenge
{
	typedef CChallenge super;
	
public:
	C39() {};
	virtual ~C39() {};

	virtual int nRun(int argc, const char * argv[]);

protected:

	int nNext(int p_nNum);
};
