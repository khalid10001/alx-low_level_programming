#include "main.h"

/**
 * islower - a functinction with lowercase
 * @c: chracter variable
 * Return = @c;
 */
int is_lower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * is_separator - checks if a character is separator
 * @c: character variable
 * Return: if its true returns 1 otherwise 0
 */
int is_separator(char c)
{
	char separators[] = " \t\n,;.!?\"(){}";
	int i;

	for (i = 0; i <= 13; i++)
	{
		if (c == separators[i])
		{
			return (1);
		}
	}
	return (0);
}


/**
 * cap_string - a function that capitalizes all words of a string
 * @str: pointer variable change the words to capital
 * Return: @str
 */
char *cap_string(char *str)
{
	char *ptr = str;
	int separator = 1;

	while (*str != '\0')
	{
		if (is_separator(*str))
		{
			separator = 1;
		}
		else if (is_lower(*str) && separator)
		{
			*str = *str - 32;
			separator = 0;
		}
		else
		{
			separator = 0;
		}
		str++;
	}
	return (ptr);
}
