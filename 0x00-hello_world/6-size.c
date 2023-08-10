#include <stdio.h>

/**
 * main - The size of various types on the computer
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("Size of a char: %c  byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %d  byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %ld  byte(s)\n", (unsigned long)sizeof(li));
	printf("Size of a long long int: %lld  byte(s)\n", (unsigned long)sizeof(lli));
	printf("Size of a float: %f  byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
