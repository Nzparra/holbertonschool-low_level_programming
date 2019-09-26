#include "holberton.h"
#include <stdio.h>
/**
  * main - checks for uppercase
  *
  * Return: 1 if is uppercase , 0 if is other
  */
int _isupper(char c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}	
