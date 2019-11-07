#include "holberton.h"
/**
 * flip_bits - Returns the number of bits you need to flip
 * @n : number
 * @m : number
 * Return: Number of byte.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int c;
	unsigned int d;

	c = (n ^ m);
	d = 0;
	while (c != 0)
	{
		if ((c & 1) == 1)
		{
			d++;
		}
		c = c >> 1;
	}
	return (d);

}
