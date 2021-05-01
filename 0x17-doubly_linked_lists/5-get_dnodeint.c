#include "lists.h"
/**
 *get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 *@head: head of dlistint_t list.
 *@index: the index of the node, starting from 0
 *Return: returns the nth node of a dlistint_t linked list.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int iterator = 0;

	if (!head)
		return (NULL);

	while (head)
	{
		if (iterator == index)
			return (head);
		head = head->next;
		iterator++;
	}
	return (NULL);
}
