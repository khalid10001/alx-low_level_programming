#include "main.h"

/**
 * _isupper - uppercase function
 * @c: printing character
 *
 * Return: if c is uppercase returns 1 otherwise 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
