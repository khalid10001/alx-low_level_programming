#include "funtion_pointers.h"

/**
 * int_index - a function that searches for an integer
 * @array: pointer integer variable
 * @size: number of element
 * @cmp: pointer function to compare
 * Return: returns index of the first element
 *	if no element matches returns -1
 *	if size less than or equal to 0 returns -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && size && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}
