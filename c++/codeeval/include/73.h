#ifndef _CP73_H_
#define _CP73_H_
#include "problem.h"
class CP73 : public CProblem
{
	typedef CProblem super;
	
public:
	CP73();
	virtual ~CP73();
	virtual void vRun();
protected:
	int nDecode(const string &p_str, int p_i);
};
#endif
