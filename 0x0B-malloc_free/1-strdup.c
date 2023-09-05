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
	int i, size = 0;

	if (str == 0 || p == 0)
	{
		return ('\0');
	}
	while (str[size] != '\0')
	{
		size++;
	}
	for (i = 0; i < size; i++)
	{
		p[i] = str[i];
	}
	return (p);
}
