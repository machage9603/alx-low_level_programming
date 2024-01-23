#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 * Return: Pointer to the newly created dog_t structure
 * NULL if the function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog_ptr;

	if (name == NULL || owner == NULL)
		return (NULL);

	new_dog_ptr = malloc(sizeof(dog_t));

	if (new_dog_ptr == NULL)
		return (NULL);

	new_dog_ptr->name = strdup(name);
	new_dog_ptr->owner = strdup(owner);

	if (new_dog_ptr->name == NULL || new_dog_ptr->owner == NULL)
	{
		free(new_dog_ptr->name);
		free(new_dog_ptr->owner);
		free(new_dog_ptr);
		return (NULL);
	}

	new_dog_ptr->age = age;

	return (new_dog_ptr);
}
