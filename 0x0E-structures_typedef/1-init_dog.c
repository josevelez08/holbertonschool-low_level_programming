#include "dog.h"
/**
 * init_dog - Short description
 * @d: pointer of dog type
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	
	if (d == '\0')
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
