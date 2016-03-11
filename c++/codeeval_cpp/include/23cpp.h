#pragma once

#include "problem.h"

class C23 : public CChallenge
{
	typedef CChallenge super;
	
public:
	C23() { m_fInputRequired = false; };
	virtual ~C23() {};

	virtual int nRun(int argc, const char * argv[]);

protected:

};
