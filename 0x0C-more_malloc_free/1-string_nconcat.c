#include "holberton.h"
#include <stdlib.h>
/**
 * string_nconcat - Concatenates two strings
 * @s1: string1
 * @s2: string2
 * @n: size of concat
 * Return: Pointer to newly space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int size1, loop1, loop2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (size1 = 0; s1[size1]; size1++)
	{}
	p = malloc((size1 + n + 1) * sizeof(*p));
	if (p == NULL)
	{
		return (NULL);
	}
	for (loop1 = 0, loop2 = 0; loop1 < (size1 + n); loop1++)
	{
		if (loop1 < size1)
		{
			p[loop1] = s1[loop1];
		}
		else
		{
			p[loop1] = s2[loop2++];
		}
	}
	p[loop1] = '\0';
	return (p);
}
