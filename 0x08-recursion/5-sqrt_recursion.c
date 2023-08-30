#include "main.h"

/**
 * _sqrt_recursion - a function that returns the natural
 *	square root of a number
 * square - square root
 * @x: integer variable
 * @y: integer variable
 * Return: square function with parameter n and 1
 */
int square(int x, int y);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - square root
 * @x: integer variable
 * @y: integer variable
 * Return: if x is less than y returns -1,
 *      x is equal to y returns y otherwise returns
 *      the square function with parameter x and y + 1
 */
int square(int x, int y)
{
	if (x < y)
	{
		return (-1);
	}
	else if (x == y * y)
	{
		return (y);
	}
	else
	{
		return (square(x, y + 1));
	}
}
