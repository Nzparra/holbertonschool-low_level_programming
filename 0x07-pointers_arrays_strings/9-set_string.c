#include "holberton.h"
/**
 * set_string - Set the value of a pointer to a char
 * @s : Pointer to a pointer
 * @to : char
 * Return: Always 0.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
