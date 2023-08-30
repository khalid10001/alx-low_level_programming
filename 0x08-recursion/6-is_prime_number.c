#include "main.h"

/**
 * is_prime_number - a function that returns 1 if the input
 *	integer is a prime number, otherwise return 0
 * @n: integer variable
 * is_prime - checking if it is prime number
 * @y: integer variable
 * Return: if it is prime number return 1 otherwise 0
 */
int is_prime(int n, int y);
int is_prime_number(int n)
{
	return (is_prime(n, 2));
}

/**
 * is_prime - checking if it is prime number
 * @n: integer variable
 * @y: integer variable
 * Return: if it is prime number return 1 otherwise 0
 */
int is_prime(int n, int y)
{
	if (y >= n && n > 1)
	{
		return (1);
	}
	else if (n % y == 0 || n <= 1)
	{
		return (0);
	}
	else
	{
		return (is_prime(n, y + 1));
	}
}
