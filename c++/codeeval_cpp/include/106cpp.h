#pragma once

#include "problem.h"

class C106 : public CChallenge
{
	typedef CChallenge super;
	
public:
	C106() {};
	virtual ~C106() {};

	virtual int nRun(int argc, const char * argv[]);

protected:
	
	void vRomanNumeral(int p_nNum);
};
