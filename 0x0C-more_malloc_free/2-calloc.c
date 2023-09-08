#include "main.h"
#include <stdlib.h>

/**
 * _calloc - a function that allocates memory for an array,
 *		using malloc
 * @nmemb: unsigned integer variable
 * @size: unsigned integer variable
 * Return: If nmemb or size is 0 returns null also
 *	otherwise a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *calloc, i = 0;

	if (nmemb == 0 || size == 0)
	{
		return ('\0');
	}
	calloc = malloc(sizeof(int) * nmemb);

	if (calloc == 0)
	{
		return ('\0');
	}
	while (nmemb != 0)
        {
                calloc[i] = 0;
                i++;
               nmemb--;
        }
	return (calloc);
}
