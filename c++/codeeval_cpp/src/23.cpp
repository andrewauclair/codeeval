#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

#if _EDITOR

#include "23cpp.h"

static const bool fsc_fFinished = true;

int CP23::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	for (int t_i = 1; t_i <= 12; ++t_i)
	{
		if (t_i > 1) cout << endl;

		cout << setw(0) << setfill(' ') << t_i;

		for (int t_j = 2; t_j <= 12; ++t_j)
		{
			cout << setw(4) << t_i * t_j; 
		}
	}

	return 0;
}
