#include "main.h"

/**
 * puts_half - a function thats print a half string
 * @str: character string
 */
void puts_half(char *str)
{
	int i, len = 0;

	while (str[len] != '\0')
		len++;
	len++;
	for (i = len / 2; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
