#include "main.h"

/**
 * _isdigit - digit number function
 *
 * @c: printing character
 *
 * Return: if its digit from 0 through 9 returns 1 otherwise 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
