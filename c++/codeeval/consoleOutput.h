#ifndef _CONSOLE_OUTPUT_H_
#define _CONSOLE_OUTPUT_H_

#include "console.h"
#include <string>
using namespace std;

class CConsoleOutput : public CConsole
{
	typedef CConsole super;

public:
	CConsoleOutput();

	bool fCompare(string p_strOne, string p_strTwo);
	
private:
	void vSetIncorrectOut();
	void vSetCorrectOut();
};

#endif
