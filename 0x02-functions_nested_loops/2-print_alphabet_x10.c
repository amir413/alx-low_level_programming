#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int void print_alphabet_x10(void)
{
        int i;
        int alp;
        for (i=0 ; i<10 ; i++){
                for (alp = 'a' ; alp <= 'z' ; alp++){
                        _putchar(alp);
                }
                _putchar("\n");
        }
        return (0);
}
