#include "holberton.h"
/**
  * *string_toupper - lowercase to uppercase
  * @c : char to upper
  * Return: c upper
  */
char *string_toupper(char *c)
{
	int d;

	for (d = 0; c[d] != '\0' ; d++)
	{
		if (c[d] >= 97 && c[d] <= 122)
		{
			c[d] = c[d] - 32;
		}
	}
	return (c);
}

