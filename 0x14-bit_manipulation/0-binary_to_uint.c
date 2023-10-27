#include "main.h"

/**
 * binary_to_uint - a function that converts binary number to an unsigned int
 * @b: binary number
 *
 * Return: the converted number otherwise 0 if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int x = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')

			return (0);

		x = x * 2 + (*b++ - '0');
	}

	return (x);
}
