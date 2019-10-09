#include "holberton.h"
/**
 * wildcmp - Compare two strings
 * @s1 : char1
 * @s2 : char2
 * Return: 1 if the string can be identical, else 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	if (*s2 == '*')
	{
		if (*(s1 + 1) != '\0' && *s2 == '\0')
		{
			return (0);
		}
		if (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2))
		{
			return (1);
		}
	}
	return (0);
}
