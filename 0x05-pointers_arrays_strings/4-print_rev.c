#include "main.h"

/**
 * print_rev - print the string in reverse way
 * @s: character string
 */
void print_rev(char *s)
{
	int len = 0;

	while (s[len])
	{
		len++;
	}
	while (len--)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}
