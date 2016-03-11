#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

#if _EDITOR

#include "13cpp.h"
//#include "helpers/Cucycles.h"

int C13::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	string t_strInput;

#if _EDITOR
	//uint64_t t_cycles = rdtsc();
#endif

	while (getline(t_file, t_strInput))
	{
		if (t_strInput.empty())
		{
			continue;
		}

		istringstream t_line(t_strInput);

		string t_strText;
		string t_strLetters;

		getline(t_line, t_strText, ',');
		getline(t_line, t_strLetters, ',');

		for (unsigned int t_i = 1; t_i < t_strLetters.length(); ++t_i)
		{
			t_strText.erase(std::remove(t_strText.begin(), t_strText.end(), t_strLetters[t_i]), t_strText.end());
		}

		cout << t_strText << endl;
	}

	t_file.close();

	return 0;

#if _EDITOR
	//uint64_t t_cFinalCycles = rdtsc() - t_cycles;
	//cout << "Cycles used: " << t_cFinalCycles << endl;
#endif
}
