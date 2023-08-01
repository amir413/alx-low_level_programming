#include "lists.h"

/**
 * sum_listint-calculat the sum of data in listint_t
 * @head:1st node in the linked list
 *
 * Return:resulting sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
