#include "main.h"

/**
 * get_endianness - a function that checks the endianness
 * Return: returns 0 if big endian otherwise 1 if little endian
 */
int get_endianness(void)
{
	unsigned int x;

	return (*(char *)&x);
}
