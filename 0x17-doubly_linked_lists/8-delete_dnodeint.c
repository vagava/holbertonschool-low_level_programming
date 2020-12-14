#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index of alinked list.
 * @head: head
 * @index: posicion to deletes
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int compare = 0;
	dlistint_t *temp = *head;

	if (*head == NULL || !head)
		return (-1);
	if (index == 0)
	{
		*head = temp->next;
		if (temp->next)
			temp->next->prev = NULL;
		free(temp);
		return (1);
	}
	while (compare < index)
	{
		if (!temp->next)
			return (-1);
		temp = temp->next;
		compare++;
	}
	if (temp->next == NULL)
	{
		temp->prev->next = NULL;
		free(temp);
		return (1);
	}
	temp->next->prev = temp->prev;
	temp->prev->next = temp->next;
	free(temp);
	return (1);
}
