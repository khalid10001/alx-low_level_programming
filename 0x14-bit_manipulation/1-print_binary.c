#include "main.h"

/**
 * print_binary - a function that prints the binary representation of a number
 * @n: unsigned long integer variable
 * Return: 0.
 */
void print_binary(unsigned long int n)
{
	int bt = 8 * sizeof(n);
	int p = 0;

	while (bt != 0)
	{
		if (n & 1L << --bt)
		{
			_putchar('1');
			p++;
		}
		else if (p != 0)
		{
			_putchar('0');
		}
	}
	if (p == 0)
	{
		_putchar('0');
	}
}
