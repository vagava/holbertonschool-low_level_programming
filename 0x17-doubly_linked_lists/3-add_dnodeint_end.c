#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head:head of dlistint_t list.
 * @n:value of n in the node.
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp = NULL;
	dlistint_t *new = NULL;

	if (!head)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	if (!*head)
	{
		*head = new; /*if the list in empty*/
		new->prev = NULL;
	}
	else
	{
		tmp = *head;
		while (tmp->next) /*search the last node*/
			tmp = tmp->next;
		new->prev = tmp;
		tmp->next = new;
	}
	new->next = NULL;
	new->n = n;
	return (*head);
}
