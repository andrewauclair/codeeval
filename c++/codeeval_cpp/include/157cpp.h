#pragma once

#include "problem.h"
#include <vector>
using namespace std;

struct SNode
{
	int * m_node;
	SNode * m_connection;
	int m_costSoFar;
};

class C157 : public CChallenge
{
	typedef CChallenge super;
	
public:
	C157() {};
	virtual ~C157() {};

	virtual int nRun(int argc, const char * argv[]);

protected:

	SNode * nodeSmallest(vector<SNode> &p_list);
	vector<SNode> getConnections(vector<vector<int>> &p_graph, SNode* p_pCurrent);
	SNode * shortestPath(vector<vector<int>> &p_graph, int * p_pStart, int * p_pEnd);
};
