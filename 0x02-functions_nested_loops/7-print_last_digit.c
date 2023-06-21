#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number and returns its value.
 * @number: The number to extract the last digit from.
 *
 * Return: The value of the last digit.
 */
int print_last_digit(int number)
{
	int last_digit = number % 10;
	if (Last_digit < 0)
	last_digit *= -1;
	_putchar('0' + last_digit);
	return last_digit;
}

