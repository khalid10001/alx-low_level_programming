#include "main.h"

/**
 * set_string - a function that sets the value of a pointer to a char
 * @s: pointer to pointer character variable
 * @to: pointer character variable
 */
void set_string(char **s, char *to)
{
	*s = to;
}
