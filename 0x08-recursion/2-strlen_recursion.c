#include "holberton.h"
/**
 * _strlen_recursion - Prints a Pointer
 * @s : Pointer
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{

	if (*s == '\0')
	{
		return (0);
	}
	s = s + 1;
	return (_strlen_recursion(s) + 1);
}
