#include "main.h"

/**
 * get_endianness - a function that checks the endianness
 * Return: 1 if small endian otherwise 0 big endian
 */
int get_endianness(void)
{
	unsigned long int x = 1;
	char *k = (char *)&x;

	if (*k)
	{
		return (1);
	}
	return (0);
}
