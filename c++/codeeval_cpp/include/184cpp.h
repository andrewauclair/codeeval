#pragma once

#include "problem.h"
#include <string>
using namespace std;

class CP184 : public CProblem
{
	typedef CProblem super;
	
public:
	CP184() {};
	virtual ~CP184() {};

	virtual int nRun(int argc, const char * argv[]);

protected:

	void vBubbleSort(vector<string> &p_vector);
	string strDecodeBWT(string p_str);
};