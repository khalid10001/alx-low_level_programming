#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n: constant integer variable
 * Return: returns the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, s = 0;

	va_list arg;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		s += va_arg(arg, int);
	}
	va_end(arg);
	return (s);
}
