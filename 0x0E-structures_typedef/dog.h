#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a struct dog
 *
 * @name: dog name
 * @age: dog age
 * @owner: dog owner name
 *
 * Description: To store information about the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
