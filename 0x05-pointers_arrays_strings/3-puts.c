#include "main.h"
#include <unistd.h>
/**
 * _puts - a function prints a string
 * @str: character for a string
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
