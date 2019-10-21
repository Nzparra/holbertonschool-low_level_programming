#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - Creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Name of the owner
 * Return: Pointer Dante
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *dante;
	int c, d, e, f;
	char *name1, *owner1;

	dante = malloc(sizeof(struct dog));
	if (dante == NULL)
	{
		return (NULL);
	}
	for (c = 0; name[c]; c++)
	{}
	for (d = 0; owner[d]; d++)
	{}
	name1 = malloc(sizeof(*name1) * c + 1);
	if (name1 == NULL)
	{
		free(dante);
		return (NULL);
	}
	owner1 = malloc(sizeof(*owner1) * d + 1);
	if (owner1 == NULL)
	{
		free(name1);
		free(dante);
		return (NULL);
	}
	for (e = 0; e <= c; e++)
	{
		name1[e] = name[e];
	}
	for (f = 0; f <= d; f++)
	{
		owner1[d] = owner[d];
	}
	dante->name = name1;
	dante->age = age;
	dante->owner = owner1;
	return (dante);

}
