#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * create_array - creates an array of characters
 * @size: the size of the array
 * @c: the character to initialize the array with
 *
 * Return: a pointer to the created array, or NULL on failure
 */
char *create_array(unsigned int size, char c)
{
    char *p;
    unsigned int i;

    if (size == 0)
        return (NULL);

    p = malloc(size * sizeof(char));
    if (p == NULL)
        return (NULL);

    for (i = 0; i < size; i++)
        p[i] = c;

    return (p);
}

int main(void)
{
    unsigned int i;
    char *arr1, *arr2, *arr3;

    arr1 = create_array(72, 'S');
    if (arr1 != NULL)
    {
        for (i = 0; i < 72; i++)
            printf("%c", arr1[i]);
        printf("\n");
        free(arr1);
    }

    arr2 = create_array(102, 10);
    if (arr2 != NULL)
    {
        for (i = 0; i < 102; i++)
            printf("%d ", arr2[i]);
        printf("\n");
        free(arr2);
    }

    arr3 = create_array(0, 'H');
    if (arr3 != NULL)
    {
        for (i = 0; i < 0; i++) // This loop won't execute as the size is 0
            printf("%c", arr3[i]);
        printf("\n");
        free(arr3);
    }

    return (0);
}

