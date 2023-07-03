#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 *
 * @s: string.
 * @accept: bytes.
 * Return: unsigned int.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int am, ma;

	for (am = 0; s[am] != '\0'; am++)
	{
		for (ma = 0; accept[ma] != s[am]; ma++)
		{
			if (accept[ma] == '\0')
				return (am);
		}
	}
	return (am);
}
