#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc  - Function that allocates memory for an array
 * @nmemb: string1
 * @size: string2
 * Return: Pointer to newly space in memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int c;

	if (nmemb <= 0 || size <= 0)
	{
		return (NULL);
	}
	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}
	for (c = 0 ; c < (size * nmemb) ; c++)
	{
			p[c] = 0;
	}
	return (p);
}
