#include "holberton.h"
/**
  * puts_half - Print the second half of a string
  * @str : String to evaluate
  * Return: Null
  */
void puts_half(char *str)
{
	int c;
	char l;

	for (c = 0; str[c] != 0; c++)
	{}
	if (c % 2 == 0)
	{
		c = c - 1;
	}
	c = (c + 1) / 2;
	for (; str[c] != 0; c++)
	{
		l = str[c];
		_putchar(l);
	}
	_putchar('\n');
}
