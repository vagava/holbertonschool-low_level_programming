#include "lists.h"
/**
 * sum_dlistint - sum of all the data (n) of a dlistint_t linked list.
 * @head: head of dlistint_t list.
 * Return: the sum of all the data (n) of a dlistint_t linked list.
 */
int sum_dlistint(dlistint_t *head)
{
	int result = 0;

	if (!head)
		return (0);
	while (head)
	{
		result += head->n;
		head = head->next;
	}
	return (result);
}

