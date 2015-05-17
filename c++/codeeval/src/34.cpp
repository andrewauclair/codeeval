#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

#if _EDITOR

#include "34.h"

static const char * fsc_pChzName = "Number Pairs";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/34/";
static const int fsc_nNumber = 34;
static const bool fsc_fFinished = true;
static const EDifficulty fsc_eDifficulty = eDiff_Med;

CP34::CP34()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP34::~CP34()
{
}

void CP34::vRun()
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file;
	string t_strInput;

#if _EDITOR
	t_file.open("in/34_in.txt", ios::in);
#else
	t_file.open(argv[1], ios::in);
#endif

	string t_str;
	string t_strValue;
	
	vector<int> t_anValues = vector<int>();
	int t_x;

	while (getline(t_file, t_strInput))
	{
		istringstream line(t_strInput);

		getline(line, t_str, ';');
		
		istringstream values(t_str);

		while (getline(values, t_str, ','))
		{
			t_anValues.push_back(atoi(t_str.c_str()));
		}

		getline(line, t_str, ';');

		t_x = atoi(t_str.c_str());

		int t_cPairs = 0;
		bool t_fFirst = true;

		vector<int> t_anFirst = vector<int>();
		vector<int> t_anSecond = vector<int>();

		for (int t_i = 0; t_i < t_anValues.size(); ++t_i)
		{
			for (int t_j = t_i + 1; t_j < t_anValues.size(); ++t_j)
			{
				if (t_anValues[t_i] + t_anValues[t_j] == t_x)
				{
					bool t_fPrint = true;

					for (int t_k = 0; t_k < t_anFirst.size(); ++t_k)
					{
						if (t_anFirst[t_k] == t_anValues[t_i] &&
							t_anSecond[t_k] == t_anValues[t_j])
						{
							t_fPrint = false;
						}
					}

					if (t_fPrint)
					{
						if (!t_fFirst)
						{
							cout << ";";
						}

						t_fFirst = false;
						t_cPairs++;

						cout << t_anValues[t_i] << "," << t_anValues[t_j];

						t_anFirst.push_back(t_anValues[t_i]);
						t_anSecond.push_back(t_anValues[t_j]);
					}
				}
			}
		}

		t_anValues.clear();

		if (t_cPairs == 0)
		{
			cout << "NULL";
		}

		cout << endl;
	}

	t_file.close();

#if !_EDITOR
	return 0;
#endif
}
