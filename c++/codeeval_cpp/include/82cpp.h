#pragma once

#include "problem.h"

class C82 : public CChallenge
{
	typedef CChallenge super;
	
public:
	C82() {};
	virtual ~C82() {};

	virtual int nRun(int argc, const char * argv[]);

protected:

	int power(int p_x, int p_y);
};
