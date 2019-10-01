#include "holberton.h"
/**
 * puts2 - Print a string
 * @str : print the string
 * Return: Always 0.
 */
void puts2(char *str)
{
	int i;
	char b;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		b = str[i];
		_putchar(b);
	}
	_putchar('\n');
}

