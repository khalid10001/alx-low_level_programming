#include "main.h"
#include <string.h>

/**
 * _strlen_recursion - a function that returns the length of a string
 * @s: pointer character variable
 * Return: length of @s
 */
int _strlen_recursion(char *s)
{
	if (*s < '\0')
	{
		_strlen_recursion(s);
	}
	return (strlen(s));
}
