# include "search_algos.h"
# include <stdio.h>
# include <stdlib.h>
# include <stddef.h>

/**
* linear_search - searches for value in array of intergers using Linear
* search algorithm
* @ array: pointer to the first element
* @ size: number of elements in array
* @ value: value to search for
* Return - 1 if value is not present in array or array is NULL
*/

int linear_search(int * array, size_t size, int value)
{
    size_t i = 0;

    if (array && size != 0)
    {
        for (; i < size; i++)
        {
            printf("Value checked array[%lu] = [%d]\n", i, array[i]);
            if (array[i] == value)
            return (i);
        }
    }
    return (-1);
}
