#include "lists.h"
/**
 * sum_dlistint_t - returns the sum of all data
 * @head: pointer to the head of the linked list
 * Return: sum of all data values or 0 if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
