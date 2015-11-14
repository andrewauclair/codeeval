#include <iostream>
#include <assert.h>
#include <fstream>
#include <sstream>
#include <string>
#include <Windows.h>

#include "problems.h"
#include "commands.h"
#include "globals.h"

using namespace std;

void vCreateConsoles();
void vWriteConsoleStart();

void vSwapCases(char * p_aString)
{
	for (int t_i = 0; t_i < strlen(p_aString); ++t_i)
	{

	}
}
int main()
{
	char * t_aString = "Andrew Auclair";

	vSwapCases(t_aString);

	cout << t_aString << endl;





















	vCreateConsoles();

	vWriteConsoleStart();
	
	// display some stats on the other consoles till we need them for other things
	
	// entered, solved, unsolved, total
	// easy, moderate, hard
	string t_strInput;

	while (true)
	{
		cout << " : ";
		
		getline(cin, t_strInput);

		istringstream line(t_strInput);
		vector<string> t_aArgs = vector<string>();
		string t_str;

		while (getline(line, t_str, ' '))
		{
			t_aArgs.push_back(t_str);
		}

		for (int t_i = 0; t_i < gsc_cCommands; ++t_i)
		{
			if (g_apCommands[t_i]->strCmd().compare(t_aArgs[0]) == 0)
			{
				g_apCommands[t_i]->vRun(t_aArgs);
			}
		}

		if (t_aArgs[0].compare("exit") == 0)
		{
			return 0;
		}
	}
}

void vCreateConsoles()
{
	g_winHandle = GetConsoleWindow();
	RECT t_rect;
	GetWindowRect(g_winHandle, &t_rect);

	// create the consoles
	g_inputConsole = new CConsole("Input");
	g_outputConsole = new CConsoleOutput();
	//g_perfConsole = new CConsolePerformance();
	
	// set up the window sizes we want
	int t_nScreenWidth = GetSystemMetrics(SM_CXSCREEN);
	int t_nScreenHeight = GetSystemMetrics(SM_CYSCREEN);

	int t_nConsoleWidth = t_rect.right - t_rect.left;
	int t_nConsoleHeight = t_rect.bottom - t_rect.top;

	int t_x = (t_nScreenWidth / 2 - t_nConsoleWidth);
	int t_y = (t_nScreenHeight / 2 - t_nConsoleHeight);

	SetWindowPos(g_winHandle, 0, t_x, t_y, 0, 0, SWP_NOZORDER | SWP_NOSIZE);

	// position the consoles
	g_inputConsole->vSetPos(t_x, t_y + t_nConsoleHeight);
	g_outputConsole->vSetPos(t_x + t_nConsoleWidth, t_y);
	
	g_outputConsole->vSetSize(t_nConsoleWidth, t_nConsoleHeight * 2);

	// give the main console control again
	BOOL t_bool = SetForegroundWindow(g_winHandle);
}

void vWriteConsoleStart()
{
	cout << "<code_eval> c++ code_eval solutions - Andrew Auclair - Game Programmer" << endl << endl;

	// clear the consoles
	g_inputConsole->vClear();
	g_outputConsole->vClear();
}
