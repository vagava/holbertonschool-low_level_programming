#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: head of dlistint_t list.
 * @idx: index of the list where the new node should be added. Index starts at 0
 * @n:value of n in the node.
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int iterator = 0;
	dlistint_t *new = NULL;
	dlistint_t *tmp = NULL;

	if(!h)
		return (NULL);
	if (!*h && idx == 0) /*if list is empty*/
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	else
	{
		new = malloc(sizeof(dlistint_t));
		if(!new)
			return(NULL);
		tmp = *h;
		while(tmp)
		{
			if (iterator == idx)
			{
				new->n = n;
				new->next = tmp;
				new->prev = tmp->prev;
				tmp->prev->next = new;
				tmp->prev = new;
				return (new);
			}
			tmp = tmp->next;
			iterator++;
		}
	}
	return (NULL);
}
