#include "3-calc.h"

/**
 * get_op_func - the function that selects the correct function to perform
 * @s: pointer character variable operator
 * Return: if s does not match any of the operators returns null
 *	otherwise returns a pointer to the function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i = 0;

	while (i < 5)
	{
		if (s != NULL && s[0] == ops[i].op[0] && !s[1])
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
