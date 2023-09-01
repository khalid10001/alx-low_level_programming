#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the minimum number of
 *	coins to make change for an amount of money
 * @argc: integer variable
 * @argv: pointer character variable with array
 * Return: if its error returns 1 otherwise 0
 */
int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int i, m = atoi(argv[1]), lc = 0;
		int cent[] = {25, 10, 5, 2, 1};

		for (i = 0; i < 5; i++)
		{
			if (m >= cent[i])
			{
				lc = lc + m / cent[i];
				m = m % cent[i];
				if (m % cent[i] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", lc);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
