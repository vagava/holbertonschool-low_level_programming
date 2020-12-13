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
	dlistint_t *temp;

	if (*head == NULL)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		if (!temp)
			return (-1);
		*head = temp->next;
		free(temp);
		return (1);
	}
	while (compare < index)
	{
		if ((compare < index - 1) && (!temp))
			return (-1);
		temp = temp->next;
		compare++;
	}
	temp->next->prev = temp->prev;
	temp->prev->next = temp->next;
	free(temp);
	return (1);
	}
