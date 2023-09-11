#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - a function that creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner name
 */
dog_t *new_dog(char *name, float age, char *owner)
{
        dog_t *nd;

        if (name == NULL || age < 0 || owner == NULL)
        {
                return ('\0');
        }

        nd = malloc(sizeof(dog_t));
        if (nd == NULL)
        {
                return ('\0');
        }

        nd->name = malloc(sizeof(char) * strlen(name) + 1);
        if(nd->name == NULL)
        {
                free(nd);
                return ('\0');
        }

        nd->owner = malloc(sizeof(char) * strlen(owner) + 1);
        if(nd->owner == NULL)
        {
                free(nd->name);
                free(nd);
                return ('\0');
        }

        nd->name = strcpy(nd->name, name);
        nd->age = age;
        nd->owner = strcpy(nd->owner, owner);

	return (nd);
}
