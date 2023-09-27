#include "main.h"
#include <stdio.h>

/**
 * isPrintableASCII - a printable ASCII character
 * @num: integer variable
 * Return: returns 1 if it is true otherwise 0
 */
int isPrintableASCII(int num)
{
	return (num >= 32 && num <= 126);
}

/**
 * printHex - a function that prints hex values
 * @b: character variable
 * @begin: integer variable
 * @end: integer variable
 */
void printHex(char *b, int begin, int end)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		if (x < end)
		{
			printf("%02x", *(b + begin + x));
		}
		else
		{
			printf("  ");
		}
		if (x % 2)
		{
			printf(" ");
		}
	}
}

/**
 * printASCII - a function that prints ascii values
 * @b: character variable
 * @begin: integer variable
 * @end: integer variable
 */
void printASCII(char *b, int begin, int end)
{
	int c, x;

	for (x = 0; x < end; x++)
	{
		c = *(b + x + begin);
		if (!isPrintableASCII(c))
		{
			c = '.';
		}
		printf("%c", c);
	}
}

/**
 * print_buffer - a function that prints a buffer
 * @b: character variable
 * @size: size of buffer
 */
void print_buffer(char *b, int size)
{
	int begin = 0, end;

	if (size > 0)
	{
		while (begin < size)
		{
			if (size - begin < 10)
			{
				end = size - begin;
			}
			else
			{
				end = 10;
			}
			printf("%08x: ", begin);
			printHex(b, begin, end);
			printASCII(b, begin, end);
			printf("\n");
			begin += 10;
		}
	}
	else
	{
		printf("\n");
	}
}
