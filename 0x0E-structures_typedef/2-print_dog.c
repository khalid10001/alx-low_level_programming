#include "dog.h"
#include <stdio.h>

/**
 * print_dog - a function that prints a struct dog
 * @d: pointer struct variable
 * Return: 0.
 */
void print_dog(struct dog *d)
{
	if (d->name == 0)
	{
		printf("Name: (nil)");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}
	if (d->age == 0)
	{
		printf("Age: (nil)");
	}
	else
	{
		printf("Age: %f\n", d->age);
	}
	if (d->owner == 0)
	{
		printf("Owner: (nil)");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}
	if (d == 0)
	{
		return;
	}
}

