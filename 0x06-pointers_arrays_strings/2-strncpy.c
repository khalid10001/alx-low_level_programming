#include "main.h"

/**
 * _strncpy - a function that copies a string
 * @dest: pointer to copy
 * @src: pointer to be copied
 * @n: int variable
 * Return: @dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i]; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
