#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that adds positive numbers
 * @argc: integer variable
 * @argv: pointer character variable with array
 * Return: if its error returns 1 otherwise 0
 */
int main(int argc, char *argv[])
{
	int i, s = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) <= 0)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
			s += atoi(argv[i]);
			}
		}
		printf("%d\n", s);
		return (0);
	}
	else if (argc < 1)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("0\n");
		return (0);
	}
}
