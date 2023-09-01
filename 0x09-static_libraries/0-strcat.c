#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 * @dest: pointer to concat
 * @src: pointer to be concated
 * Return: @dest
 */
char *_strcat(char *dest, char *src)
{
	int i, len = 0;

	while (dest[len] != '\0')
	{
		len++;
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len++] = src[i];
	}
	dest[len++] = '\0';
	return (dest);
}
