#ifndef _CP106_H_
#define _CP106_H_
#include "problem.h"
class CP106 : public CProblem
{
	typedef CProblem super;
	
public:
	CP106();
	virtual ~CP106();
	virtual void vRun();
protected:
	
	void vRomanNumeral(int p_nNum);
};
#endif