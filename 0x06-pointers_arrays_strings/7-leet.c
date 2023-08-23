#include "main.h"

/**
 * leet - a function that encodes a string into 1337
 * @s: pointer character variable
 * Return: @s
 */
char *leet(char *s)
{
	char *p = s;
	char keys[5] = {'a', 'e', 'o', 't', 'l'};
	int codes[5] = {4, 3, 0, 7, 1};
	int i;

	while (*s != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*s == keys[i] || *s == keys[i] - 32)
			{
				*s = codes[i] + 48;
			}
		}
		s++;
	}
	return (p);
}
