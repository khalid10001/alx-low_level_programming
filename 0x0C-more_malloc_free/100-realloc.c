#include "main.h"
#include <stdlib.h>

/**
 * _realloc - a function that reallocates a memory block
 *	using malloc and free
 * @ptr: pointer void variable
 * @old_size: unsigned integer variable
 * @new_size: unsigned integer variable
 * Return: If new_size equal 0 and ptr is not null returns
 *	null otherwise a pointer to the memory
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
	{
		return (ptr);
	}
	free(ptr);
	ptr = malloc(new_size);
	return (ptr);
}
