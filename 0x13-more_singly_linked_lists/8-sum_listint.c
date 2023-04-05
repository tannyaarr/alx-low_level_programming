#include "lists.h"
#include <stdio.h>

/**
 * sum_listint - returns the sum of all the data (n)
 * @head: first node in a linked list
 * Return: 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
