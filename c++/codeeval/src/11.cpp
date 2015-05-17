#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

struct SNum
{
	int m_n;
	SNum * m_p;
};

#if _EDITOR

#include "11.h"

static const char * fsc_pChzName = "Lowest Common Ancestor";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/11/";
static const int fsc_nNumber = 11;
static const bool fsc_fFinished = true;
static const EDifficulty fsc_eDifficulty = eDiff_Med;

CP11::CP11()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP11::~CP11()
{
}

void CP11::vRun()
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file;
	string t_strInput;

#if _EDITOR
	t_file.open("in/11_in.txt", ios::in);
#else
	t_file.open(argv[1], ios::in);
#endif

	SNum t_30, t_8, t_52, t_3, t_20, t_10, t_29;

	t_30.m_n = 30;
	t_30.m_p = NULL;

	t_8.m_n = 8;
	t_8.m_p = &t_30;

	t_52.m_n = 52;
	t_52.m_p = &t_30;

	t_3.m_n = 3;
	t_3.m_p = &t_8;

	t_20.m_n = 20;
	t_20.m_p = &t_8;

	t_10.m_n = 10;
	t_10.m_p = &t_20;

	t_29.m_n = 29;
	t_29.m_p = &t_20;
	
	vector<SNum> t_aTopNums = vector<SNum>();
	t_aTopNums.push_back(t_52);
	t_aTopNums.push_back(t_3);
	t_aTopNums.push_back(t_10);
	t_aTopNums.push_back(t_29);
	t_aTopNums.push_back(t_30);
	t_aTopNums.push_back(t_8);
	t_aTopNums.push_back(t_20);

	while (!t_file.eof())
	{
		int t_n1, t_n2;

		t_file >> t_n1;
		t_file >> t_n2;

		SNum t_num1, t_num2;

		for (int t_i = 0; t_i < t_aTopNums.size(); ++t_i)
		{
			if (t_aTopNums[t_i].m_n == t_n1)
			{
				t_num1 = t_aTopNums[t_i];
			}
			else if (t_aTopNums[t_i].m_n == t_n2)
			{
				t_num2 = t_aTopNums[t_i];
			}
		}

		SNum * t_p1 = &t_num1;
		SNum * t_p2 = &t_num2;

		bool t_fFound = false;

		while (t_p1->m_p != NULL)
		{
			while (t_p2->m_p != NULL)
			{
				if (t_p1->m_p->m_n == t_p2->m_p->m_n)
				{
					cout << t_p1->m_p->m_n << endl;
					t_fFound = true;
					break;
				}
				else if (t_p1->m_n == t_p2->m_p->m_n)
				{
					cout << t_p1->m_n << endl;
					t_fFound = true;
					break;
				}
				else if (t_p1->m_p->m_n == t_p2->m_n)
				{
					cout << t_p1->m_p->m_n << endl;
					t_fFound = true;
					break;
				}

				t_p2 = t_p2->m_p;
			}
			
			if (t_fFound) break;

			t_p1 = t_p1->m_p;
			t_p2 = &t_num2;
		}

		if (!t_fFound)
		{
			cout << "30" << endl;
		}
	}

	t_file.close();

#if !_EDITOR
	return 0;
#endif
}
