#ifndef _CONSOLE_H_
#define _CONSOLE_H_

#include "ConsoleLogger.h"
#include <string>
using namespace std;

class CConsole
{
public:
	CConsole();
	CConsole(string p_strTitle);

	virtual ~CConsole();

	void cout(string p_str);
	
	void vSetPos(int p_x, int p_y);
	void vSetSize(int p_nWidth, int p_nHeight);

	void vClear();

	void vSetCurrentColor(DWORD p_color);

private:
	CConsoleLoggerEx m_console;
};

#endif
