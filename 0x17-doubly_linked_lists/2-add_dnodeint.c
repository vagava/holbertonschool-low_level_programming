#include "lists.h"
/**
 * add_dnodeint- adds a new node at the beginning of a dlistint_t list.
 * @head: head of dlistint_t list.
 * @n:value of n in the node.
 * Return: pointer to new head of the slistint_t or NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	if (!head)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	if (!*head)
		new->next = NULL;
	else
		new->next = *head;
	*head = new;
	new->next->prev = new;
	new->n = n;
	new->prev = NULL;
	return (*head);
}
