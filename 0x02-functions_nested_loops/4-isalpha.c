#include "main.h"

/**
 * _isalpha - function to check if a character is a letter
 *            (both lowercase or uppercase)
 *
 * @c: input character to check
 *
 * Return: returns 1 if 'c' is a letter, otherwise returns 0
 */
int _isalpha(int c)
{
        if (c >= 97 && c <= 122)
                return (1);
        if (c >= 65 && c <= 90)
                return (1);
        return (0);
}

