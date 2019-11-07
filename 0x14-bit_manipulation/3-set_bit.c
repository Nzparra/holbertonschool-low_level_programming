#include "holberton.h"
#include <stdio.h>
/**
 * set_bit - Sets the value of a int to 1
 * @n : int
 * @index : index
 * Return: 1 if ok else -1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int size, c;

	size = sizeof(n) * 8 - 1;
	if (index > size)
	{
		return (-1);
	}
	c = 1 << index;
	*n = c | *n;
	return (1);
}
