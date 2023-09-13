#include <stdio.h>
#include <stdlib.h>

/**
 * main -  prints the opcodes of its own main function
 * @argc: argument number.
 * @argv: argument vector.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	char *p = (char *) main;
	int bytes, i = 0;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	while (i < bytes)
	{
		if (i != bytes - 1)
		{
			printf("%02hhx ", p[i]);
		}
		else
		{
			printf("%02hhx\n", p[i]);
			break;
		}
		i++;
	}
	return (0);
}
