#pragma once

#include "problem.h"
#include <vector>
using namespace std;

class C79 : public CChallenge
{
	typedef CChallenge super;
	
public:
	C79() {};
	virtual ~C79() {};

	virtual int nRun(int argc, const char * argv[]);

protected:

	void vPrintPos(int p_nPos);

	vector<char> m_aryPositions;
	int m_nX;
	int m_nY;
};
