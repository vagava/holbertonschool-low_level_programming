#include "lists.h"
/**
 * free_listint - frees a listint_t list.
 * @head: pointer to header of list
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *aux = NULL;

	while (head)
	{
		aux = head;
		head = head->next;
		free(aux);
	}
	free(head);
}
