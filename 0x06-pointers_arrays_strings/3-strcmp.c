#include "holberton.h"
#include <stdio.h>
/**
  * *_strcmp - Compares two strings
  * @s1 : string 1
  * @s2 : string 2
  * Return: Result of copy in dest.
  */
int _strcmp(char *s1, char *s2)
{
	int d;

	for (d = 0; s1[d] != '\0' ; d++)
	{
		return (s1[d] - s2[d]);
	}
	return (0);
}

