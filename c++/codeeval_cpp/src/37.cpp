#include <iostream>
#include <fstream>
#include <string>
#include <locale>
using namespace std;

#if _EDITOR

#include "37cpp.h"

int C37::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	string t_strInput;

	std::locale loc;

	while (getline(t_file, t_strInput))
	{
		// convert it to lower so we don't care
		for (string::size_type t_i = 0; t_i < t_strInput.length(); ++t_i)
		{
			t_strInput[t_i] = tolower(t_strInput[t_i], loc);
		}

		string t_strMissing = "";

		for (int t_i = 'a' + 0; t_i <= 'z' + 0; ++t_i)
		{
			char t_ch = (char)t_i;

			if (t_strInput.find_first_of(t_ch) == -1)
			{
				t_strMissing += t_ch;
			}
		}

		if (t_strMissing.compare("") == 0)
		{
			cout << "NULL" << endl;
		}
		else
		{
			cout << t_strMissing << endl;
		}
	}

	t_file.close();

	return 0;
}
