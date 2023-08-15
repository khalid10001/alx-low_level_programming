#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char str[] = "_putchar";
	int i = 0;

	while (i <= 7)
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
