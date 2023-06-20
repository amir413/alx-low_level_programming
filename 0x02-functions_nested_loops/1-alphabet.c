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
}

