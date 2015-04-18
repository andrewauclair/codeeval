#include <iostream>
#include <assert.h>
#include <fstream>
#include <sstream>
#include <string>
#include <Windows.h>

#include "problems.h"

#include "consoleInput.h"
#include "consoleOutput.h"
#include "consolePerformance.h"

using namespace std;

void vCreateConsoles();
void vWriteConsoleStart();
void vWriteProblemInput(int p_nProblem);

HWND g_winHandle = NULL;
CConsoleInput * g_inputConsole = NULL;
CConsoleOutput * g_outputConsole = NULL;

int main()
{
	vCreateConsoles();

	

	

	// display some stats on the other consoles till we need them for other things

	// entered, solved, unsolved, total
	// easy, moderate, hard

	int t_nInput = 0;
	streambuf* t_coutStream = cout.rdbuf();
	ostringstream t_output;

	while (t_nInput != -1)
	{
		string t_strInput;

		cout << "Problem: ";
		
		cin >> t_nInput;

		cout << endl;
		assert(t_nInput < sizeof(g_apProblems));

		// clear the consoles
		g_inputConsole->vClear();
		g_outputConsole->vClear();
		
		if (g_apProblems[t_nInput - 1] != NULL)
		{
			vWriteProblemInput(t_nInput);

			cout.rdbuf(t_output.rdbuf());
			g_apProblems[t_nInput - 1]->vRun();
			cout.rdbuf(t_coutStream);
			
			stringstream t_ss;
			t_ss << t_nInput;
		
			ifstream t_file(t_ss.str() + "_out.txt");
			string t_strCompare = "";
			
			if (t_file.is_open())
			{
				t_file.seekg(0, ios::end);
				t_strCompare.reserve(t_file.tellg());
				t_file.seekg(0, ios::beg);

				t_strCompare.assign((istreambuf_iterator<char>(t_file)),
									 istreambuf_iterator<char>());
			}

			g_outputConsole->vCompare(t_output.str(), t_strCompare);
			t_output.str("");
		}
		else
		{
			cout << "This problem hasn't been added yet.";
		}

		cout << endl;
	}

	cin.get();
}

void vCreateConsoles()
{
	g_winHandle = GetConsoleWindow();
	RECT t_rect;
	GetWindowRect(g_winHandle, &t_rect);

	// create the consoles
	g_inputConsole = new CConsoleInput();
	g_outputConsole = new CConsoleOutput();
	//g_perfConsole = new CConsolePerformance();
	
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
	cout << "<code_eval> c++ solutions" << endl;

	// clear the consoles
	g_inputConsole->vClear();
	g_outputConsole->vClear();
}

void vWriteProblemInput(int p_nProblem)
{
	// read in the input file for this problem and send it to the input console window
	fstream t_file;
	stringstream t_ss;
	t_ss << p_nProblem;

	string t_strFile = t_ss.str() + ".txt";
			
	t_file.open(t_strFile.c_str(), ios::in);

	string t_str;

	if (t_file.is_open())
	{
		while (getline(t_file, t_str))
		{
			g_inputConsole->cout(t_str + "\n");
		}
	}
	else
	{
		g_inputConsole->cout("This problem has no input.");
	}

	t_ss.str("");
	t_file.close();
}
