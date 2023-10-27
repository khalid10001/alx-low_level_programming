#include "main.h"

/**
 * set_bit - a function that sets the value of a bit to 1 at a given index
 * @n: number
 * @index: index
 * Return: -1 if error otherwise 1 if successful.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(n) * 8))
	{
		return (-1);
	}
	*n ^= (1 << index);
	return (1);
}
