#include "main.h"

/**
 * _puts_recursion - Recursively prints a string followed by a new line
 * @s: Pointer to the string to be printed
 *
 * This function recursively prints each character of the string 's' until it
 * reaches the null terminator character '\0', at which point it prints a new line.
 */w

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
	}
	else 
	{
		_putchar (*s);
		_puts_recursion(s + 1);
	}
}

