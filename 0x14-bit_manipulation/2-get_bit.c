#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index
 * @n: unsigned long integer variable
 * @index: unsigned integer variable
 * Return: returns the value of the bit at index otherwise -1 if error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}
	return (n >> index & 1);
}
