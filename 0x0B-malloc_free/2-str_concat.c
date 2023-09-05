#include "main.h"
#include <stdlib.h>
/**
 * str_concat - a function that concatenates two strings.
 * @s1: character variable
 * @s2: character variable
 * Return: null
 */
char *str_concat(char *s1, char *s2)
{
	int size1 = 0, size2 = 0, i;
	char *p;

	if (s1 == 0 || s2 == 0)
	{
		return ('\0');
	}
	while (s1[size1] != '\0')
	{
		size1++;
	}
	while (s2[size2] != '\0')
	{
		size2++;
	}
	p = (char *) malloc(sizeof(char) + 1 * (size1 + size2));

	if (p == 0)
	{
		return ('\0');
	}
	for (i = 0; i <= size1 + size2; i++)
	{
		if (i < size1)
		{
			p[i] = s1[i];
		}
		else
		{
			p[i] = s2[i - size1];
		}
	}
	p[i] = '\0';
	return (p);
}
