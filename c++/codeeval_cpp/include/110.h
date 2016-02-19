#ifndef _CP110_H_
#define _CP110_H_

#include "problem.h"
#include <string>
using namespace std;

class CP110 : public CProblem
{
	typedef CProblem super;
	
public:
	CP110();
	virtual ~CP110();

	virtual int nRun(int argc, const char * argv[]);

protected:

	bool fNumber(string p_str);
	bool fCount(string p_str);
	int nNumber(string p_str);
	int nCount(string p_str);
};

#endif
