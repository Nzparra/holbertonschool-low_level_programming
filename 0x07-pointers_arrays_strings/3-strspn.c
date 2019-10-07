#include "holberton.h"
/**
  * _strspn - Function gets the lenght of a prefix substring
  * @s : Initial segment
  * @accept : Consist char
  * Return: Return the number of bytes in the initial segment
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int c;
	unsigned int d;

	for (c = 0; s[c] != '\0'; c++)
	{
		for (d = 0; accept[d] != '\0' && s[c] != accept[d]; d++)
		{}
		if (accept[d] == '\0')
		{
			return (c);
		}

	}
	return (c);
}
