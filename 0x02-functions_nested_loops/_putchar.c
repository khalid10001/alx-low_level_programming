#include <unistd.h>
#include "main.h"

/**
 * _putchar - function write the character c
 *
 * @c: printing character
 *
 * Return: Always 0 (Success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
