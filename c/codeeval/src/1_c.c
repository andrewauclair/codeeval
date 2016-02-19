#include <stdio.h>

#if _EDITOR

#include "1_c.h"

//static const char * fsc_pChzName = "Fizz Buzz";
//static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/1/";
//static const int fsc_nNumber = 1;
//static const bool fsc_fFinished = true;
//static const EDifficulty fsc_eDifficulty = eDiff_Easy;

void vRun1(int argc, char* argv[])
#else
int main(int argc, char* argv[])
#endif
{
	FILE* t_file;
	int t_nFizz = 0;
	int t_nBuzz = 0;
	int t_nTotal = 0;
	int t_i = 1;

	t_file = fopen(argv[1], "r");

	while (!feof(t_file))
	{
		fscanf(t_file, "%d", &t_nFizz);
		fscanf(t_file, "%d", &t_nBuzz);
		fscanf(t_file, "%d", &t_nTotal);

		for (t_i = 1; t_i < t_nTotal + 1; ++t_i)
		{
			if (t_i % t_nFizz == 0 && t_i % t_nBuzz == 0)
			{
				printf("FB ");
			}
			else if (t_i % t_nFizz == 0)
			{
				printf("F ");
			}
			else if (t_i % t_nBuzz == 0)
			{
				printf("B ");
			}
			else
			{
				printf("%d ", t_i);
			}
		}

		printf("\n");
	}

	fclose(t_file);

#if !_EDITOR
	return 0;
#endif
}
