#include <stdio.h>
#include "dog.h"
/**
 * print_dog - Prints a struct dog
 * @d: Structure of dog
 * Return: NULL.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		d->name != NULL ? printf("Name: %s\n", d->name) : printf("Name: (nil\n)");
		printf("Age: %f\n", d->age);
		d->owner != NULL ?
			printf("Owner: %s\n", d->owner) : printf("Owner: (nil\n)");
	}
}
