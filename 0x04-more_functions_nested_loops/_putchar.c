#include <unistd.h>
#include "main.h"

/**
 * _putchar - write the charater
 *
 * @c: print character variable
 * Return: 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
