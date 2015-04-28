#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

#if _EDITOR

#include "116.h"

void CP116::vMorse(string p_str)
#else
void vMorse(string p_str)
#endif
{
	if (p_str.compare(".-") == 0)
	{
		cout << "A";
	}
	else if (p_str.compare("-...") == 0)
	{
		cout << "B";
	}
	else if (p_str.compare("-.-.") == 0)
	{
		cout << "C";
	}
	else if (p_str.compare("-..") == 0)
	{
		cout << "D";
	}
	else if (p_str.compare(".") == 0)
	{
		cout << "E";
	}
	else if (p_str.compare("..-.") == 0)
	{
		cout << "F";
	}
	else if (p_str.compare("--.") == 0)
	{
		cout << "G";
	}
	else if (p_str.compare("....") == 0)
	{
		cout << "H";
	}
	else if (p_str.compare("..") == 0)
	{
		cout << "I";
	}
	else if (p_str.compare(".---") == 0)
	{
		cout << "J";
	}
	else if (p_str.compare("-.-") == 0)
	{
		cout << "K";
	}
	else if (p_str.compare(".-..") == 0)
	{
		cout << "L";
	}
	else if (p_str.compare("--") == 0)
	{
		cout << "M";
	}
	else if (p_str.compare("-.") == 0)
	{
		cout << "N";
	}
	else if (p_str.compare("---") == 0)
	{
		cout << "O";
	}
	else if (p_str.compare(".--.") == 0)
	{
		cout << "P";
	}
	else if (p_str.compare("--.-") == 0)
	{
		cout << "Q";
	}
	else if (p_str.compare(".-.") == 0)
	{
		cout << "R";
	}
	else if (p_str.compare("...") == 0)
	{
		cout << "S";
	}
	else if (p_str.compare("-") == 0)
	{
		cout << "T";
	}
	else if (p_str.compare("..-") == 0)
	{
		cout << "U";
	}
	else if (p_str.compare("...-") == 0)
	{
		cout << "V";
	}
	else if (p_str.compare(".--") == 0)
	{
		cout << "W";
	}
	else if (p_str.compare("-..-") == 0)
	{
		cout << "X";
	}
	else if (p_str.compare("-.--") == 0)
	{
		cout << "Y";
	}
	else if (p_str.compare("--..") == 0)
	{
		cout << "Z";
	}
	else if (p_str.compare("-----") == 0)
	{
		cout << "0";
	}
	else if (p_str.compare(".----") == 0)
	{
		cout << "1";
	}
	else if (p_str.compare("..---") == 0)
	{
		cout << "2";
	}
	else if (p_str.compare("...--") == 0)
	{
		cout << "3";
	}
	else if (p_str.compare("....-") == 0)
	{
		cout << "4";
	}
	else if (p_str.compare(".....") == 0)
	{
		cout << "5";
	}
	else if (p_str.compare("-....") == 0)
	{
		cout << "6";
	}
	else if (p_str.compare("--...") == 0)
	{
		cout << "7";
	}
	else if (p_str.compare("---..") == 0)
	{
		cout << "8";
	}
	else if (p_str.compare("----.") == 0)
	{
		cout << "9";
	}
	else if (p_str.compare("") == 0)
	{
		cout << " ";
	}
}

#if _EDITOR
static const char * fsc_pChzName = "Morse Code";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/116/";
static const int fsc_nNumber = 116;
static const bool fsc_fFinished = true;
static const EDifficulty fsc_eDifficulty = eDiff_Easy;

CP116::CP116()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP116::~CP116()
{
}

void CP116::vRun()
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file;
	string t_strInput;

#if _EDITOR
	t_file.open("in/116_in.txt", ios::in);
#else
	t_file.open(argv[1], ios::in);
#endif

	int t_nValue = 0;

	while (!t_file.eof())
	{
		// string
		getline(t_file, t_strInput);

		istringstream line(t_strInput);

		int loop = 0;
		while (getline(line, t_strInput, ' '))
		{
			vMorse(t_strInput);
		}

		cout << endl;
	}

	t_file.close();

#if !_EDITOR
	return 0;
#endif
}
