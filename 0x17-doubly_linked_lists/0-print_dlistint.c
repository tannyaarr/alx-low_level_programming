#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint list
 * @h: pointer to the head of list
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t node_count = 0;
	const dlistint_t *head = h;

	while (head != NULL)
	{
		printf("%d\n", head->n);
		head = head->next;
		node_count++;
	}
	return (node_count);
}
