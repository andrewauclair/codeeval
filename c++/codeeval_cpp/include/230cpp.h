#pragma once

#include "problem.h"

class C230 : public CChallenge
{
	typedef CChallenge super;
	
public:
	C230() {};
	virtual ~C230() {};

	virtual int nRun(int argc, const char * argv[]);

protected:

	void vBubbleSort(vector<int> &p_vector);
	void vSortTeams(vector<vector<int>> &p_aCountries, vector<int> &p_aTeams);
};
