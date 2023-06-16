#include <stdio.h>

/**
 * *main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letters;

	for (letter = 'a' ; letter <= 'z' ; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}

	putchar('\n');

	return (o);
}
