#include "lists.h"

/**
 * pop_listint-delets the node's head of linked list
 * @head:pointer to the first element in the linked list
 *
 * Return:thethe data was deleted,0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t*temp;
	int num;

	if(!head || !*head)
		return(0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return(num);
}

