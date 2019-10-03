#include "holberton.h"
/**
  * *_strncat - Concat two strings with n bytes
  * @dest : string 1
  * @src : string 2
  * @n : bytes from src
  * Return: Result of concat in dest.
  */
char *_strncat(char *dest, char *src, int n)
{
	int c;
	int d;

	for (c = 0; dest[c] != '\0' ; c++)
	{}
	for (d = 0; d < n && src[d] != '\0' ; d++)
	{
		dest[c] = src[d];
		c++;
	}
	dest[c] = '\0';
	return (dest);
}

