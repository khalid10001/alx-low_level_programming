#include "main.h"

/**
 * infinite_add -  a function that adds two numbers
 * @n1: character variable first number
 * @n2: character variable second number
 * @r: result
 * @size_r: result size
 * Return: returns a pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int x = 0, y = 0, b = 0, z, n, m, carry = 0;

	while (n1[x] != '\0')
		x++;
	while (n2[y] != '\0')
		y++;
	if (x > y)
		b = x;
	else
		b = y;
	r[b] = '\0';
	z = b - 1;
	while (z >= 0)
	{
		x--;
		y--;
		if (x >= 0)
			n = n1[x] - '0';
		else
			n = 0;
		if (y >= 0)
			m = n2[y] - '0';
		else
			m = 0;
		r[z] = (n + m + carry) % 10 - '0';
		carry = (n + m + carry) / 10;
	}
	if (carry == 1)
	{
		r[b + 1] = '\0';
		if (b + 2 > size_r)
			return (0);
		while (b-- >= 0)
			r[b + 1] = r[b];
		r[0] = carry + '0';
	}
	return (r);
}
