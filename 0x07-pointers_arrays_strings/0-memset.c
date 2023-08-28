#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte
 * @s: pointer character variable
 * @b: character variable
 * @n: unsigned integer variable
 * Return: @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		s[i] = b;
		n--;
		i++;
	}
	return (s);
}
