#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

#if _EDITOR

#include "57.h"

static const char * fsc_pChzName = "Spiral Printing";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/57/";
static const int fsc_nNumber = 57;
static const bool fsc_fFinished = true;
static const EDifficulty fsc_eDifficulty = eDiff_Hard;

CP57::CP57()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP57::~CP57()
{
}

int CP57::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	string t_strInput;

	int t_nX = 0;
	int t_nY = 0;

	int t_nXOffset = 0;
	int t_nYOffset = 0;

	int t_nXLength = 0;
	int t_nYLength = 0;

	int t_nNumVisited = 0;
	int t_nProblems = 0;

	while (!t_file.eof())
	{
		vector<string> t_aryValues = vector<string>();

		string t_strInput;
		string t_str;

		getline(t_file, t_strInput);
		
		istringstream line(t_strInput);

		getline(line, t_str, ';');
		t_nY = atoi(t_str.c_str());
		getline(line, t_str, ';');
		t_nX = atoi(t_str.c_str());

		if (t_nY == 0 || t_nX == 0)
		{
			break;
		}
			
		

		char t_chValue = 0;
		t_nNumVisited = 0;

		while (getline(line, t_str, ' '))
		{
			t_aryValues.push_back(t_str);
		}

		if (t_nProblems > 0)
		{
			cout << endl;
		}

		t_nProblems++;

		cout << t_aryValues[0];
		t_nNumVisited++;

		// do the outside loop around
		for (int t_i = 1; t_i < t_nX; ++t_i)
		{
			cout << " " << t_aryValues[t_i];
			t_nNumVisited++;
		}

		// loop for the rest of it
		t_nXOffset = 0;
		t_nYOffset = 0;

		t_nXLength = t_nX - 1;
		t_nYLength = t_nY - 1;

		// spiral rest of matrix
		while (t_nNumVisited < t_nX * t_nY)
		{
			// go down
			for (int t_i = t_nYOffset; t_i < t_nYLength; ++t_i)
			{
				cout << " " << t_aryValues[((t_i + 1) * t_nX) + t_nXLength];
				t_nNumVisited++;
			}

			if (t_nYOffset >= t_nYLength)
			{
				break;
			}

			// go left
			for (int t_i = t_nXLength; t_i > t_nXOffset; --t_i)
			{
				cout << " " << t_aryValues[(t_nYLength * t_nX) + (t_i - 1)];
				t_nNumVisited++;
			}

			if (t_nXLength <= t_nXOffset)
			{
				break;
			}

			t_nXOffset++;
			t_nYOffset++;
			
			// go up
			for (int t_i = t_nYLength; t_i > t_nYOffset; --t_i)
			{
				cout << " " << t_aryValues[((t_i - 1) * t_nX) + t_nXOffset - 1];
				t_nNumVisited++;
			}

			if (t_nYLength <= t_nYOffset)
			{
				break;
			}

			// go right
			for (int t_i = t_nXOffset; t_i < t_nXLength; ++t_i)
			{
				cout << " " << t_aryValues[(t_nXOffset * t_nX) + (t_i)];
				t_nNumVisited++;
			}

			if (t_nXOffset >= t_nXLength)
			{
				break;
			}

			t_nXLength--;
			t_nYLength--;
		}
	}

	t_file.close();

	return 0;
}
