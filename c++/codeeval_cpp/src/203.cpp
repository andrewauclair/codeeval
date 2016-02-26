#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#if _EDITOR

#include "203cpp.h"

int CP203::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	
	string t_strInput;
	string t_strArrowLeft = "<--<<";
	string t_strArrowRight = ">>-->";

	while (getline(t_file, t_strInput))
	{
		int t_cArrows = 0;

		for (unsigned int t_i = 0; t_i < t_strInput.size() - (t_strArrowLeft.length() - 1); ++t_i)
		{
			if (t_strInput.substr(t_i, t_strArrowLeft.length()).compare(t_strArrowLeft) == 0)
			{
				t_cArrows++;
			}
			else if (t_strInput.substr(t_i, t_strArrowRight.length()).compare(t_strArrowRight) == 0)
			{
				t_cArrows++;
			}
		}

		cout << t_cArrows << endl;
	}

	t_file.close();

	return 0;
}
