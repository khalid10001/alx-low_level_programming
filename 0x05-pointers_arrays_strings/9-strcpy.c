#include "main.h"

/**
 * _strcpy - a function that copies the string pointed
 * @dest: character variable
 * @src: character variable
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
