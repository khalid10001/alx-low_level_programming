#include "main.h"
#include <stdlib.h>

/**
 * _realloc - a function that reallocates a memory block
 *	using malloc and free
 * @ptr: pointer void variable
 * @old_size: integer variable
 * @new_size: integer variable
 * Return: NULL if new_size = 0 and ptr is not NULL.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	free(ptr);
	ptr = malloc(new_size);
	return (ptr);
}
