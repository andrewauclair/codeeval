#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

#if _EDITOR

#include "116cpp.h"

void C116::vMorse(string p_str)
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

int C116::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	string t_strInput;

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

	return 0;
}
