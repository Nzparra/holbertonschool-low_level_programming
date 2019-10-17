#include "holberton.h"
#include <stdlib.h>
/**
 * _realloc - Function that reallocates a memory block
 * @old_size: Old size
 * @new_size: New size
 * @ptr: pointer to the memory prev allocated
 * Return: Pointer to newly created array
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	char *save;
	unsigned int loop;

	if (old_size == new_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
		{
			return (NULL);
		}
		return (p);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	p = malloc(new_size);
	if (p == NULL)
	{
		return (NULL);
	}
	save = ptr;
	for (loop = 0; loop < old_size; loop++)
	{
		p[loop] = save[loop];
	}
	free(ptr);
	return (p);
}
