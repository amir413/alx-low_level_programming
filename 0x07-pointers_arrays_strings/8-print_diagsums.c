#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - description
 * @a: 2d array of int types
 * @size: size of array (square)
 */

void print_diagsums(int *a, int size)
{
	int h, s1 = 0, s2 = 0;

	for (h = 0; h < size; h++)
	{
		s1 += a[h];
		s2 += a[size - h - 1];
		a += size;
	}
	printf("%d, ", s1);
	printf("%d\n", s2);
}
