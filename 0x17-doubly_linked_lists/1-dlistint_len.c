#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: header
 * Return: counter
 */
size_t dlistint_len(const dlistint_t *h)
{
	unsigned int counter;

	if (h == NULL)
		return (0);

	while (h)
	{
		counter++;
		h = (*h).next;
	}
	return (counter);
}
