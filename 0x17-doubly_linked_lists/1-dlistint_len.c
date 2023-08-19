#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * dlistint_len - returns the number of elements in a 
 * dlistint_t linked list
 * @:pointer to the head of the list
 * Return: the number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		h = h->next;
		node_count++;
	}
	return (node_count);
}
