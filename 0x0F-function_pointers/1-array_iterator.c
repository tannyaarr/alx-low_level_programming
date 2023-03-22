#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - prints each array element
 * @size: how many elements to print
 * @array: array
 * @action: pointer to print
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL || action == NULL)
		return;

	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}
