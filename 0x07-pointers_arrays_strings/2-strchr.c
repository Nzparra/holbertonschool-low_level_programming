#include "holberton.h"
/**
  * _strchr - Function that locates a character in a string
  * @s : string
  * @c : character to match
  * Return: Pointer to the 1 occurrence of c in s or NULL if is not found
  */
char *_strchr(char *s, char c)
{

	for (; *s != '\0'; s++)
	{
		if (*s == c)
		{
			return (s);
		}
		else if (*(s + 1) == c)
		{
			return (s + 1);
		}
	}
	return (s + 1);
}



