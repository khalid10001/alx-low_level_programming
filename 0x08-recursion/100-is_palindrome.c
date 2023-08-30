#include "main.h"

/**
 * is_palindrome - a function that returns 1 if a string
 *	is a palindrome and 0 if not
 * @s: pointer character variable
 * palindrome - a function checks whether it is palindrome
 * @i: integer variable
 * @j: integer variable
 * Return: if it is palindrome returns 1 otherwise 0.
 */
int palindrome(char *s, int i, int j);
int is_palindrome(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (palindrome(s, 0, len - 1));
}

/**
 * palindrome - a function checks whether it is palindrome
 * @s: pointer character variable
 * @i: integer variable
 * @j: integer variable
 * Return: if it is palindrome returns 1 otherwise 0.
 */
int palindrome(char *s, int i, int j)
{
	if (i >= j)
	{
		return (1);
	}
	else if (s[i] != s[j])
	{
		return (0);
	}
	else
	{
		return (palindrome(s, i + 1, j - 1));
	}
}
