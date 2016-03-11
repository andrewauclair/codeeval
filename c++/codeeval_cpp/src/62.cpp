#include <iostream>
#include <fstream>
using namespace std;

#if _EDITOR

#include "62cpp.h"

int C62::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	string t_strInput;

	int t_nN = 0;
	int t_nM = 0;
	char t_junk;

	while (!t_file.eof())
	{
		t_file >> t_nN >> t_junk >> t_nM;

		cout << t_nN - ((t_nN / t_nM) * t_nM) << endl;
	}

	t_file.close();

	return 0;
}
