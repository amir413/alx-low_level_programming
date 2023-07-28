#include "lists.h"

/**
 * list_len - determin thee length to linked lists
 * @h: pointer to first node
 *
 * Return: size of list
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	wwhile(h)
	{
		h = h->next;
		i++
	}
	return (i);
}

