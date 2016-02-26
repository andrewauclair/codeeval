#pragma once

#include "problem.h"

class CP25 : public CProblem
{
	typedef CProblem super;
	
public:
	CP25() { m_fInputRequired = false; };
	virtual ~CP25() {};

	virtual int nRun(int argc, const char * argv[]);

protected:

};
