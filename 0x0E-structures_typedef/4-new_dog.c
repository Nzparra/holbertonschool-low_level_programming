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
	int c, d;
	char *name1, *owner1;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	dante = malloc(sizeof(struct dog));
	if (dante == NULL)
	{
		return (NULL);
	}
	for (c = 0; name[c] != '\0'; c++)
	{}
	for (d = 0; owner[d] != '\0'; d++)
	{}
	name1 = malloc(sizeof(char) * c + 1);
	if (name1 == NULL)
	{
		free(dante);
		return (NULL);
	}
	owner1 = malloc(sizeof(char) * d + 1);
	if (owner1 == NULL)
	{
		free(name1);
		free(dante);
		return (NULL);
	}
	for (c = 0; name[c] != '\0'; c++)
	{
		name1[c] = name[c];
	}
	name1[c] = '\0';
	for (c = 0; owner [c] != '\0'; c++)
	{
		owner1[c] = owner[c];
	}
	owner1[c] = '\0';
	dante->name = name1;
	dante->age = age;
	dante->owner = owner1;
	return (dante);

}
