#include "main.h"

/**
 * _strchr -  a function that locates a character in a string
 * @s: pointer character variable
 * @c: character variable
 * Return: null
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] >= '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
	return ('\0');
}
