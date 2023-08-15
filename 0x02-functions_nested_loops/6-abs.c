#include "main.h"

/**
 * _abs - function computes the absolute value of the integer argument
 *
 * @n: checks the input function
 *
 * Return: return n if its less than 0
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
	}
	return (n);
}
