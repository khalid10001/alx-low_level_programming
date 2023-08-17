#include "main.h"

/**
 * print_triangle - a function that prints a triangle, followed by a new line
 *
 * @size: integer variable
 */
void print_triangle(int size)
{
	int x, y, z;

	if (size > 0)
	{
		for (x = 1; x <= size; x++)
		{
			for (y = 1; y <= (size - x); y++)
			{
				_putchar(' ');
			}
			for (z = 1; z <= x; z++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
