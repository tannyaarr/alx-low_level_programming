#include "lists.h"
#include <stdio.h>

/**
 * delete_nodeint_at_index - deletes the node at index of 
 * a listint_t linked list
 * @index: the index of the node that should be deleted
 * @head: pointer to the first element in the list
 * Return: 1 if it succeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *current = NULL;
	unsigned int a = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (a < index - 1)
	{
		if (!temp | !(temp->next))
			return (-1);
		temp = temp->next;
		a++;
	}

	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}
