#include "holberton.h"
/**
  * _isdigit - checks for is digit
  * @c : char to check
  * Return: 1 if is uppercase , 0 if is other
  */
int _isdigit(char c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
