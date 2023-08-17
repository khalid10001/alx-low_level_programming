#include <stdio.h>

/**
 * main - print the numbers from 1 to 100
 *	Fizz is for divisible 3 and Buzz for divisible 5
 *	and 15 is for both 3 and 5
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i != 100)
		{
			printf(" ");
		}
		else
		{
		printf("\n");
		}
	}
	return (0);
}
