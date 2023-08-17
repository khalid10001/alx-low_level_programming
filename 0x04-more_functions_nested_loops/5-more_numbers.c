#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14
 */
void more_numbers(void)
{
	int x = 0, y, n;

	while (x < 11)
	{
		y = 0;
		while (y < 15)
		{
			n = y;
			if (y > 9)
			{
				n = y % 10;
				_putchar(1 + 48);
			}
			_putchar(n + 48);
			y++;
		}
		_putchar('\n');
		x++;
	}
}
