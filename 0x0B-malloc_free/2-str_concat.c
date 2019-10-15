#include "holberton.h"
#include <stdlib.h>
/**
 * str_concat - concat two strings
 * @s1: string1
 * @s2: string2
 * Return: Null size == 0 or concat
 */
char *str_concat(char *s1, char *s2)
{
	int size1;
	int size2;
	int c;
	int d;
	char *p;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	for (size1 = 0; s1[size1]; size1++)
	{}
	for (size2 = 0; s2[size2]; size2++)
	{}
	p = malloc((size1 * sizeof(*s1)) + (size2 * sizeof(*s2) + 1));
	for (c = 0, d = 0 ; c < (size1 + size2 + 1); c++)
	{
		if (c < size1)
		{
			p[c] = s1[c];
		}
		else
		{
			p[c] = s2[d++];
		}
	}
	return (p);
}
