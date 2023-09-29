#include "main.h"

/**
 * flip_bits - a function that flip to get from one number to another
 * @n: unsigned long integer variable
 * @m: unsigned long integer variable
 * Return: returns the number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int x = 0;

	while (xor != 0)
	{
		if (xor & 1)
		{
			x++;
		}
		xor = xor >> 1;
	}
	return (x);
}
