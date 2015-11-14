#include "console.h"

CConsole::CConsole()
{
	m_console.Create("Console");
}

CConsole::CConsole(string p_strTitle)
{
	m_console.Create(p_strTitle.c_str());
}

CConsole::~CConsole()
{
}

void CConsole::cout(string p_str)
{
	m_console.cprintf(p_str.c_str());
}

void CConsole::vSetPos(int p_x, int p_y)
{
	m_console.movexy(p_x, p_y);
}

void CConsole::vSetSize(int p_width, int p_height)
{
	m_console.setsize(p_width, p_height);
}

void CConsole::vClear()
{
	m_console.cls();
}
