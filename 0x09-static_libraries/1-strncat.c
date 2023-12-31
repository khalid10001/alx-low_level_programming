#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 * @dest: pointer to concat
 * @src: pointer to be concated
 * @n: input number for concating
 * Return: @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, len = 0;

	while (dest[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + i] = '\0';
	return (dest);
}
