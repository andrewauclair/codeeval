#ifndef _CP79_H_
#define _CP79_H_

#include "problem.h"
#include <vector>
using namespace std;

class CP79 : public CProblem
{
	typedef CProblem super;
	
public:
	CP79();
	virtual ~CP79();

	virtual int nRun(int argc, const char * argv[]);

protected:

	void vPrintPos(int p_nPos);

	vector<char> m_aryPositions;
	int m_nX;
	int m_nY;
};

#endif
