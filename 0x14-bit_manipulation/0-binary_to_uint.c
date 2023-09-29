#include "main.h"

/**
 * binary_to_uint - a function that converts a binary number to integer
 * @b: constant character variable
 * Return: returns the converted number otherwise 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;

	if (b == 0)
	{
		return (0);
	}
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		res = res * 2 + (*b++ - '0');
	}
	return (res);
}
