#include "holberton.h"
/**
 * get_endianness - Check the endiannes
 * Return: 0 big endian or 1 little endian
 */
int get_endianness(void)
{
	unsigned int c = 1;

	return ((int) (((char *)&c)[0]));
}
