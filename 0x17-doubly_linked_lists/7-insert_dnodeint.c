#include"lists.h"
/**
 * insert_dnodeint_at_index -  inserts a new node at a given position.
 * @h: header.
 * @idx: index
 * @n: value of data n
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int compare;
	dlistint_t *new_node, *temp;

	if (*h == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));

	temp = *h;

	for (compare = 0; compare < idx - 1; compare++)
	{
		temp = temp->next;
		if ((compare < idx - 1) && (temp == NULL))
			return (NULL);
	}
	if ((compare == idx - 1) && (temp->next == NULL))
		return (add_dnodeint_end(h, n));

	new_node->next = temp->next;
	new_node->prev = temp;
	new_node->n = n;
	temp->next = new_node;
	new_node->next->prev = new_node;
	return (new_node);
}
