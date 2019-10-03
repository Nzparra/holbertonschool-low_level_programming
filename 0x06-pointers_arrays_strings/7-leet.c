#include "holberton.h"
/**
  * *leet - Encodes a string
  * @e : Char to encode
  * Return: e encode
  */
char *leet(char *e)
{
	int d;
	int c;
	char letters[] = "aAeEoOtTlL";
	char replace[] = "4433007711";

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

