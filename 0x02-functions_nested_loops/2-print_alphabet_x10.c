#include "stdio.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
        int i;
        char alp;
        for (i=0 ; i<10 ; i++){
                for (alp = 'a' ; alp <= 'z' ; alp++){
                        printf ("%c ", alp);
                }
                printf("\n");
        }
        return (0);
}
