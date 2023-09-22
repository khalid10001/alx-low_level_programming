#include <stdio.h>

void __attribute__((constructor)) construct(void);

/**
 * construct - a function that prints before the main function is executed
 */
void construct(void)
{
	printf("You're beat! and yet, you must allow,\n"
	"I bore my house upon my back!\n");
}
