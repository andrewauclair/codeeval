#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#if _EDITOR

#include "40cpp.h"

int C40::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	string t_strInput;

	string t_str;

	while (getline(t_file, t_strInput))
	{
		int t_anCounts[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

		for (unsigned int t_i = 0; t_i < t_strInput.size(); ++t_i)
		{
			char t_ch = t_strInput[t_i];
			t_anCounts[atoi(&t_ch)]++;
		}
		bool t_fSelf = true;
		for (unsigned int t_i = 0; t_i < t_strInput.size(); ++t_i)
		{
			char t_ch = t_strInput[t_i];

			if (t_anCounts[t_i] != atoi(&t_ch))
			{
				t_fSelf = false;
				break;
			}
		}

		if (t_fSelf)
		{
			cout << "1" << endl;
		}
		else
		{
			cout << "0" << endl;
		}
	}

	t_file.close();

	return 0;
}
