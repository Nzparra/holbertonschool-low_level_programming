#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - Initialize a variable of type dog
 * @d: pointer
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Name of the owner
 * Return: Always 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
