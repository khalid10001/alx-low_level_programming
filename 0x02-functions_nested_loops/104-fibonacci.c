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

/**
 * main - Entry point
 * Description: prints the first 98 Fibonacci numbers
 *	starting with 1 and 2 followed by a new line
 * Return: Always 0 (Success)
*/

int main(void)
{
	int count, init;
	unsigned long f1 = 1, f2 = 2, sum;
	unsigned long max = 100000000, f1o = 0, f2o = 0, sumo = 0;

	for (count = 1; count <= 98; count++)
	{
		if (f1o > 0)
			printf("%lu", f1o);
		init = numLength(max) - 1 - numLength(f1);

		while (f1o > 0 && init > 0)
		{
			printf("%d", 0);
			--init;
		}

		printf("%lu", f1);

		sum = (f1 + f2) % max;
		sumo = f1o + f2o + (f1 + f2) / max;
		f1 = f2;
		f1o = f2o;
		f2 = sum;
		f2o = sumo;

		if (count != 98)
			printf(", ");
		else
			printf("\n");
	}

	return (0);
}
