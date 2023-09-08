#include <stdlib.h>
#include "main.h"

/**
 * array_range - a function that creates an array of integers.
 * @min: integer variable
 * @max: integer variable
 * Return: If min greater than max returns null otherwise
 *		pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int count, l;
	int *ptr;

	if (min > max)
	{
		return ('\0');
	}
	l = max - min + 1;
	ptr = malloc(sizeof(int) * l);
	if (ptr == 0)
	{
		return (NULL);
	}
	for (count = 0; count < l; count++)
	{
		ptr[count] = min++;
	}
	return (ptr);
}
