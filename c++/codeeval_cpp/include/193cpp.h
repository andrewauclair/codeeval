#pragma once

#include "problem.h"

class C193 : public CChallenge
{
	typedef CChallenge super;
	
public:
	C193() {};
	virtual ~C193() {};

	virtual int nRun(int argc, const char * argv[]);

protected:

	bool fMagicNumber(int p_nNum);
};
