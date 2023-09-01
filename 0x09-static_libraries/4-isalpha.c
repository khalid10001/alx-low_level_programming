#include "main.h"

/**
 * _isalpha - check the c if its is a lowercase or uppercase
 *
 * @c: checks the input
 *
 * Return: returns 1 if its true otherwise returns 0
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
