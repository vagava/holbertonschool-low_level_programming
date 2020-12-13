#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index of alinked list.
 * @head: head
 * @index: posicion to deletes
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int compare;
	dlistint_t *temp, *temp1;

	if (*head == NULL)
		return (-1);

	temp = *head;
	temp1 = temp->next;

	if (index == 0)
	{
		if (!temp)
			return (-1);
		*head = temp->next;
		free(temp);
		return (1);
	}
	for (compare = 0; compare < index - 1; compare++)
	{
		temp = temp->next;
		temp1 = temp1->next;
		if ((compare < index - 1) && (temp->next == NULL))
			return (-1);
	}
		temp->next = temp1->next;
		temp->next->prev = temp;
		free(temp1);

	return (1);
}
