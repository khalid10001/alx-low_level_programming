#include "3-calc.h"

/**
 * main - check the code
 * @argc: argument number
 * @argv: argument vector
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int (*opera)(int, int);
	int a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	opera = get_op_func(argv[2]);

	if (opera == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if (!b && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", opera(a, b));
	return (0);
}
