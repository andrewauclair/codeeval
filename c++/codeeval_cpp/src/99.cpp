#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <sstream>
using namespace std;

#if _EDITOR

#include "99cpp.h"

int C99::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);

	string t_strInput;
	string t_str;

	while (getline(t_file, t_strInput))
	{
		t_strInput.erase(std::remove(t_strInput.begin(), t_strInput.end(), '('), t_strInput.end());
		t_strInput.erase(std::remove(t_strInput.begin(), t_strInput.end(), ')'), t_strInput.end());
		t_strInput.erase(std::remove(t_strInput.begin(), t_strInput.end(), ','), t_strInput.end());

		istringstream line(t_strInput);

		getline(line, t_strInput, ' ');
		int t_nx1 = atoi(t_strInput.c_str());
		getline(line, t_strInput, ' ');
		int t_ny1 = atoi(t_strInput.c_str());
		getline(line, t_strInput, ' ');
		int t_nx2 = atoi(t_strInput.c_str());
		getline(line, t_strInput, ' ');
		int t_ny2 = atoi(t_strInput.c_str());

		int t_na = t_nx2 - t_nx1;
		int t_nb = t_ny2 - t_ny1;

		int t_ncSquared = (t_na * t_na) + (t_nb * t_nb);
		cout << sqrt((float)t_ncSquared) << endl;
	}

	t_file.close();

	return 0;
}
