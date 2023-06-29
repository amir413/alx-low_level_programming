/**
 * _strncat - Concatenates two strings, using at most n bytes from src.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: Maximum number of bytes to be used from src.
 *
 * Description: This function concatenates the contents of the source string
 * to the destination string, using at most n bytes from src. It does not
 * require src to be null-terminated if it contains n or more bytes.
 *
 * Return: Pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
    char *ptr = dest;

    /* Find the end of the destination string */
    while (*ptr != '\0')
        ptr++;

    /* Append characters from source string to destination string */
    while (*src != '\0' && n > 0)
    {
        *ptr = *src;
        ptr++;
        src++;
        n--;
    }

    /* Add terminating null byte */
    *ptr = '\0';

    return dest;
}

