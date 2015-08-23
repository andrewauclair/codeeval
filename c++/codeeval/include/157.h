#ifndef _CP157_H_
#define _CP157_H_

#include "problem.h"
#include <vector>
using namespace std;

struct SNode
{
	int * m_node;
	SNode * m_connection;
	int m_costSoFar;
};

class CP157 : public CProblem
{
	typedef CProblem super;
	
public:
	CP157();
	virtual ~CP157();

	virtual int nRun(int argc, const char * argv[]);

protected:

	SNode * nodeSmallest(vector<SNode> &p_list);
	vector<SNode> getConnections(vector<vector<int>> &p_graph, SNode* p_pCurrent);
	SNode * shortestPath(vector<vector<int>> &p_graph, int * p_pStart, int * p_pEnd);
};

#endif
