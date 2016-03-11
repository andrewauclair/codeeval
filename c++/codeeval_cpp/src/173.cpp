#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#if _EDITOR

#include "173cpp.h"

int C173::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	string t_strInput;

	while (getline(t_file, t_strInput))
	{
		for (unsigned int t_i = 0; t_i < t_strInput.length() - 1; ++t_i)
		{
			if (t_strInput[t_i + 1] == t_strInput[t_i])
			{
				t_strInput.erase(t_i + 1, 1);
				t_i--;
			}
		}

		cout << t_strInput << endl;
	}

	t_file.close();

	return 0;
}
