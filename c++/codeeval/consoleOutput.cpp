#include "consoleOutput.h"

CConsoleOutput::CConsoleOutput()
{
	console.Create("Output");
}

void CConsoleOutput::cout(string p_str)
{
	console.cprintf(p_str.c_str());
}

void CConsoleOutput::vCompare(string p_strOutput, string p_strExpected)
{
	DWORD t_curColor = console.GetCurrentColor();

	for (int t_i = 0; t_i < p_strOutput.length() - 1; ++t_i)
	{
		if (t_i > p_strExpected.length() - 1 )
		{
		}
		else if (p_strOutput[t_i] == p_strExpected[t_i] && t_curColor == CConsoleLoggerEx::COLOR_WHITE | CConsoleLoggerEx::COLOR_BACKGROUND_RED)
		{
			t_curColor = CConsoleLoggerEx::COLOR_WHITE | CConsoleLoggerEx::COLOR_BACKGROUND_BLACK;
			console.SetCurrentColor(t_curColor);
		}
		else if (p_strOutput[t_i] != p_strExpected[t_i] && t_curColor == CConsoleLoggerEx::COLOR_WHITE | CConsoleLoggerEx::COLOR_BACKGROUND_BLACK)
		{
			t_curColor = CConsoleLoggerEx::COLOR_WHITE | CConsoleLoggerEx::COLOR_BACKGROUND_RED;
			console.SetCurrentColor(t_curColor);
		}

		cout(p_strOutput.substr(t_i, 1));
	}
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
