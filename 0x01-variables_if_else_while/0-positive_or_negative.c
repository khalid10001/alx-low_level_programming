#include <stdio.h>
#include <stdlib.h>

/*
 * main - if else statement
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	scanf("%d", &n);

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
