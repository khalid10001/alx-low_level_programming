#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generate password
 *
 * Return: Always 0.
 */
int main(void)
{
	int s;
	char c;

	srand(time(NULL));
	do
	{
		c = rand() % 128;
		s = s + c;
		putchar(c);
	}
	while (s <= 2645);
	putchar(2772 - s);
	putchar('\n');
	return (0);
}
