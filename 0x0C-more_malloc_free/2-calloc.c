#include "main.h"
#include <stdlib.h>

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
	char *p = s;
	int i = 0;

	while (n > 0)
	{
		s[i] = b;
		n--;
		i++;
	}
	return (p);
}

/**
 * _calloc - a function that allocates memory for an array,
 *		using malloc
 * @nmemb: unsigned integer variable
 * @size: unsigned integer variable
 * Return: If nmemb or size is 0 returns null also
 *	otherwise a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *calloc;

	if (nmemb == 0 || size == 0)
	{
		return ('\0');
	}
	calloc = malloc(sizeof(int) * nmemb);

	if (calloc == 0)
	{
		return ('\0');
	}
	_memset(calloc, 0, sizeof(int) * nmemb);
	return (calloc);
}
