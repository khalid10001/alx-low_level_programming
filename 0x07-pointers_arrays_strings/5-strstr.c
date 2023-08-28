#include "main.h"

/**
 * _strstr - a function that locates a substring
 * @haystack: pointer character variable
 * @needle: pointer character variable
 * Return: 0.
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	while (haystack[i] != '\0')
	{
		int j = 0;

		while (haystack[i] == needle[j] && needle[j] != '\0')
		{
			return (&haystack[i]);
			j++;
		}
		i++;
	}
	return (0);
}
