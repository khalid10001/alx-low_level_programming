#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a function that returns a pointer to a newly
 *	allocated space in memory, which contains a
 *	copy of the string given as a parameter.
 * @str: pointer character variable
 * Return: if str is 0 returns null otherwise returns str
 */
char *_strdup(char *str)
{
	char *p = (char *) malloc(sizeof(*str) + 1 * 7);
	int i;

	if (str == 0 || p == 0)
	{
		return ('\0');
	}
	for (i = 0; i < 7; i++)
	{
		p[i] = str[i];
	}
	return (p);
}
