#include "main.h"

/**
 * rev_string - a function that reverse the string
 *
 * @s: character string
 */
void rev_string(char *s)
{
	int i, len = 0;

	while (s[len] != '\0')
		len++;
	for (i = len - 1; i >= 0; i--)
	{
		*s = &s[i];
	}
}
