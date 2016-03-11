#pragma once

#include "problem.h"

class C73 : public CChallenge
{
	typedef CChallenge super;
	
public:
	C73() {};
	virtual ~C73() {};

	virtual int nRun(int argc, const char * argv[]);

protected:

	int nDecode(const string &p_str, int p_i);
};
