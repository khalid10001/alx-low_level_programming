#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked -  a function that allocates memory using malloc
 * @b: unsigned integer variable
 * Return: a pointer to the allocated memory otherwise null
 */
void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);

	if (p == 0)
	{
		exit(98);
	}
	return (p);
}
