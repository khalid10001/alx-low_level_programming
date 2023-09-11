#include "dog.h"

/**
 * init_dog - a function that initialize a variable of
 *		type struct dog
 * @d: pointer struct variable
 * @name: pointer name variable
 * @age: float variable
 * @owner: pointer variable
 * Return: 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
