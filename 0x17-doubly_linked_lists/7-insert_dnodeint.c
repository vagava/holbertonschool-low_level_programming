#include"lists.h"
/**
 * insert_dnodeint_at_index -  inserts a new node at a given position.
 * @h: header.
 * @idx: index
 * @n: value of data n,
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int compare;
	dlistint_t *new_node, *temp;

	if(*h == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	/*falta caso donde idx es 0*/
	temp = *h;

	for(compare = 0; compare < idx - 1; compare++)
	{
		temp = temp->next;
	}
	new_node->next = temp->next;
	new_node->prev = temp;
	new_node->n = n;
	temp->next = new_node;
	new_node->next->prev = new_node;
	return(new_node);
}