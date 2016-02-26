#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

#if !_EDITOR
struct SNode
{
	int * m_node;
	SNode * m_connection;
	int m_costSoFar;
};
#endif

#if _EDITOR

#include "157cpp.h"

SNode * CP157::nodeSmallest(vector<SNode> &p_list)
#else
SNode * nodeSmallest(vector<SNode> &p_list)
#endif
{
	SNode * t_pLowest = &p_list[0];

	for (unsigned int t_i = 1; t_i < p_list.size(); ++t_i)
	{
		if (p_list[t_i].m_costSoFar < t_pLowest->m_costSoFar)
		{
			t_pLowest = &p_list[t_i];
		}
	}

	return t_pLowest;
}

#if _EDITOR
vector<SNode> CP157::getConnections(vector<vector<int>> &p_graph, SNode* p_pCurrent)
#else
vector<SNode> getConnections(vector<vector<int>> &p_graph, SNode* p_pCurrent)
#endif
{
	vector<SNode> t_aConnections = vector<SNode>();

	for (unsigned int t_y = 0; t_y < p_graph.size(); ++t_y)
	{
		for (unsigned int t_x = 0; t_x < p_graph[t_y].size(); ++t_x)
		{
			if (&p_graph[t_y][t_x] == p_pCurrent->m_node)
			{
				// create list of connections
				SNode t_node = SNode();
				t_node.m_connection = NULL;
				t_node.m_costSoFar = 0;

				if (t_y > 0 && t_x > 0)
				{
					t_node.m_node = &p_graph[t_y - 1][t_x - 1];
					t_aConnections.push_back(t_node);
				}

				if (t_y > 0)
				{
					t_node.m_node = &p_graph[t_y - 1][t_x];
					t_aConnections.push_back(t_node);
				}

				if (t_x > 0)
				{
					t_node.m_node = &p_graph[t_y][t_x - 1];
					t_aConnections.push_back(t_node);
				}

				if (t_y < p_graph.size() - 1 && t_x < p_graph[t_y].size() - 1)
				{
					t_node.m_node = &p_graph[t_y + 1][t_x + 1];
					t_aConnections.push_back(t_node);
				}

				if (t_y < p_graph.size() - 1)
				{
					t_node.m_node = &p_graph[t_y + 1][t_x];
					t_aConnections.push_back(t_node);
				}

				if (t_x < p_graph[t_y].size() - 1)
				{
					t_node.m_node = &p_graph[t_y][t_x + 1];
					t_aConnections.push_back(t_node);
				}

				if (t_y > 0 && t_x < p_graph[t_y].size() - 1)
				{
					t_node.m_node = &p_graph[t_y - 1][t_x + 1];
					t_aConnections.push_back(t_node);
				}

				if (t_y < p_graph.size() - 1 && t_x > 0)
				{
					t_node.m_node = &p_graph[t_y + 1][t_x - 1];
					t_aConnections.push_back(t_node);
				}
			}
		}
	}

	return t_aConnections;
}

#if _EDITOR
SNode * CP157::shortestPath(vector<vector<int>> &p_graph, int * p_pStart, int * p_pEnd)
#else
SNode * shortestPath(vector<vector<int>> &p_graph, int * p_pStart, int * p_pEnd)
#endif
{
	SNode t_start = SNode();
	t_start.m_node = p_pStart;
	t_start.m_connection = NULL;
	t_start.m_costSoFar = 0;

	vector<SNode> t_aOpen = vector<SNode>();
	vector<SNode> t_aClosed = vector<SNode>();

	t_aOpen.push_back(t_start);

	SNode * t_pCurrent = NULL;

	while (t_aOpen.size() > 0)
	{
		t_pCurrent = nodeSmallest(t_aOpen);

		if (t_pCurrent->m_node == p_pEnd)
		{
			break;
		}

		vector<SNode> t_aConnections = getConnections(p_graph, t_pCurrent);

		for (unsigned int t_i = 0; t_i < t_aConnections.size(); ++t_i)
		{
			SNode t_endNode = t_aConnections[t_i];

			int t_nEndCost = t_pCurrent->m_costSoFar + *t_endNode.m_node;
			bool t_fClosed = false;
			for (unsigned int t_j = 0; t_j < t_aClosed.size(); ++t_j)
			{
				if (t_aClosed[t_j].m_node == t_endNode.m_node)
				{
					t_fClosed = true;
				}
			}
			if (t_fClosed)continue;

			bool t_fOpen = false;
			bool t_fEndOpen = false;
			SNode t_endNodeRecord = SNode();
			
			for (unsigned int t_j = 0; t_j < t_aOpen.size(); ++t_j)
			{
				if (t_aOpen[t_j].m_node == t_endNode.m_node)
				{
					t_fOpen = true;
					t_endNodeRecord = t_aOpen[t_j];
				}
			}

			if (t_fOpen)
			{
				if (t_endNodeRecord.m_costSoFar <= t_nEndCost)
				{
					continue;
				}
			}
			else
			{
				t_endNodeRecord.m_connection = NULL;
				t_endNodeRecord.m_node = t_aConnections[t_i].m_node;
			}

			t_endNodeRecord.m_costSoFar = t_nEndCost;
			t_endNodeRecord.m_connection = &t_endNode;

			if (!t_fOpen)
			{
				t_aOpen.push_back(t_endNodeRecord);
			}
		}

	}

	return t_pCurrent;
}

#if _EDITOR

int CP157::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	string t_strInput;

	int t_cHighCost = 50000;

	vector<vector<int>> t_anCost = vector<vector<int>>();

	int t_y = 0;
	int* t_pStart = NULL;
	int* t_pEnd = NULL;

	while (getline(t_file, t_strInput))
	{
		t_anCost.push_back(vector<int>());
		
		for (unsigned int t_i = 0; t_i < t_strInput.length(); ++t_i)
		{
			if (t_strInput[t_i] == '*')
			{
				t_anCost[t_y][t_i] = t_cHighCost;
			}
			else
			{
				t_anCost[t_y][t_i] = 1;
			}

			if (t_strInput[t_i] == ' ' && t_y == 0)
			{
				t_pStart = &t_anCost[t_y][t_i];
			}
		}

		t_y++;
	}

	for (unsigned int t_i = 0; t_i < t_strInput.length(); ++t_i)
	{
		if (t_strInput[t_i] == ' ')
		{
			t_pEnd = &t_anCost[t_y][t_i];
			break;
		}
	}

	// find the path now

	t_file.close();

	return 0;
}
