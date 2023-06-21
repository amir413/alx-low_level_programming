#include "main.h"

/**
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
}
