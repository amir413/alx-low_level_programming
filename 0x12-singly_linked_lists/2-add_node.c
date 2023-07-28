#include "lists.h"

/**
 * add_node - adds a node to start of the list
 * @head: address for pointer node
 * @str: str node area
 *
 * Return: size of list
 */
list-t *add_node(list_t **head, const char *str)
{
	list_t *new_head = malloc(sizeof(list_t));

	if (!head || !new_head)
		return (NULL);
	if (str)
	{
		new_head->str = strdup(str);
		if (!new_head->str)
		{
			free(new_head);
			return (NULL);
		}

		new_head->next = *head;
		*head = new_head;
		return (new_head);
	}
