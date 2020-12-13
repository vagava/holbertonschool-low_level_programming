#include "lists.h"
/**
 * sum_dlistint -  returns the sum of all the data (n) of a linked list.
 * @head: head
 * Return: returns the sum of all the data (n).
 */
int sum_dlistint(dlistint_t *head)
{
	long int sum = 0;
	dlistint_t *temp;

	temp = head;
	while (temp)
	{
		sum = sum + temp->n;
		temp = temp->next;
	}
	return (sum);
}
