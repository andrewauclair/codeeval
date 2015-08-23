#include "consolePerformance.h"

CConsolePerformance::CConsolePerformance()
{
	console.Create("Performance");
}

void CConsolePerformance::cout(string p_str)
{
	console.cprintf(p_str.c_str());
}

void CConsolePerformance::vSetPos(int p_x, int p_y)
{
	console.movexy(p_x, p_y);
}

void CConsolePerformance::vClear()
{
	console.cls();
}
