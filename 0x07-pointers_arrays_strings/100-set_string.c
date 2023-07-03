#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: Pointer to a pointer to a char.
 * @to: Pointer to a char to set the value to.
 *
 * Description: This function sets the value of a pointer to a char by
 *              updating the pointer to point to a new memory location.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
