#include "main.h"

/**
 * flip_bits - a function that returns the number of bits
 * @n: 1st number
 * @m: 2nd number
 * Return: count
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xorval = n ^ m;
	unsigned int count = 0;

	while (xorval)
	{
		count++;
		xorval &= (xorval - 1);
	}
	return (count);
}
