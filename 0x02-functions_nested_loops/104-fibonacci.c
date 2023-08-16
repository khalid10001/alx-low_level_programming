#include"main.h"

/**
 * numLength - returns the length of string
 * @n: operand number
 * Return: number of digits
*/
int numLength(int n)
{
	int length = 0;

	if (!n)
		return (1);

	while (n)
	{
		n = n / 10;
		length += 1;
	}

	return (length);
}
