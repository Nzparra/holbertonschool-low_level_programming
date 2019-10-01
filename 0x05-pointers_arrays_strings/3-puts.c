#include "holberton.h"
/**
 * _puts - Print a string
 * @str : print the string
 * Return: Always 0.
 */
void _puts(char *str)
{
	int i;
	char b;

	for (i = 0; str[i] != '\0'; i++)
	{
		b = str[i];
		_putchar(b);
	}
	_putchar('\n');
}

