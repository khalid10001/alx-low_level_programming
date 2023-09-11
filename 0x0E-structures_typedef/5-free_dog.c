#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - a function that frees dogs
 * @d: free dogs
 */
void free_dog(dog_t *d)
{
	if (d == 0)
	{
		if ((*d).name)
		{
			free((*d).name);
		}
		if ((*d).owner)
		{
			free((*d).owner);
		}
		free(d);
	}
}
