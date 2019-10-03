#include "holberton.h"
/**
  * *rot13 - Encodes a string in rot13
  * @e : Char to encode
  * Return: e encode
  */
char *rot13(char *e)
{
	int d;
	int c;
	char letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char replace[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (d = 0; e[d] != '\0' ; d++)
	{
		for (c = 0 ; letters[c]; c++)
		{
			if (e[d] == letters[c])
			{
				e[d] = replace[c];
			}
		}
	}
	return (e);
}

