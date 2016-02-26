#include <iostream>
#include <fstream>
#include <string>
#include <stack>
using namespace std;

#if _EDITOR

#include "68cpp.h"

int CP68::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	string t_strInput;

	string t_str;
	string t_strDate;
	string t_strMonth;
	string t_strYear;

	while (getline(t_file, t_strInput))
	{
		stack<char> t_aryChStack = stack<char>();

		bool t_fValid = true;

		for (unsigned int t_i = 0; t_i < t_strInput.length(); ++t_i)
		{
			if (t_strInput[t_i] == '(' || t_strInput[t_i] == '[' || t_strInput[t_i] == '{')
			{
				t_aryChStack.push(t_strInput[t_i]);
			}
			else if (t_strInput[t_i] == ')')
			{
				if (t_aryChStack.size() > 0 && t_aryChStack.top() == '(')
				{
					t_aryChStack.pop();
				}
				else
				{
					t_fValid = false;
				}
			}
			else if (t_strInput[t_i] == ']')
			{
				if (t_aryChStack.size() > 0 && t_aryChStack.top() == '[')
				{
					t_aryChStack.pop();
				}
				else
				{
					t_fValid = false;
				}
			}
			else if (t_strInput[t_i] == '}')
			{
				if (t_aryChStack.size() > 0 && t_aryChStack.top() == '{')
				{
					t_aryChStack.pop();
				}
				else
				{
					t_fValid = false;
				}
			}
		}

		if (t_aryChStack.size() > 0)
		{
			t_fValid = false;
		}

		if (t_fValid)
		{
			cout << "True" << endl;
		}
		else
		{
			cout << "False" << endl;
		}
	}

	t_file.close();

	return 0;
}
