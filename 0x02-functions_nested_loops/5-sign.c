#include "main.h"

/**
 * print_sign - checks variable n if its positve, zero or negative
 *
 * @n: checks the input
 *
 * Return: returns 1 if its true otherwise returns 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
