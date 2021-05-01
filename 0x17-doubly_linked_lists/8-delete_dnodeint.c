#include "lists.h"
/**
 * delete_first_node - delete index 0
 * @head: head of dlistint_t list.
 * Return: New head.
 */
dlistint_t *delete_first_node(dlistint_t **head)
{
	dlistint_t *aux = NULL;

	if (!head || !*head)
		return (NULL);

	aux = *head;
	*head = aux->next;
	free(aux);
	return (*head);
}
/**
 * delete_dnodeint_at_index -  deletes the node at index index
 * of a dlistint_t linked list.
 * @head:head of dlistint_t list.
 * @index:the index of the node, starting from 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *delete = NULL;
	unsigned int iter = 0;

	if (!head && !*head)
		return (-1);

	if (index == 0)
	{
		delete_first_node(head);
		return (1);
	}

	delete = *head;
	while (delete)
	{
		if (!delete->next && iter == index)
		{
			delete->prev->next = NULL;
			free(delete);
			return (1);
		}
		else if (iter == index)
		{
			delete->next->prev = delete->prev;
			delete->prev->next = delete->next;
			free(delete);
			return (1);
		}
		delete = delete->next;
		iter++;
	}
	return (-1);
}
