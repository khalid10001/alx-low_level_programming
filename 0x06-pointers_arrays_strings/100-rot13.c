#include "main.h"

/**
 * rot13 - a function that encodes a string using rot13
 * @s: pointer variable character
 * Return: p
 */
char *rot13(char *s)
{
	char *p = s;
	char ROT13[52] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char rot13[52] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};
	int i;

	while (*s != '\0')
	{
		for (i = 0; i <= 52; i++)
		{
			if (*s == ROT13[i])
			{
				*s = rot13[i];
				break;
			}
		}
		s++;
	}
	return (p);
}
