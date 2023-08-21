#include "main.h"

/**
 * swap_int - a function that swaps the value two integer number
 * @a: integer number
 * @b: integer number
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
