#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

#if _EDITOR

#include "199cpp.h"

int CP199::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	string t_strInput;

	string t_strWord;
	string t_strBinary;

	while (getline(t_file, t_strInput))
	{
		stringstream t_line(t_strInput);

		getline(t_line, t_strWord, ' ');
		getline(t_line, t_strBinary, ' ');

		for (unsigned int t_i = 0; t_i < t_strWord.length(); ++t_i)
		{
			if (t_strBinary[t_i] == '1')
			{
				cout << (char)(t_strWord[t_i] - 32);
			}
			else
			{
				cout << t_strWord[t_i];
			}
		}

		cout << endl;
	}

	t_file.close();

	return 0;
}
