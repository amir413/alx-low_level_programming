#include "main.h"

/**
 * _islower - function to check if
 *            character is lowercase
 *
 * @c: input character to check
 *
 * Return: returns 1 if 'c' is lowercase,
 *         otherwise returns 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}

