#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup - duplicate the string
 * @str: string
 * Return: Null size == 0 or pointer to the array
 */
char *_strdup(char *str)
{
	int size;
	int d;
	char *p;

	if (str == NULL)
	{
		return (NULL);
	}
	for (size = 0; str[size]; size++)
	{}
	p = malloc(size * sizeof(*p) + 1);
	for (d = 0; d < size; d++)
	{
		p[d] = str[d];
	}
	p[d] = '\0';
	return (p);
}
