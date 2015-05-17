#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

#if _EDITOR

#include "59.h"


void CP59::vBubbleSort(vector<string> &p_vector)
#else
void vBubbleSort(vector<string> &p_vector)
#endif
{
	bool t_fSwapped = false;
	
	do
	{
		t_fSwapped = false;

		for (int t_i = 1; t_i < p_vector.size(); ++t_i)
		{
			if (p_vector[t_i].compare(p_vector[t_i - 1]) < 0)
			{
				string t_n = p_vector[t_i];
				p_vector[t_i] = p_vector[t_i - 1];
				p_vector[t_i - 1] = t_n;
				t_fSwapped = true;
			}
		}
	} while (t_fSwapped);
}

#if _EDITOR

static const char * fsc_pChzName = "Telephone Words";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/59/";
static const int fsc_nNumber = 59;
static const bool fsc_fFinished = true;
static const EDifficulty fsc_eDifficulty = eDiff_Hard;

CP59::CP59()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP59::~CP59()
{
}

void CP59::vRun()
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file;
	string t_strInput;

#if _EDITOR
	t_file.open("in/59_in.txt", ios::in);
#else
	t_file.open(argv[1], ios::in);
#endif

	string t_aResult[10] = { "0", "1", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };

	while (getline(t_file, t_strInput))
	{
		int t_an[7];

		for (int t_i = 0; t_i < t_strInput.length(); ++t_i)
		{
			t_an[t_i] = atoi(t_strInput.substr(t_i, 1).c_str());
		}

		string t_strResult = "1234567";
		vector<string> t_aStrResults = vector<string>();

		for (int t_a = 0; t_a < t_aResult[t_an[0]].length(); ++t_a)
		{
			t_strResult[0] = t_aResult[t_an[0]][t_a];
			for (int t_b = 0; t_b < t_aResult[t_an[1]].length(); ++t_b)
			{	
				t_strResult[1] = t_aResult[t_an[1]][t_b];
				for (int t_c = 0; t_c < t_aResult[t_an[2]].length(); ++t_c)
				{	
					t_strResult[2] = t_aResult[t_an[2]][t_c];
					for (int t_d = 0; t_d < t_aResult[t_an[3]].length(); ++t_d)
					{	
						t_strResult[3] = t_aResult[t_an[3]][t_d];
						for (int t_e = 0; t_e < t_aResult[t_an[4]].length(); ++t_e)
						{	
							t_strResult[4] = t_aResult[t_an[4]][t_e];
							for (int t_f = 0; t_f < t_aResult[t_an[5]].length(); ++t_f)
							{	
								t_strResult[5] = t_aResult[t_an[5]][t_f];
								for (int t_g = 0; t_g < t_aResult[t_an[6]].length(); ++t_g)
								{
									t_strResult[6] = t_aResult[t_an[6]][t_g];
									t_aStrResults.push_back(t_strResult);
								}
							}
						}
					}
				}
			}
		}

		vBubbleSort(t_aStrResults);

		for (int t_i = 0; t_i < t_aStrResults.size(); ++t_i)
		{
			cout << t_aStrResults[t_i];

			if (t_i + 1 < t_aStrResults.size())
			{
				cout << ",";
			}
		}

		cout << endl;
	}

	t_file.close();

#if !_EDITOR
	return 0;
#endif
}
