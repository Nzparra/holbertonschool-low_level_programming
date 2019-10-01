#include "holberton.h"
/**
  * print_rev - Reverse a string
  * @s : String to evaluate
  * Return: Null
  */
void print_rev(char *s)
{
	int c;
	char car;

	for (c = 0; s[c] != 0; c++)
	{}
	for (c = c - 1; c >= 0; c--)
	{
		car = s[c];
		_putchar(car);
	}
	_putchar('\n');
}
