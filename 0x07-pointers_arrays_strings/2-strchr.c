#include "main.h"

/**
 * *_strchr - fills memory with a constant byte.
 * @s: pointer to put the constant
 * @c: constant
 * Return: pointer to s
 */

char *_strchr(char *s, char c)
{
	int am;

	for (am = 0; s[am] >= '\0' ; am++)
	{
		if (s[am] == c)
		{
			return (s + am);
		}
	}

	return ('\0');
}
