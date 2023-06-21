<<<<<<< HEAD
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints "_putchar" using putchar prototype
 *
 * Return: Always 0 (Success)
 */

int main()
{
    char alp;
    for (alp = 'a'; alp <= 'z'; alp++) {
        printf("%c", alp);
    }
    return (0);
=======
#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase, followed by a new line
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
>>>>>>> 77e245f780588d1bba5e6cc5bb63ff0aa1e5162b
}

