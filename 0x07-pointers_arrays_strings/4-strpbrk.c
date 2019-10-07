#include "holberton.h"
/**
  * _strpbrk - Function that searches a string
  * @s : string
  * @accept : character to match
  * Return: Pointer to the byte s that matches
  */
char *_strpbrk(char *s, char *accept)
{
	int c;

	for (; *s != '\0'; s++)
	{
		for (c = 0; accept[c] != '\0'; c++)
		{
			if (*s == accept[c])
			{
				return (s);
			}
		}
	}
	return (0);
}



