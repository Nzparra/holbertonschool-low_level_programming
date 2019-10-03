#include "holberton.h"
/**
  * *_strcat - Concat two strings
  * @dest : string 1
  * @src : string 2
  * Return: Result of concat in dest.
  */
char *_strcat(char *dest, char *src)
{
	int c;
	int d;

	for (c = 0; dest[c] != '\0' ; c++)
	{}
	for (d = 0; src[d] != '\0' ; d++)
	{
		dest[c] = src[d];
		c++;
	}
	dest[c] = '\0';
	return (dest);
}

