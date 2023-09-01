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
	int s = 0;
	char *c;

	while (--argc)
	{
		c = argv[argc];
		while (*c)
		{
			if (*c < 48 || *c > 57)
			{
				printf("Error\n");
				return (1);
			}
			c++;
		}
		s += atoi(argv[argc]);
	}
	printf("%d\n", s);
	return (0);
}
