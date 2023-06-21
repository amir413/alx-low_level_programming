#include "main.h"

/**
 * isalpha-function to check if
 * 	character is lowercase or uppercase
 *
 * @c: input character to check
 *
 * Return:return 1 if 'c' is lowercase,
 * 	otherwise return 0
 */
int _isalpha (int c);
{
	if (c >= 97 || c <= 67)

		return (1);
	return (0);
}
