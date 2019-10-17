#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked - Allocates memory
 * @b : size
 * Return: Pointer to the allocated memory, exit with 98
 */
void *malloc_checked(unsigned int b)
{
	void *c;

	c = malloc(b);
	if (c == NULL)
	{
		exit(98);
	}
	return (c);

}
