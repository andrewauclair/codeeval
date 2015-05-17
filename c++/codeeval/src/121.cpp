#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#if _EDITOR

#include "121.h"

static const char * fsc_pChzName = "Lost in Translation";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/121/";
static const int fsc_nNumber = 121;
static const bool fsc_fFinished = true;
static const EDifficulty fsc_eDifficulty = eDiff_Med;

CP121::CP121()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP121::~CP121()
{
}

void CP121::vRun()
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file;
	string t_strInput;

#if _EDITOR
	t_file.open("in/121_in.txt", ios::in);
#else
	t_file.open(argv[1], ios::in);
#endif

	char t_aChars[27];// = char[27];

	t_aChars[0] = 'y'; //a
	t_aChars[1] = 'h'; //b
	t_aChars[2] = 'e'; //c
	t_aChars[3] = 's'; //d
	t_aChars[4] = 'o'; //e
	t_aChars[5] = 'c'; //f
	t_aChars[6] = 'v'; //g
	t_aChars[7] = 'x'; //h
	t_aChars[8] = 'd'; //i
	t_aChars[9] = 'u'; //j
	t_aChars[10] = 'i'; //k
	t_aChars[11] = 'g'; //l
	t_aChars[12] = 'l'; //m
	t_aChars[13] = 'b'; //n
	t_aChars[14] = 'k'; //o
	t_aChars[15] = 'r'; //p
	t_aChars[16] = 'z'; //q
	t_aChars[17] = 't'; //r
	t_aChars[18] = 'n'; //s
	t_aChars[19] = 'w'; //t
	t_aChars[20] = 'j'; //u
	t_aChars[21] = 'p'; //v
	t_aChars[22] = 'f'; //w
	t_aChars[23] = 'm'; //x
	t_aChars[24] = 'a'; //y
	t_aChars[25] = 'q'; //z

	int t_i = 0;

	while (getline(t_file, t_strInput))
	{
		int t_nLen = t_strInput.length();
		for (t_i = 0; t_i < t_nLen; ++t_i)
		{
			if (t_strInput[t_i] == ' ')
			{
				cout << " ";
			}
			else
			{
//				int t_nValue = (int)t_strInput[t_i];
				cout << t_aChars[t_strInput[t_i] - 97];
			}
		}
		cout << endl;
	}

	t_file.close();

#if !_EDITOR
	return 0;
#endif
}
