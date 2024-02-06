#include <stdlib.h>
#include <stdio.h>
#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted array using Binary Search
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value to search for
 * Return: index where value is located, or -1 if not present or array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t mid;
	size_t i;
	
	if (array == NULL || size == 0)
	{
		return -1;
	}
	while (left <= right)
	{
		mid = (left + right) / 2;
		
		printf("Searching in array: ");
		for (i = left; i <= right; ++i)
		{
			printf("%d", array[i]);
			if (i < right)
			{
				printf(", ");
			}
		}
		printf("\n");
		
		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}
	printf("Value %d not found in the array\n", value);
	return (-1);
}
