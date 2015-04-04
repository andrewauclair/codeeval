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
static const bool fsc_fFinished = false;
static const EDifficulty fsc_eDifficulty = eDiff_Hard;
CP57::CP57()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}
CP57::~CP57()
{
}
void CP57::vRun()
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file;
	string t_strInput;
#if _EDITOR
	t_file.open("57.txt", ios::in);
#else
	t_file.open(argv[1], ios::in);
#endif

	int t_nX = 0;
	int t_nY = 0;

	int t_nXOffset = 0;
	int t_nYOffset = 0;

	int t_nXLength = 0;
	int t_nYLength = 0;

	int t_nNumVisited = 0;
	int t_nProblems = 0;
	char t_junk;

	while (!t_file.eof())
	{
		//cout << endl << endl;
		vector<string> t_aryValues = vector<string>();

		string t_strInput;
		string t_str;

		getline(t_file, t_strInput);
		
		istringstream line(t_strInput);

		getline(line, t_str, ';');
		t_nY = atoi(t_str.c_str());
		getline(line, t_str, ';');
		t_nX = atoi(t_str.c_str());

		/*t_file >> t_nY;
		t_file >> t_junk;
		t_file >> t_nX;
		t_file >> t_junk;
*/
		//cout << endl << t_nY << " " << t_nX << endl;
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

		// read in the numbers
		//for (int t_i = 0; t_i < t_nX * t_nY; ++t_i)
		//{
		//	t_file >> t_chValue;
		//	//cout << t_nValue << " ";
		//	if (t_chValue == 0)
		//	{
		//		return 0;
		//	}
		//	t_aryValues.push_back(t_chValue);
		//}

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

		/*for (int t_i = 1; t_i < t_nY; ++t_i)
		{
			cout << " " << t_aryValues[(t_i * t_nX) + (t_nX - 1)];
			t_nNumVisited++;
		}
		cout << " \\ ";
		for (int t_i = 2; t_i <= t_nX; ++t_i)
		{
			cout << " " << t_aryValues[(t_nY * t_nX) - t_i];
			t_nNumVisited++;
		}*/

		// loop for the rest of it
		t_nXOffset = 0;
		t_nYOffset = 0;

		t_nXLength = t_nX - 1;
		t_nYLength = t_nY - 1;

		// go up
		//for (int t_i = t_nY - 2; t_i > 0; --t_i)
		//{
		//	cout << " " << t_aryValues[(t_i * t_nX)];
		//	t_nNumVisited++;
		//}
		//cout << " \\ ";
		//// go right
		//for (int t_i = 1; t_i <= t_nX - 2; ++t_i)
		//{
		//	cout << " " << t_aryValues[t_nX + t_i];
		//	t_nNumVisited++;
		//}
		
		// spiral rest of matrix
		while (t_nNumVisited < t_nX * t_nY)
		{
			//cout << " d ";
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

			//cout << " l ";

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
			
			//cout << " u ";

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

			//cout << " r ";

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

		//cout << endl << (t_nX * t_nY) << " " << t_nNumVisited << endl;
	}
}
