#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initializes a variable of type struct dog
 * @d: Pointer to the struct dog variable to be initialized
 * @name: Pointer to a string representing the dog's name
 * @age: Float representing the dog's age
 * @owner: Pointer to a string representing the dog owner's name
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
{
	exit(EXIT_FAILURE);
}

d->name = name;
d->age = age;
d->owner = owner;
}
