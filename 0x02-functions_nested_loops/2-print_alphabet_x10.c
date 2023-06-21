#include "main.h"

/**
<<<<<<< HEAD
 * print_alphabet_x10 - function that will print the alphabet 10 times
 *
 */
int print_alphabet_x10(void) {
	int i;
	int alp;
	for (i=0 ; i<= 9 ; i++)
	{
		for (alp = 'a' ; alp <= 'z' ; alp++)
		{
			_putchar ("%c ", alp);
		}
		_putchar("\n");
	}
	return (0);
=======
 * print_alphabet_x10 - function that prints the alphabet 10 times
 *
 */
void print_alphabet_x10(void)
{
	int line;
	int ch;

	for (line = 0; line <= 9; line++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
>>>>>>> 77e245f780588d1bba5e6cc5bb63ff0aa1e5162b
}
