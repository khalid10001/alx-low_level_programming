#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal
 *
 * @n: int character
 */
void print_diagonal(int n)
{
	int i, s;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (s = 2; s <= i; s++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
