#include "search_algos.h"
/**
 * binary_search - A binary search algorithm prototype
 *
 * @array: Array of values to be searched
 * @size: The size of the search
 * @value: The result of the seach
 * Return: first index where value is located or -1
 */
#include <stdio.h>
#include <stdlib.h>

int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = size - 1;
	int i;
	int mid;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		mid = left + (right - left) / 2;

		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
		}
		printf("\n");

	if (array[mid] == value)
		return (mid);

	if (array[mid] < value)
		left = mid + 1;
	else
		right = mid - 1;
	}
	return (-1);
}
