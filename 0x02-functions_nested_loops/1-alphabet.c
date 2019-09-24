#include "holberton.h"
/**
  * Description : print_alpabhet - Prints lower case alphabet
  * Return: null
  */
void print_alphabet(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}

