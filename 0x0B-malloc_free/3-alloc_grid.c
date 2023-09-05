#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - a function that returns a pointer to
 *	a 2 dimensional array of integers
 * @width: integer variable
 * @height: integer variable
 * Return: If width or height is 0 or negative, return NULL
 *	otherwise pointer to the 2-dimensional array of integers
 */
int **alloc_grid(int width, int height)
{
	int **tab, x = 0, y;

	tab = malloc(sizeof(*tab) * height);
	if (tab == 0 || width <= 0 || height <= 0)
	{
		return ('\0');
	}
	while (x < height)
	{
		tab[x] = malloc(sizeof(**tab) * width);
		if (tab[x] == 0)
		{
			while (x--)
			{
				free(tab[x]);
			}
			free(tab);
			return ('\0');
		}
		y = 0;
		while (y < width)
		{
			tab[x][y] = 0;
			y++;
		}
		x++;
	}
	return (tab);
}
