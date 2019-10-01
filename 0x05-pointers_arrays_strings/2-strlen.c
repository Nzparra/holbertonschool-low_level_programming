#include "holberton.h"
/**
  * _strlen - Returns the lenght of a string
  * @s : String to evaluate
  * Return: lon.
  */
int _strlen(char *s)
{
	int lon = 0;

	while (*s != '\0')
	{
		s++;
		lon++;
	}
	return (lon);

}
