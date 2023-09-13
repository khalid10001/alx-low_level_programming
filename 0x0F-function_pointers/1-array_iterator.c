#include "function_pointers.h"

/**
 * array_iterator - a function that executes a function given
 *		as a parameter on each element of an array
 * @array: pointer integer variable
 * @size: size of the array
 * @action: pointer function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *last_index = array + size - 1;

	if (array && size && action)
	{
		while (array <= last_index)
		{
			action(*array++);
		}
	}
}
