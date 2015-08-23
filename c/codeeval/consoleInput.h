#ifndef _CONSOLE_INPUT_H_
#define _CONSOLE_INPUT_H_

#include "ConsoleLogger.h"
#include <string>
using namespace std;

class CConsoleInput
{
public:
	CConsoleInput();

	void cout(string p_str);
	void vSetPos(int p_x, int p_y);
	void vClear();

private:
	CConsoleLoggerEx console;
};

#endif
