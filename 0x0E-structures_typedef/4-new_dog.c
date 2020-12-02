#include "dog.h"
#include <stdlib.h>
/**
 * *new_dog -  create a new dog.
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The name of the dog's owner
 * Return: New dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	int nameLen = 0, ownerLen = 0, c = 0;

	for ( ; name[nameLen]; nameLen++)
		;
	for ( ; owner[ownerLen]; ownerLen++)
		;
	newdog = malloc(sizeof(dog_t));
	if (newdog == '\0')
		return (0);
	newdog->name = malloc((sizeof(char)) * (nameLen + 1));
	if (newdog->name == '\0')
	{
		free(newdog);
		return (0);
	}
	newdog->owner = malloc((sizeof(char)) * (ownerLen + 1));
	if (newdog->owner == '\0')
	{
		free(newdog);
		free(newdog->name);
		return (0);
	}
	for ( ; c < nameLen; c++)
		newdog->name[c] = name[c];
	newdog->name[c] = '\0';
	newdog->age = age;
	for (c = 0; c < ownerLen; c++)
		newdog->owner[c] = owner[c];
	newdog->owner[c] = '\0';
	return (newdog);
}
