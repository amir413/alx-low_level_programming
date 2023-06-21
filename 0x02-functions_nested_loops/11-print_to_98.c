#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: Starting number
 */
void print_to_98(int n)
{
    int i;

    for (i = n; i != 99; i += (n <= 98) ? 1 : -1)
    {
        printf("%d", i);

        if (i != 98)
            printf(", ");
    }

    printf("\n");
}

