#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: head of dlistint_t list.
 * Return: number of elements in a linked dlistint_t list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *tmp = NULL;
	size_t nodes = 0;

	if (!h)
		return (0);

	tmp = h;
	while (tmp)
	{
		nodes++;
		tmp = tmp->next;
	}
	return (nodes);
}
