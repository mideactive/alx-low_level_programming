#include "search_algos.h"
/**
 * linear_search - Search for value in an array
 *
 * @array: values to be searched
 * @size: size of search
 * @value: search result
 * Return: first index where value is located or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
