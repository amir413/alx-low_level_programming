#include "main.h"

/**
 * _strcmp - Compares two strings.
 * @s1: Pointer to the first string.
 * @s2: Pointer to the second string.
 *
 * Description: This function compares the contents of two strings, s1 and s2.
 * It returns an integer value indicating the relationship between the strings.
 * The return value is negative if s1 is less than s2, positive if s1 is greater
 * than s2, and zero if the strings are equal.
 *
 * Return: Negative value if s1 < s2, Positive value if s1 > s2, 0 if s1 = s2.
 */
int _strcmp(char *s1, char *s2)
{
    int equal = 0;

    while (*s1)
    {
	    if (*s1 != *s2)
	    {
		    if (*s1 != *s2)
		    {
			    equal = ((int)*s1 - 48) - ((int)*s2 - 48);
			    break;
		    }
		    s1++;
		    s2++;
	    }
	    return (equal);
    }

