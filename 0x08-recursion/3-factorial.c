#include "main.h"

/**
 * factorial - a function that returns the factorial
 * @n: integer variable
 * Return: if n less than 0 return -1, n equal to 0 returns 0
 *	n equal to 1 return 1 otherwise r
 */
int factorial(int n)
{
	int r;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		r = n * factorial(n - 1);
		return (r);
	}
}
