#include "main.h"
#include <stdlib.h>
/**
 * create_array - a function that creates an array of chars,
 *	and initializes it with a specific char.
 * @size: integer variable
 * @c: character variable
 * Return: if size is 0 returns null otherwise pointer
 *	of the array
 */
char *create_array(unsigned int size, char c)
{
	char *p = (char *) malloc(size);

	if (size == 0 || p == 0)
	{
		return ('\0');
	}
	while (size--)
	{
		p[size] = c;
	}
	return (p);
}
