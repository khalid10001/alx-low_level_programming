#include"main.h"

/**
 * numLength - returns the length number of the word
 * @n: number
 * Return: number of digits
*/
int numLength(int n)
{
	int length = 0;

	if (!n)
		return (1);

	while (n)
	{
		n = n / 10;
		length += 1;
	}

	return (length);
}

/**
 * main - Entry point
 *
 * Description: prints the first 98 Fibonacci numbers
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i, init;
	unsigned long x1 = 1, x2 = 2, s;
	unsigned long max = 100000000, y1 = 0, y2 = 0, s1 = 0;

	for (i = 1; i <= 98; i++)
	{
		if (y1 > 0)
			printf("%lu", y1);
		init = numLength(max) - 1 - numLength(x1);

		while (y1 > 0 && init > 0)
		{
			printf("%d", 0);
			--init;
		}

		printf("%lu", x1);

		s = (x1 + x2) % max;
		s1 = y1 + y2 + (x1 + x2) / max;
		x1 = x2;
		y1 = y2;
		x2 = s;
		y2 = s1;

		if (i != 98)
			printf(", ");
		else
			printf("\n");
	}

	return (0);
}
