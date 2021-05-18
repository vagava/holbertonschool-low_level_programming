#include "lists.h"
/**
 * print_listint -  prints all the elements of a listint_t list.
 * @h: pointer to header of list
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int nodes = 0;
	const listint_t *aux;

	if (!h)
		return (0);
	aux = h;
	while (aux)
	{
		printf("%d\n", aux->n);
		aux = aux->next;
		nodes++;
	}
	return (nodes);
}
