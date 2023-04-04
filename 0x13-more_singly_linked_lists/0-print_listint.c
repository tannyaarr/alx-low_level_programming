#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print listint -  prints all elements of a linked list
 * @h:  linked list of type  listint_t to print
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t x = 0;

	while (h)
	{
		printf("%d\n", h->n);
		x++;
		h = h->next;
	}
	return (x);
}
