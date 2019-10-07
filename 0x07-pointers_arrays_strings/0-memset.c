#include "holberton.h"
/**
  * _memset - Function that fills memory with a constant byte
  * @b: Constant byte
  * @n: First n Bytes
  * @s: Pointer s
  * Return: Pointer to the memory
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n ; c++)
	{
		s[c] = b;
	}
	return (s);
}



