#include "lists.h"
/**
 * is_firstnode - add new node at the start
 * @h: head of dlistint_t list.
 * @new: new node
 * @n: value of the new node
 * Return: new node
 */
dlistint_t *is_firstnode(dlistint_t **h, dlistint_t *new, int n)
{
	dlistint_t *tmp = *h;

	*h = new;
	new->prev = NULL;
	new->n = n;
	new->next = tmp;
	tmp->prev = new;
	return (new);
}
/**
 * is_othernode - add new node at the index
 * @tmp: node reference
 * @new: new node
 * @n: value of the new node
 * Return: new node
 */
dlistint_t *is_othernode(dlistint_t *tmp, dlistint_t *new, int n)
{
	new->prev = tmp->prev;
	tmp->prev->next = new;
	new->n = n;
	new->next = tmp;
	tmp->prev = new;
	return (new);
}

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: head of dlistint_t list.
 * @idx: index of the list where the new node should be added.
 * Index starts at 0
 * @n:value of n in the node.
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int iterator = 0;
	dlistint_t *new = NULL;
	dlistint_t *tmp = NULL;

	if (!h || idx < 0)
		return (NULL);
	if (!*h && idx == 0) /*if list is empty*/
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	tmp = *h;
	while (tmp)
	{
		if (iterator == idx)
		{
			if (idx == 0)/*if list not empty*/
				return (is_firstnode(h, new, n));
			else
				return (is_othernode(tmp, new, n));
		}
		tmp = tmp->next;
		iterator++;
	}
return (NULL);
}
