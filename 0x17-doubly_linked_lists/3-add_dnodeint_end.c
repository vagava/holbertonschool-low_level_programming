#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a linked list.
 * @head: head
 * @n: value of n
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp;
	/*verificar si hay un nodo existente*/
	if (!*head)
		return (add_dnodeint(head, n));

	/*crear nuevo node*/
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	temp = *head;
	/*encontrar ultimo nodo*/
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	/*asignar valores al nuevo nodo*/
	(*new_node).n = n;
	(*new_node).prev = temp->next;
	(*new_node).next = NULL;
	/*enlazar ultimo nodo con el nuevo*/
	temp->next = new_node;
	return (new_node);
}
