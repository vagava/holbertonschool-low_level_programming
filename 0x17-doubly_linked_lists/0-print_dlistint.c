#include "lists.h"
/**
 * print_dlistint - prints all the elements
 * @h: head
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	unsigned int counter = 0;

	while (h)
	{
		printf("%d\n", h->n);
		counter++;
		h = (*h).next;
	}
	return (counter);
}
