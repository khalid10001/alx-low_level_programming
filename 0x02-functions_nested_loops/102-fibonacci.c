#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	long fib1 = 0, fib2 = 1, s;

	for (i = 0; i < 50; i++)
	{
		s = fib1 + fib2;
		printf("%lu", s);

		fib1 = fib2;
		fib2 = s;
		if (i == 49)
		{
			printf("\n");
		}
		else
		{
			printf(", ");
		}
	}
	return (0);
}
