#include "holberton.h"
/**
  * _atoi - Print a number
  * @s : char to evaluate
  * Return: Always 0.
  */
int _atoi(char *s)
{
	int negative;
	int l;
	int number;

	number = 0;
	negative = 1;
	for (l = 0 ; s[l] != '\0'; l++)
	{
		if (s[l] == '-')
		{
			negative = negative * -1;
		}
		if (s[l] >= '0' && s[l] <= '9')
		{
			number = (number * 10) + s[l] - '0';
			if (s[l + 1] < '0' || s[l + 1] > '9')
			{
				break;
			}
		}
	}
	return (number * negative);
}
