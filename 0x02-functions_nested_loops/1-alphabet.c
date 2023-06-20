#include "main.h"

/**
 * Print_alphabet - utilizes on the _putchar function to print
 * 		the alphabet a - z
 */
void print_alphabet(void)
{
	int alph;
	
	for (alph='a' ; alph <= 'z' ; alph++)
		_putchar(alph);
	_putchar('\n')
