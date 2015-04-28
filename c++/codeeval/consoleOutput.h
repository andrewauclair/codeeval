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
	bool fCompare(string p_strOne, string p_strTwo);
	void vSetPos(int p_x, int p_y);
	void vSetSize(int p_width, int p_height);
	void vClear();

private:
	void vSetIncorrectOut();
	void vSetCorrectOut();

	CConsoleLoggerEx console;
};

#endif
