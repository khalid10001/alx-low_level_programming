#include <stdio.h>
#include <stdlib.h>

/**
 * main -  a program that multiplies two numbers
 * @argc: integer variable
 * @argv: pointer character variable with array
 * Return: if its error returns 1 otherwise 0
 */
int main(int argc, char *argv[])
{
	int i, s = 1;

	if (argc == 3)
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
		return (1);
	}
}
