#include "main.h"

/**
 * print_alphabet - use the _putchar function for printing
 *		a - z alphabets in lowercase
 */

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
}
