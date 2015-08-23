#include <iostream>
#include <fstream>
#include <string>
#include <stack>
using namespace std;

#if _EDITOR

#include "68.h"

static const char * fsc_pChzName = "Valid Parentheses";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/68/";
static const int fsc_nNumber = 68;
static const bool fsc_fFinished = true;
static const EDifficulty fsc_eDifficulty = eDiff_Moderate;

CP68::CP68()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP68::~CP68()
{
}

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

		for (int t_i = 0; t_i < t_strInput.length(); ++t_i)
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
