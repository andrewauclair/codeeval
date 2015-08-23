#ifndef _CP193_H_
#define _CP193_H_

#include "problem.h"

class CP193 : public CProblem
{
	typedef CProblem super;
	
public:
	CP193();
	virtual ~CP193();

	virtual int nRun(int argc, const char * argv[]);

protected:

	bool fMagicNumber(int p_nNum);
};

#endif
