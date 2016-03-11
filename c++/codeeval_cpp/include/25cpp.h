#pragma once

#include "problem.h"

class C25 : public CChallenge
{
	typedef CChallenge super;
	
public:
	C25() { m_fInputRequired = false; };
	virtual ~C25() {};

	virtual int nRun(int argc, const char * argv[]);

protected:

};
