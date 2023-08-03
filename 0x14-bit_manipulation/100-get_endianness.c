#include"main.h"

/**
 * get_endianness - check if big or small
 * Return: 0 sdasdasdaaasd
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char*) &i;

	return (*c);
}
