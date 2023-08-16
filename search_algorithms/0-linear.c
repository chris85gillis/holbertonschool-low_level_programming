#include <stdio.h>
#include <stdlib.h>

/**
 * linear_search - impliment linear search algorithm.
 *
 * Return: (-1). 
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);  /* Return -1 if array is NULL */

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);  /* Return the index if value is found */
	}

	return (-1);  /* Return -1 if value is not found in the array */
}
