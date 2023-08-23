#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array of integers
 * @a: pointer to reverse
 * @n:  number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int x = 0, y = n - 1, temp;

	while (x < y)
	{
		temp = a[x];
		a[x] = a[y];
		a[y] = temp;
		x++;
		y--;
	}
}
