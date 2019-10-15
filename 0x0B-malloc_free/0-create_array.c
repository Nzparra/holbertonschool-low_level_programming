#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - Creates an array of chars
 * @c: char to initializes
 * @size: the size of the memory to print
 *
 * Return: Null size == 0 or pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int d;
	char *p;

	p = malloc(size * sizeof(*p));
	if (size == 0 || p  == NULL)
	{
		return (NULL);
	}
	for (d = 0; d < size; d++)
	{
		p[d] = c;
	}
	return (p);
}
