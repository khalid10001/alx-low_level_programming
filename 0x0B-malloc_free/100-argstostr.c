#include "main.h"
#include <stdlib.h>

/**
 * argstostr - a function that concatenates all the
 *	arguments of your program
 * @ac: integer variable
 * @av: double pointer integer variable
 * Return: if ac == 0 or av == NULL returns null
 *	otherwise pointer to a new string
 */
char *argstostr(int ac, char **av)
{
	char *p;
	int size = 0, x = 0, y, z = 0;

	if (ac == 0 || av == NULL)
	{
		return ('\0');
	}
	while (x < ac)
	{
		y = 0;
		while (av[x][y] != '\0')
		{
			size++;
			y++;
		}
		size++;
		x++;
	}
	p = malloc(sizeof(char) + 1 * size);

	if (p == 0)
	{
		return ('\0');
	}
	x = 0;
	while (x < ac)
	{
		y = 0;
		while (av[x][y] != '\0')
		{
			p[z] = av[x][y];
			y++;
			z++;
		}
		p[z] = '\n';
		z++;
		x++;
	}
	return (p);
}
