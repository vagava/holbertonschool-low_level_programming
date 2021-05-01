#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list.
 * @head:head of dlistint_t list.
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	if (head)
	{
		while (head->next)
		{
			head = head->next;
			free(head->prev);
		}
	}
	free(head);

}
