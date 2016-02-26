#pragma once

#include "problem.h"

class CP73 : public CProblem
{
	typedef CProblem super;
	
public:
	CP73() {};
	virtual ~CP73() {};

	virtual int nRun(int argc, const char * argv[]);

protected:

	int nDecode(const string &p_str, int p_i);
};
