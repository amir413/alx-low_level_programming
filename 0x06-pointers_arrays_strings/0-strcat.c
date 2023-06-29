#include "main.h"

/*
 * _strcat - Concatenates two strings.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * _strcat it is concatenates string2 to string1 and ends the
 * resulting string with the null character
 *
 * Description: This function appends the source string to the destination
 * string, overwriting the terminating null byte ('\0') at the end of dest,
 * and then adds a new terminating null byte.
 *
 * char *strcat(char *destination, const char *source)
 * Return: Pointer to the resulting string dest.
 *
 * _strcat it is concatenates string2 to string1 and ends the
 * resulting string with the null character
 * char *_strcat(char *dest, const char *src);
 */

/* _strcat - Concatenates two strings.*/
char *_strcat(char *dest, char *src)/* _strcat - Concatenates two strings.*/
	/* _strcat - Concatenates two strings.*/
{
	int c, c2;

	c = 0;
	/*find the size of dest array*/
	while (dest[c])
	c++;
	/* iterate through each src array value without the null byte*/
	for (c2 = 0; src[c2] ; c2++)
	/*append src[c2] to dest[c] while overwritting the null byte in dest*/
	dest[c++] = src[c2];

	return (dest);
}


