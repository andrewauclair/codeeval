#include <stdio.h>

#if _EDITOR

#include "1c.h"

void vRun1(int argc, const char* argv[])
#else
int main(int argc, const char* argv[])
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
