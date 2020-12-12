#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning
 * @head: head
 * @n: value of n.
 * Return:pointer to new node.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	if (*head)
		(*head)->prev = new_node;

	(*new_node).n = n;
	(*new_node).prev = NULL;
	(*new_node).next = *head;

	*head = new_node;

	return (new_node);
}
