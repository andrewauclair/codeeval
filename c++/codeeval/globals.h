#ifndef _GLOBALS_H_
#define _GLOBALS_H_

#include "consoleInput.h"
#include "consoleOutput.h"
#include "consolePerformance.h"

#include <Windows.h>

extern HWND g_winHandle;
extern CConsoleInput * g_inputConsole;
extern CConsoleOutput * g_outputConsole;
extern streambuf* g_origCoutStream;

#endif
