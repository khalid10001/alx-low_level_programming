#include "main.h"

/**
 * _memcpy - a function that copies memory area.
 * @dest: pointer character variable
 * @src: pointer character variable
 * @n: integer variable
 * Return: @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
