#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * f_char - a function that print character .
 * @separator: separator string
 * @arg: argument
 * Return: 0.
 */
void f_char(char *separator, va_list arg)
{
	printf("%s%c", separator, va_arg(arg, int));
}

/**
 * f_int - a function that print integer
 * @separator: separator string
 * @arg: argument
 * Return: 0.
 */
void f_int(char *separator, va_list arg)
{
	printf("%s%d", separator, va_arg(arg, int));
}

/**
 * f_float - a function that print float
 * @separator: separator string
 * @arg: argument
 * Return: 0.
 */
void f_float(char *separator, va_list arg)
{
	printf("%s%f", separator, va_arg(arg, double));
}

/**
 * f_string - a function that print string
 * @separator: separator string
 * @arg: argument
 * Return: 0.
 */
void f_string(char *separator, va_list arg)
{
	char *s;

	s = va_arg(arg, char *);
	if (s == NULL)
	{
		printf("(nil)");
	}
	printf("%s%s", separator, s);
}

/**
 * print_all -  a function that prints anything
 * @format: arguments format string
 * Return: 0.
 */
void print_all(const char * const format, ...)
{

	va_list arg;
	int i = 0, j;
	char *separator = "";

	fm fms[] = {
		{"c", f_char},
		{"i", f_int},
		{"f", f_float},
		{"s", f_string}
		};

	va_start(arg, format);
	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (fms[j].p[0] == format[i])
			{
				fms[j].f(separator, arg);
				separator = ", ";
			}
			j++;
		}
	i++;
	}
	printf("\n");
	va_end(arg);
}
