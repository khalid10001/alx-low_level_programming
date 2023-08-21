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
		write(1, &str[i], 1);
	}
	_putchar('\n');
}
