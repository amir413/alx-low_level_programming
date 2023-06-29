/**
 * _strncpy - Copies a string, using at most n bytes from src.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: Maximum number of bytes to be copied from src.
 *
 * Description: This function copies the contents of the source string
 * to the destination string, using at most n bytes from src. If the length
 * of src is less than n, the remaining bytes in dest
 * are filled with null bytes.
 *
 * Return: Pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/* Copy characters from source string to destination string */
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	/* Fill remaining bytes in dest with null bytes */
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

