#include <iostream>
#include "problems_cpp.h"
using namespace std;

int main(int argc, const char* argv[])
{
	if (argc >= 3)
	{
		int t_nProblem = atoi(argv[2]);
		g_apProblems[t_nProblem - 1]->nRun(argc, argv);
	}
	return 0;
}
