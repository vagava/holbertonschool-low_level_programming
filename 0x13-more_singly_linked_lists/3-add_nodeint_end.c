#include "lists.h"
/**
 * add_nodeint_end -adds a new node at the end of a listint_t list.
 * @head: pointer to header of list
 * @n:value n of the node
 * Return: pointer to new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = NULL, *aux = NULL;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head)
	{
		aux = *head;
		while (aux->next) /*search last node*/
			aux = aux->next;
		aux->next = new;
	}
	else
		*head = new;
	return (new);
}
