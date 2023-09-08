#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings
 * @s1: pointer character variable
 * @s2: pointer character variable
 * @n: unsigned integer varaible
 * Return: if it fails returns null otherwise a pointer
 *	allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int sz1 = 0, sz2 = 0, x = 0, y = 0;
	char *concat;

	if (s1 == 0)
	{
		s1 = "";
	}
	if (s2 == 0)
	{
		s2 = "";
	}
	while (s1[sz1] != '\0')
	{
		sz1++;
	}
	while (s2[sz2] != '\0')
	{
		sz2++;
	}
	if (n >= sz2)
		n = sz2;
	concat = malloc(sz1 + n + 1);

	if (concat == 0)
	{
		return ('\0');
	}
	while (s1[x] != '\0')
	{
		concat[x] = s1[x];
		x++;
	}
	while (y < n)
	{
		concat[x] = s2[y];
		x++;
		y++;
	}
	concat[x] = '\0';
	return (concat);
}
