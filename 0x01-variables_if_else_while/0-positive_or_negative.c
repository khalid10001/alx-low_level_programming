#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * main - if else statement
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 0)
	{
		printf("%u is negative\n", n);
	}
	else if (n == 0)
	{
		printf("%u is zero\n", n);
	}
	else if (n > 0)
	{
		printf("%u is positive\n", n);
	}
	return (0);
}
