#include "main.h"

/**
 * print_alphabet_x10 - function that will print the alphabet 10 times
 *
 */
void print_alphabet_x10(void)
{
        int i;
        int alp;
        for (i=0 ; i<10 ; i++){
                for (alp = 'a' ; alp <= 'z' ; alp++){
                        _putchar(alp);
                }
                _putchar('\n');
        }
}
