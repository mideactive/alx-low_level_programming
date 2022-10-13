#include "function_pointers.h"
/**
 *array_iterator - Executes a function given a parameter
 *  on each element of an array
 *@array: A variable that hold the value of the array
 *@size: The size of the array
 *@action: A function that points to the array
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
