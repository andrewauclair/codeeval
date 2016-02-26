#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#if _EDITOR

#include "73cpp.h"

int CP73::nDecode(const string &p_str, int p_i)
#else
int nDecode(const string &p_str, int p_i)
#endif
{
	int t_c = 0;

	if ((unsigned int)p_i >= p_str.length())
	{
		return 1;
	}

	int t_n = p_str[p_i] - '0';

	if (t_n == 0)
	{
		return 0;
	}
	else if (t_n == 1)
	{
		t_c = nDecode(p_str, p_i + 1);

		if ((unsigned int)p_i + 1 < p_str.length())
		{
			t_c += nDecode(p_str, p_i + 2);
		}
		return t_c;
	}
	else if (t_n == 2)
	{
		t_c = nDecode(p_str, p_i + 1);

		if ((unsigned int)p_i + 1 < p_str.length())
		{
			t_n = p_str[p_i + 1] - '0';

			if (t_n <= 6)
			{
				t_c += nDecode(p_str, p_i + 2);
			}
		}

		return t_c;
	}
	else if (t_n >= 3 && t_n <= 9)
	{
		return nDecode(p_str, p_i + 1);
	}

	// Should never happen
	return 0;
}

#if _EDITOR

int CP73::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	string t_strInput;

	while (getline(t_file, t_strInput))
	{
		cout << nDecode(t_strInput, 0) << endl;
	}

	t_file.close();

	return 0;
}
