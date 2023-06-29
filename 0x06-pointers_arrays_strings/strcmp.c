/**
 * _strcmp - Compares two strings.
 * @s1: Pointer to the first string.
 * @s2: Pointer to the second string.
 *
 * Description: This function compares the contents of two strings, s1 and s2.
 * It returns an integer value indicating the relationship between the strings.
 * The return value is negative if s1 is less than s2, positive if s1 is greater
 * than s2, and zero if the strings are equal.
 *
 * Return: Negative value if s1 < s2, Positive value if s1 > s2, 0 if s1 = s2.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

    /* Compare characters of s1 and s2 */
	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
{
	    	if (s1[i] < s2[i])
		return -1;
		else if (s1[i] > s2[i])
		return 1;
	}

    /* Check if s1 and s2 have different lengths */
	if (s1[i] != '\0')
	return 1;
	else if (s2[i] != '\0')
	return (-1);

	return (0); // Strings are equal
}

