#include "main.h"

/**
 * _strspn - a function that gets the length of a substring
 * @s: pointer character variable
 * @accept: pointer character variable
 * Return: x
 */
unsigned int _strspn(char *s, char *accept)
{
	int x, y;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != s[x]; y++)
		{
			if (accept[y] == '\0')
			{
				return (x);
			}
		}
	}
	return (x);
}
