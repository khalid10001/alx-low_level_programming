#include "main.h"

/**
 * set_bit - a function that sets the value of a bit to 1
 * @n: unsigned long integer variable
 * @index: unsigned integer variable
 * Return: returns 1 if it worked otherwise -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}
	m = 1L << index;
	*n = (*n | m);
	
	return (1);
}
