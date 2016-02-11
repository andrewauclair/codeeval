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

	virtual int nRun(int argc, const char * argv[]);

protected:

	void vMorse(string p_str);
};

#endif
