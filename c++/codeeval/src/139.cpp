#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

struct SDate
{
	int m_nMonth;
	int m_nYear;
	int m_cRaw;
};

struct SSpan
{
	SDate m_start;
	SDate m_end;
};

#if _EDITOR

#include "139.h"

static const char * fsc_pChzName = "Working Experience";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/139/";
static const int fsc_nNumber = 139;
static const bool fsc_fFinished = true;
static const EDifficulty fsc_eDifficulty = eDiff_Easy;

CP139::CP139()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP139::~CP139()
{
}

void CP139::vRun()
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file;
	string t_strInput;

#if _EDITOR
	t_file.open("in/139_in.txt", ios::in);
#else
	t_file.open(argv[1], ios::in);
#endif

	while (getline(t_file, t_strInput))
	{
		istringstream line(t_strInput);
		string t_str;
		vector<SSpan> t_aSpans = vector<SSpan>();

		while (getline(line, t_str, ';'))
		{
			istringstream line2(t_str);
			string t_str2;
			SSpan t_span;
			int t_i = 0;

			while (getline(line2, t_str2, '-'))
			{
				if (t_str2[0] == ' ')
				{
					t_str2 = t_str2.substr(1);
				}

				istringstream line3(t_str2);
				string t_strMonth;
				string t_strYear;
				int t_nMonth;

				getline(line3, t_strMonth, ' ');
				getline(line3, t_strYear, ' ');

				
				if (t_strMonth.compare("Jan") == 0)
				{
					t_nMonth = 1;
				}
				else if (t_strMonth.compare("Feb") == 0)
				{
					t_nMonth = 2;
				}
				else if (t_strMonth.compare("Mar") == 0)
				{
					t_nMonth = 3;
				}
				else if (t_strMonth.compare("Apr") == 0)
				{
					t_nMonth = 4;
				}
				else if (t_strMonth.compare("May") == 0)
				{
					t_nMonth = 5;
				}
				else if (t_strMonth.compare("Jun") == 0)
				{
					t_nMonth = 6;
				}
				else if (t_strMonth.compare("Jul") == 0)
				{
					t_nMonth = 7;
				}
				else if (t_strMonth.compare("Aug") == 0)
				{
					t_nMonth = 8;
				}
				else if (t_strMonth.compare("Sep") == 0)
				{
					t_nMonth = 9;
				}
				else if (t_strMonth.compare("Oct") == 0)
				{
					t_nMonth = 10;
				}
				else if (t_strMonth.compare("Nov") == 0)
				{
					t_nMonth = 11;
				}
				else if (t_strMonth.compare("Dec") == 0)
				{
					t_nMonth = 12;
				}

				if (t_i == 0)
				{
					t_span.m_start.m_nMonth = t_nMonth;
					t_span.m_start.m_nYear = atoi(t_strYear.c_str());
					t_span.m_start.m_cRaw = (12 * t_span.m_start.m_nYear) + t_nMonth;
				}
				else
				{
					t_span.m_end.m_nMonth = t_nMonth;
					t_span.m_end.m_nYear = atoi(t_strYear.c_str());
					t_span.m_end.m_cRaw = (12 * t_span.m_end.m_nYear) + t_nMonth;
				}
				t_i++;
			}

			t_aSpans.push_back(t_span);
		}

		// we've read in all the spans, now crunch the data
		for (int t_i = 1; t_i < t_aSpans.size(); ++t_i)
		{
			// compare this to the last range
			SSpan* t_spanCur = &t_aSpans[t_i];

			for (int t_j = t_i - 1; t_j >= 0; --t_j)
			{
				if (t_j == t_i)
				{
					continue;
				}

				SSpan* t_spanLast = &t_aSpans[t_j];

				// grab month of start and month of end, (12 * year) + month
				if (t_spanCur->m_start.m_cRaw < t_spanLast->m_start.m_cRaw &&
					t_spanCur->m_end.m_cRaw > t_spanLast->m_end.m_cRaw)
				{
					// Split
					// create a new one starting at last.end + 1 month going to this end
					SSpan t_spanNew;
					t_spanNew.m_start.m_cRaw = t_spanLast->m_end.m_cRaw + 1;
					t_spanNew.m_end.m_cRaw = t_spanCur->m_end.m_cRaw;

					// cut this one down to match the last.start - 1 month
					t_spanCur->m_end.m_cRaw = t_spanLast->m_start.m_cRaw - 1;

					t_aSpans.push_back(t_spanNew);
				}
				else if (t_spanCur->m_start.m_cRaw < t_spanLast->m_start.m_cRaw &&
						 t_spanCur->m_end.m_cRaw >= t_spanLast->m_start.m_cRaw &&
						 t_spanCur->m_end.m_cRaw <= t_spanLast->m_end.m_cRaw)
				{
					// trim end to match last minus a month
					t_spanCur->m_end.m_cRaw = t_spanLast->m_start.m_cRaw - 1;
				}
				else if (t_spanCur->m_start.m_cRaw >= t_spanLast->m_start.m_cRaw &&
						 t_spanCur->m_start.m_cRaw <= t_spanLast->m_end.m_cRaw &&
						 t_spanCur->m_end.m_cRaw > t_spanLast->m_end.m_cRaw)
				{
					// trim beginning to match last
					t_spanCur->m_start.m_cRaw = t_spanLast->m_end.m_cRaw + 1;
				}
				else if (t_spanCur->m_start.m_cRaw >= t_spanLast->m_start.m_cRaw &&
						 t_spanCur->m_end.m_cRaw <= t_spanLast->m_end.m_cRaw)
				{
					// Delete this chunk
					t_aSpans.erase(t_aSpans.begin() + t_i);
					t_i = 0;
					break;
				}
			}
		}

		int t_cTotal = 0;

		// total up the work months
		for (int t_i = 0; t_i < t_aSpans.size(); ++t_i)
		{
			int t_c = (t_aSpans[t_i].m_end.m_cRaw + 1) - t_aSpans[t_i].m_start.m_cRaw;
			t_cTotal += t_c;
		}

		cout << t_cTotal / 12 << endl;
	}

	t_file.close();

#if !_EDITOR
	return 0;
#endif
}
