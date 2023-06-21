#include "main.h"
/**
 * Prints the 9 times table in the desired format.
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0 ; j <= 9 ; j++)
		{
			printf("%2d, ", i * j);
		}
		printf("\n");
	}
}
