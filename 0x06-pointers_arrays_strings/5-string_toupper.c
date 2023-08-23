#include "main.h"

/**
 * string_toupper - a function that changes all lowercase letters to uppercase
 * @str: pointer variable changing lowercase to uppercase
 * Return: @str
 */
char *string_toupper(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
