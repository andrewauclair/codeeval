#ifndef _CP116_H_
#define _CP116_H_

#include "problem.h"
#include <string>
using namespace std;

class CP116 : public CProblem
{
	typedef CProblem super;
	
public:
	CP116();
	virtual ~CP116();
	virtual void vRun();
protected:

	void vMorse(string p_str);
};
#endif
