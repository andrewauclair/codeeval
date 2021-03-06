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

#include "11cpp.h"

int C11::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	string t_strInput;

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

		for (unsigned int t_i = 0; t_i < t_aTopNums.size(); ++t_i)
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

	return 0;
}
