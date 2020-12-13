#include"lists.h"
/**
 * get_dnodeint_at_index - returns the nth node
 * @head: head
 * @index: nth node
 * Return: returns pointer of the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int compare;
	dlistint_t *temp;

	if (head == NULL)
		return (NULL);
	if (index == 0)
		return (head);

	temp = head;
	for (compare = 0; compare <= index - 1; compare++)
	{
		temp = temp->next;
		if (!temp)
			return (NULL);
	}

	return (temp);
}
