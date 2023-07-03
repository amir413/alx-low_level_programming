#include "main.h"

/**
 * _memset - Fills memory with a constant byte.
 * @s: Pointer to the memory area to be filled.
 * @b: The constant byte to be used for filling.
 * @n: Number of bytes to be filled.
 *
 * Return: Pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int itr;

	for (itr = 0; n > 0;itr++, n--)
	{
		s[itr] = b; 
	}

	return (s);
}

