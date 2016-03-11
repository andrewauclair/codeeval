#pragma once

#include "problem.h"
#include <string>
using namespace std;

class C184 : public CChallenge
{
	typedef CChallenge super;
	
public:
	C184() {};
	virtual ~C184() {};

	virtual int nRun(int argc, const char * argv[]);

protected:

	void vBubbleSort(vector<string> &p_vector);
	string strDecodeBWT(string p_str);
};
