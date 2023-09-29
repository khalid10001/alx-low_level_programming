#include "main.h"

/**
 * clear_bit - a function that sets the value of a bit to 0
 * @n: unsigned long integer variable
 * @index: unsigned integer variable
 * Return: returns 1 if it worked otherwise -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}

	if (*n & 1 << index)
	{
		*n ^= 1 << index;
	}
	return (1);
}

