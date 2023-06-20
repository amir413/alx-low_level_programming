#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the lowercase alphabets using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		putchar(alp);
	}
	putchar('\n');

	return (0);
}

