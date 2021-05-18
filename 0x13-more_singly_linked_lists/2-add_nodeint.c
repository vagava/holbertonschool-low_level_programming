#include "lists.h"
/**
 * add_nodeint -adds a new node at the beginning of a listint_t list.
 * @head: pointer to header of list
 * @n:value n of the node
 * Return: pointer to new head
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);

	if (!*head || !head)
		node->next = NULL;
	else
		node->next = *head;
	node->n = n;
	*head = node;
	return (*head);
}
