#include "lists.h"
/**
 * free_listint2 - frees a listint_t list.
 * @head: pointer to header of list
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *aux = NULL;

	if (!head)
		return;
	while ((*head)->next)
	{
		aux = *head;
		*head = (*head)->next;
		free(aux);
	}
	free(*head);
	*head = NULL;
}
