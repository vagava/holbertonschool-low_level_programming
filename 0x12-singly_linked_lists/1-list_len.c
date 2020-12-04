#include "lists.h"
/**
 * list_len -number of elements
 * @h: fisrt node
 * Return: the length.
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	for (i = 0; h != NULL; i++)
		h = h->next;
	return (i);
}
