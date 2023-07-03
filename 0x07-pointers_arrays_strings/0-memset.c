#include "main.h"
#include <stdio.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int n;
	n = 0;
	while (n < size)
	{
		if(n %10)
		{
			printf(" ");
		}
		if (!(n % 10) && n)
		{
			printf("\n");
		}
		printf("0x%02x" , buffer[n]);
		n++;
	}
	printf("\n");
}
int main(void)
{
    char b[98] = {0x00};

    *_memset(b, 98);
    memset(b, 0x01, 95);
    printf("-------------------------------------------------\n");
    *_memset(b, 98);
    return (s);
}

