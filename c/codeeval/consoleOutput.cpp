#include "consoleOutput.h"
#include <string>
#include <sstream>
using namespace std;

CConsoleOutput::CConsoleOutput()
{
	console.Create("Output");
}

void CConsoleOutput::cout(string p_str)
{
	console.printf(p_str.c_str());
}

bool CConsoleOutput::fCompare(string p_strOutput, string p_strExpected)
{
	bool t_fSame = true;
	istringstream out(p_strOutput);
	istringstream expected(p_strExpected);

	string t_strOut;
	string t_strExpected;

	while (getline(out, t_strOut, '\n'))
	{
		// trim output string
		size_t t_nLast = t_strOut.find_last_not_of(' ');
		t_strOut = t_strOut.substr(0, t_nLast + 1);

		bool t_fExpect;// = getline(expected, t_strExpected, '\n');

		for (int t_i = 0; t_i < t_strOut.length(); ++t_i)
		{
			if (t_i > t_strExpected.length() - 1 || !t_fExpect)
			{
				t_fSame = false;
				vSetIncorrectOut();
			}
			else if (t_strOut[t_i] == t_strExpected[t_i])
			{
				vSetCorrectOut();
			}
			else
			{
				t_fSame = false;
				vSetIncorrectOut();
			}

			cout(t_strOut.substr(t_i, 1));
		}

		cout("\n");
	}

	return t_fSame;
}

void CConsoleOutput::vSetPos(int p_x, int p_y)
{
	console.movexy(p_x, p_y);
}

void CConsoleOutput::vSetSize(int p_width, int p_height)
{
	console.setsize(p_width, p_height);
}

void CConsoleOutput::vClear()
{
	console.cls();
}

void CConsoleOutput::vSetIncorrectOut()
{
	console.SetCurrentColor(CConsoleLoggerEx::COLOR_WHITE | CConsoleLoggerEx::COLOR_BACKGROUND_RED);
}

void CConsoleOutput::vSetCorrectOut()
{
	console.SetCurrentColor(CConsoleLoggerEx::COLOR_WHITE | CConsoleLoggerEx::COLOR_BACKGROUND_BLACK);
}
