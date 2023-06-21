#include "main.h"
/**
 * @brief Prints the sign of a number.
 *
 * This function takes an integer as input and prints the sign of the number.
 * - If the number is greater than zero, it prints '+' and returns 1.
 * - If the number is less than zero, it prints '-' and returns -1.
 * - If the number is zero, it prints '0' and returns 0.
 *
 * @param n The number for which the sign needs to be determined.
 * @return The sign of the number: 1 if positive, -1 if negative, 0 if zero.
 */
int print_sign(int n)
{
	if(n < 0)
	{
		_putchar ('-');
		return (-1);
	}
	else if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else {
		_putchar('0');
		return (0);
	}
}

