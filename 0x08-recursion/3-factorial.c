#include "main.h"

/**
 * factorial - a function that returns the factorial
 * @n: integer variable
 * Return: -1
 */
int factorial(int n)
{
	int res;

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
		res = n * factorial(n - 1);
		return (res);
	}
}
