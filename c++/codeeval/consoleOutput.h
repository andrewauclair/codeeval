#ifndef _CONSOLE_OUTPUT_H_
#define _CONSOLE_OUTPUT_H_

#include "ConsoleLogger.h"
#include <string>
using namespace std;

class CConsoleOutput
{
public:
	CConsoleOutput();

	void cout(string p_str);
	void vSetPos(int p_x, int p_y);

private:
	CConsoleLoggerEx console;
};

#endif
