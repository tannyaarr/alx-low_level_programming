#include "lists.h"
#include <stdio.h>

/**
 * print listint -  prints all elements of a linked list
 * @h: the linked list of listint_t to print
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t x = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		x++;
	}
	return (x);
}
