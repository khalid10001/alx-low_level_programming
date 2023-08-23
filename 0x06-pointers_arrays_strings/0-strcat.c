#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 * @dest: pointer to concat
 * @src: pointer to be concated
 * Return: @dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		i++;
	}

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i++] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
