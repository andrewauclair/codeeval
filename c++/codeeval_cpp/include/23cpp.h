#pragma once

#include "problem.h"

class CP23 : public CProblem
{
	typedef CProblem super;
	
public:
	CP23() { m_fInputRequired = false; };
	virtual ~CP23() {};

	virtual int nRun(int argc, const char * argv[]);

protected:

};
