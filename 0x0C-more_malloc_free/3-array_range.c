#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - Function that creates an array of integers
 * @min: Value min
 * @max: Value max
 * Return: Pointer to newly created array
 */
int *array_range(int min, int max)
{
	int *p;
	int c;

	if (min > max)
	{
		return (NULL);
	}
	p = malloc((max - min + 1) * sizeof(*p));
	if (p == NULL)
	{
		return (NULL);
	}
	for (c = 0; min <= max; c++)
	{
		p[c] = min++;
	}
	return (p);
}
