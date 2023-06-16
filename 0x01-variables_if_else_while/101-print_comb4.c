#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digits;

	for (digits = 0; digits < 100; digits++)
	{
		if (digits % 10 > digits / 10)
		{
			putchar(digits / 10 + '0');
			putchar(digits % 10 + '0');

			if (digits != 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}


