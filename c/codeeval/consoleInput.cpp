#include "consoleInput.h"

CConsoleInput::CConsoleInput()
{
	console.Create("Input");
}

void CConsoleInput::cout(string p_str)
{
	console.printf(p_str.c_str());
}

void CConsoleInput::vSetPos(int p_x, int p_y)
{
	console.movexy(p_x, p_y);
}

void CConsoleInput::vClear()
{
	console.cls();
}
