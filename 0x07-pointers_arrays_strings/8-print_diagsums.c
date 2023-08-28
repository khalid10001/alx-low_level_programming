#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - a function that prints the sum of the two diagonals
 *		of a square
 * @a: pointer character variable
 * @size: integer varaible
 */
void print_diagsums(int *a, int size)
{
	int i, r = 0, l = 0;

	for (i = 0; i < size; i++)
	{
		r = r + a[i];
		l = l + a[size - i - 1];
		a = a + size;
	}
	printf("%d, ", r);
	printf("%d\n", l);
}
