#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * insert_dnodeint_at_index - inserts a new node at
 * a given positionn in a dlistint_t linked list
 * @h: pointer to the head of the linked list
 * @idx: Index at which the new node should be inserted
 * @n: value to be stored in a new node
 * Return: Addtess of the new node, or Null if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *current = *h;
	unsigned int i = 0;

	if (!h)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *h;
		if (*h)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}

	while (current)
	{
		if (i == idx - 1)
	{
		new_node->prev = current;
		new_node->next = current->next;
		if (current->next)
			current->next->prev = new_node;
		current->next = new_node;
		return (new_node);
	}
		current = current->next;
		i++;
	}
	free(new_node);
	return (NULL);
}
