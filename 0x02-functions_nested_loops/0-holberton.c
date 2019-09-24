#include "holberton.h"
/**
   * Description : main - Prints a message with a new line
   * Return: 0 if all its ok.
   */
int main(void)
{
	char str[] = "Holberton";
	int i = 0;

	for (i = 0 ; i < 9 ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
	return (0);
}
