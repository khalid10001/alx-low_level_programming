#include"main.h"

/**
 * main - Entry point
 *
 * Return: (0) indecates Success
*/
int main(void)
{
	int fib1 = 0, fib2 = 1, s;
	float total;

	while (1)
	{
		s = fib1 + fib2;
		if (s > 4000000)
		{
			break;
		}
		if ((s % 2 == 0))
		{
			total = total + s;
		}

		fib1 = fib2;
		fib2 = s;
	}
	printf("%.0f\n", total);
	return (0);
}
