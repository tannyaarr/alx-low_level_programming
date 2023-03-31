#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the number of element in a linked list
 * @h: the pointer to the list_t to list
 * Return: Always 0 (Success)
 */
size_t list_len(const list_t *h)
{
	size_t s = 0;

	while (h)

	{
		s++;
		h = h->next;
	}

	return (s);
}
