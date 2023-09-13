#include "3-calc.h"

/**
 * op_add - addition function that add between two numbers
 * @a: first integer variable
 * @b: second integer variable
 * Return: returns the sum of two integers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction function that subtract between two numbers
 * @a: first integer variable
 * @b: second integer variable
 * Return: returns the difference of two integers
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication function that multiply between two numbers
 * @a: first integer variable
 * @b: first integer variable
 * Return: returns the product of two integers
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division function that divide between two numbers
 * @a: first integer variable
 * @b: second integer variable
 * Return: returns the division of two integers
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - module function that module between two numbers
 * @a: first integer variable
 * @b: second integer variable
 * Return: return the remainder of the division of two integers
 */
int op_mod(int a, int b)
{
	return (a % b);
}
