#include <iostream>
#include <fstream>
using namespace std;

#if _EDITOR

#include "67cpp.h"

int CP67::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	string t_strInput;

	int t_xHex = -1;

	while (!t_file.eof())
	{
		if (t_xHex != -1)
		{
			cout << endl;
		}

		t_file >> hex >> t_xHex;

		cout << t_xHex;
	}

	t_file.close();

	return 0;
}
