#include "holberton.h"
#include <stdio.h>
/**
  * *_strncpy - Copy two strings with n bytes
  * @dest : string 1
  * @src : string 2
  * @n : bytes from src
  * Return: Result of copy in dest.
  */
char *_strncpy(char *dest, char *src, int n)
{
	int d;

	for (d = 0; d < n && src[d] != '\0' ; d++)
	{
		dest[d] = src[d];
	}
	for (; d < n ; d++)
	{
		dest[d] = '\0';
	}
	return (dest);
}

