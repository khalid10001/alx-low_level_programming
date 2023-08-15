#include "main.h"

/**
 * _islower - returns 1 if c is lowercase otherwise 0
 *
 * @c: checks the input of the function
 *
 * Return: returns 1 if its true otherwise return 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
