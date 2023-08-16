#include <stdio.h>

/**
 * binary_search - search for value in array.
 *
 * @array: point to first elemtn of array.
 * @size: number of elements in array.
 * @value: value to search for in array.
 *
 * Return: -1.
 */

int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = size - 1;
	int mid;
	int i;

	if (array == NULL)
	{
		return (-1);
	}

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i != right)
			{
				printf(", ");
			}
		}
		printf("\n");

		mid = left + (right - left) / 2;

		if (array[mid] == value)
		{
			return (mid);
		}

		if (array[mid] < value)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}

	return (-1);
}
