#include "holberton.h"
/**
  * rev_string - Save the Reverse a string
  * @s : String to evaluate
  * Return: Null
  */
void rev_string(char *s)
{
	int c;
	int d;
	char l;

	d = 0;
	for (c = 0; s[c] != 0; c++)
	{}
	c = c - 1;
	for (; d < c; d++)
	{
		l = s[c];
		s[c] = s[d];
		s[d] = l;
		c--;
	}
}
