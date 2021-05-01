#include "lists.h"
/**
 * add_dnodeint- adds a new node at the beginning of a dlistint_t list.
 * @head: head of dlistint_t list.
 * @n:value of n in the node.
 * Return: pointer to new head of the slistint_t or NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (!head)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	*head = new;
	return (*head);
}
