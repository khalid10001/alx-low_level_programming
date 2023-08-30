#include "main.h"

/**
 * _pow_recursion - a function that returns the value of x
 *	raised to the power of y
 * @x: integer variable
 * @y: integer variable
 * Return: if y is less than 0 returns -1, y is equal to 0 returns 0
 *	y is equal to 1 returns @x otherwise r
 */
int _pow_recursion(int x, int y)
{
	int r;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (0);
	}
	else if (y == 1)
	{
		return (x);
	}
	else
	{
		r = x * _pow_recursion(x, y - 1);
		return (r);
	}
}
