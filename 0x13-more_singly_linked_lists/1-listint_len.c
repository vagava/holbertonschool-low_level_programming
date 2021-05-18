#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h:pointer to head of list
 * Return: Number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;
	const listint_t *aux = NULL;

	if (!h)
		return (0);
	aux = h;
	while (aux)
	{
		nodes++;
		aux = aux->next;
	}
	return (nodes);
}
