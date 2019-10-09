#include "holberton.h"
/**
 * _puts_recursion  - Prints a Pointer
 * @s : Pointer
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
	if (s[0] != '\0')
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}