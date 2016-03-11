#pragma once

#include "problem.h"

class C15 : public CChallenge
{
	typedef CChallenge super;
	
public:
	C15() { m_fInputRequired = false; };
	virtual ~C15() {};

	virtual int nRun(int argc, const char * argv[]);

protected:

};
