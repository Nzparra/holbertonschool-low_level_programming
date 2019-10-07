#include "holberton.h"
/**
  * _memcpy - Function that copies memory area.
  * @dest: Pointer
  * @n: Bytes
  * @src: Memory area
  * Return: Pointer to the memory
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n ; c++)
	{
		dest[c] = src[c];
	}
	return (dest);
}



