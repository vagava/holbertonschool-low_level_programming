#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: head of dlistint_t list.
 * Return: Number of elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *tmp = NULL;
	size_t nodes = 0;

	if (h)
		tmp = h;

	while (tmp)
	{
		printf("%i\n", tmp->n);
		nodes++;
		tmp = tmp->next;
	}
	return (nodes);
}
