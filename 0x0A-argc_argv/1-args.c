#include <stdio.h>

/**
 * main - a program that prints the number of arguments passed into it
 * @argc: integer variable
 * @argv: pointer character variable with array
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc);
	return (0);
}
