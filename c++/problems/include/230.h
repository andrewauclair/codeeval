#ifndef _CP230_H_
#define _CP230_H_

#include "problem.h"

class CP230 : public CProblem
{
	typedef CProblem super;
	
public:
	CP230();
	virtual ~CP230();

	virtual int nRun(int argc, const char * argv[]);

protected:

	void vBubbleSort(vector<int> &p_vector);
	void vSortTeams(vector<vector<int>> &p_aCountries, vector<int> &p_aTeams);
};

#endif
