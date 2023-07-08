#include "main.h"
#include <string.h>
#include <limits.h>

/**
 * _atoi - Converts a string to an integer
 * @s: Pointer to the string
 *
 * Return: The converted integer
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int digit;
	int overflow = 0;

	if (s == NULL)
		return (0);

	while (*s != '\0')
	{
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
		{
			digit = *s - '0';

			/* Check for signed integer overflow */
			if (result > (INT_MAX / 10))
			{
				overflow = 1;
				break;
			}
			else if (result == (INT_MAX / 10) && digit > (INT_MAX % 10))
			{
				overflow = 1;
				break;
			}

			result = (result * 10) + digit;
		}
		else if (result != 0)
			break;

		s++;
	}

	if (overflow)
		return (sign == 1 ? INT_MAX : INT_MIN);

	return (sign * result);
}

