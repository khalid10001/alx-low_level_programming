#include <stdio.h>
#include <stdlib.h>

/**
 * main -  a program that multiplies two numbers
 * @argc: integer variable
 * @argv: pointer character variable with array
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int i, s = 1;

	if (argc != 1)
	{
		for (i = 1; i < argc; i++)
		{
			s *= atoi(argv[i]);
		}
		printf("%d\n", s);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (0);
	}
}
