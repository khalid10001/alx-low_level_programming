#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a = 'a';
	char b = 'f';
	char c = 'r';
	while (a <= 'd')
	{
		putchar(a);
		a++;
	}
	while (b <= 'p')
	{
		putchar(b);
		b++;
	}
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
