#pragma once

#include "problem.h"

class CP15 : public CProblem
{
	typedef CProblem super;
	
public:
	CP15() { m_fInputRequired = false; };
	virtual ~CP15() {};

	virtual int nRun(int argc, const char * argv[]);

protected:

};
