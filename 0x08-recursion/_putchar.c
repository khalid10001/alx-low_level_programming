#include "main.h"
#include <unistd.h>

/**
 * _putchar - a function write the characters
 * @c: character variable
 * Return: the write function
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
