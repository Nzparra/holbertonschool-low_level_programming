#include "holberton.h"
/**
  * _strstr - Function that searches a string
  * @haystack : string
  * @needle : character to match
  * Return: Pointer to the byte s that matches
  */
char *_strstr(char *haystack, char *needle)
{
	if (*needle == 0)
	{
		return ((char *)haystack);

	}
	if (*haystack == 0)
	{
		return (0);
	}
	if (*haystack == *needle && _strstr(haystack + 1, needle + 1) == haystack + 1)
	{
		return ((char *)haystack);
	}
	return (_strstr(haystack + 1, needle));
}

