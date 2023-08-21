#include <stddef.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of
 * a dlistint_t linked list
 * @head: pointer to the head of the linked list
 * @index: Index of the node to retrieve, starting from 0.
 * Return: pointer to the nth node or Null if the node
 * doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int i = 0;

	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}
	return (current);
}
