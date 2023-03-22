#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - returns for index of first element
 * @size: size of elements
 * @cmp: pointer to function
 * @array: array
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (a = 0; a < size; a++)
	{
		(cmp(array[a]));
		return (a);
	}
	return (-1);
}
