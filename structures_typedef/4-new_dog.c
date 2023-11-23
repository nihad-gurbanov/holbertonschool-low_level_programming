#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 *
 * @name: pointer to dog name
 * @age: dog age
 * @owner: pointer to dog owner
 *
 * Return: pointer to new created dog
 **/


dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog_ptr;


	if (name == NULL || owner == NULL)
		return (NULL);

	new_dog_ptr = malloc(sizeof(dog_t));

	if (new_dog_ptr == NULL)
		return (NULL);


	new_dog_ptr->name = malloc(strlen(name) + 1);
	if (new_dog_ptr->name == NULL)
	{
		free(new_dog_ptr);
		return (NULL);
	}

	strcpy(new_dog_ptr->name, name);

	new_dog_ptr->age = age;

	new_dog_ptr->owner = malloc(strlen(owner) + 1);
	if (new_dog_ptr->owner == NULL)
	{
		free(new_dog_ptr->name);
		free(new_dog_ptr->owner);
		free(new_dog_ptr)
		return (NULL);
	}

	strcpy(new_dog_ptr->owner, owner);

	return (new_dog_ptr);


}
