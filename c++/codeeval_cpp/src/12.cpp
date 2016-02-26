#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;

#if _EDITOR

#include "12cpp.h"

int CP12::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	string t_strInput;

	while (getline(t_file, t_strInput))
	{
		for (unsigned int t_i = 0; t_i < t_strInput.length(); ++t_i)
		{
			size_t t_c = count(t_strInput.begin(), t_strInput.end(), t_strInput[t_i]);

			if (t_c > 1)
			{
				char t_char = t_strInput[t_i];
				t_strInput.erase(remove(t_strInput.begin(), t_strInput.end(), t_char), t_strInput.end());
				t_i = 0;
			}
		}

		cout << t_strInput[0] << endl;
	}

	t_file.close();

	return 0;
}
