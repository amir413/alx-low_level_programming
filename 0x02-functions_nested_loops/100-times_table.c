#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0
 * @n: Number of rows and columns in the times table
 */
void print_times_table(int n)
{
    if (n < 0 || n > 15)
        return;

    int i, j;

    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= n; j++)
        {
            int result = i * j;
            printf("%-4d", result);
        }

        printf("\n");
    }
}

