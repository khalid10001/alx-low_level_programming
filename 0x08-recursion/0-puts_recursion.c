#include "main.h"

/**
 * _puts_recursion - a function that prints a string
 * @s: pointer character variable
 */
void _puts_recursion(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
