#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - a function that prints numbers, followed by a new line
 * @separator: constant pointer character variable
 * @n: constant integer variable
 * Return: 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;

	if (separator == NULL)
	{
		separator = "";
	}
	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arg, int));
		if ( i != n - 1)
		{
		printf("%s", separator);
		}
	}
	printf("\n");
	va_end(arg);
}
