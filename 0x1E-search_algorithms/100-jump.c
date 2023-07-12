#include "search_algos.h"
/**
 * jump_search - jump search algorithm prototype
 *
 * @array: arrays of value on which to perform a search
 * @size: Size of search
 * @value: the searched value returned
 * Return: first search index or -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i;
	size_t step;
	size_t jump = sqrt(size);
	size_t prev = 0;

	if (array == NULL || size == 0)
		return (-1);

	while (array[prev] < value)
	{
		step = jump;
		while (step < size && array[step] <= value)
		{
			printf("Value checked array[%lu] = [%d]\n", step, array[step]);
			step += jump;
		}

		if (step >= size)
			break;

		prev += jump;
	}

		printf("Value found between indexes [%lu] and [%lu]\n", prev, prev + jump);

	for (i = prev; i < size && array[i] <= value; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
