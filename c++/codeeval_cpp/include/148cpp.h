#pragma once

#include "problem.h"

class C148 : public CChallenge
{
	typedef CChallenge super;
	
public:
	C148() {};
	virtual ~C148() {};

	virtual int nRun(int argc, const char * argv[]);

protected:

	float hue2rgb(float p, float q, float t);
};
