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
	int **p, x = 0, y;

	p = malloc(sizeof(*p) * height);
	if (p == 0 || width <= 0 || height <= 0)
	{
		return ('\0');
	}
	while (x < height)
	{
		p[x] = malloc(sizeof(**p) * width);
		if (p[x] == 0)
		{
			while (x--)
			{
				free(p[x]);
			}
			free(p);
			return ('\0');
		}
		y = 0;
		while (y < width)
		{
			p[x][y] = 0;
			y++;
		}
		x++;
	}
	return (p);
}
