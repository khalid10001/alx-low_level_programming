#include "main.h"
#include <string.h>

/**
 * _strlen_recursion - a function that returns the length of a string
 * @s: pointer character variable
 * Return: length of @s
 */
int _strlen_recursion(char *s)
{
	if (*s > '\0')
	{
		return (strlen(s));
	}
	else
	{
		_strlen_recursion(s);
	}
	return (0);
}
