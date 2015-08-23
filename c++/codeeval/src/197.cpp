#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#if _EDITOR

#include "197.h"

static const char * fsc_pChzName = "Column Names";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/197/";
static const int fsc_nNumber = 197;
static const bool fsc_fFinished = true;
static const EDifficulty fsc_eDifficulty = eDiff_Moderate;

CP197::CP197()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP197::~CP197()
{
}

int CP197::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	string t_strInput;

    while (getline(t_file, t_strInput))
    {
        int n1 = atoi(t_strInput.c_str()) - 1;
        int n2 = (n1 / 26) - 1;
		int n3 = (n1 / (26 * 26)) - 1;

        int p1 = n3 % 26;
        int p2 = n2 % 26;
        int p3 = n1 % 26;
        
        if (n1 > 702)
        {
            cout << (char)(p1 + 65);
        }
        
        if (n1 > 26 - 1)
        {
            cout << (char)(p2 + 65);
        }
        
        cout << (char)(p3 + 65) << endl;
    }

	t_file.close();

	return 0;
}
