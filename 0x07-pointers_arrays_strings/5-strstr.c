#include "holberton.h"
/**
  * match - Function that searches a string
  * @haystack : string
  * @needle : character to match
  * Return: Pointer to the byte s that matches
  */
int match(char *haystack, char *needle)
{
	while (*haystack && *needle && *haystack != '\0' && *needle != '\0')
	{
		if (*haystack != *needle)
		{
			return (0);
		}
		haystack++;
		needle++;
	}
	return (*needle == '\0');
}
/**
  * _strstr - Function that searches a string
  * @haystack : string
  * @needle : character to match
  * Return: Pointer to the byte s that matches
  */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		if ((*haystack == *needle) && match(haystack, needle))
		{
			return (haystack);
		}
		haystack++;
	}
	return (0);
}
