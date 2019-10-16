#include "holberton.h"
#include <stdlib.h>
/**
 * word_count - Count all words in the string
 * @str: string to evaluate
 * Return: Count
 */
int word_count(char *str)
{
	int c;
	int count;

	count = 0;
	for (c = 0; str[c]; c++)
	{
		if (*str == ' ')
		{
			str++;
		}
		else
		{
			for (; str[c] && str[c] != ' '; c++)
			{
				str++;
			}
			count++;
		}
	}
	return (count);
}
/**
 * frees - frees memory
 * @string: pointer to free
 * @d: int for loop
 * Return : NULL
 */
void frees(char **string, int d)
{
	for (; d > 0; d--)
	{
		free(string[d]);
	}
	free(string);
}
/**
 * strtow - Function to split string to words
 * @str: String to split
 * Return: Words
 */
char **strtow(char *str)
{
	int c, d, wc, length;
	char **palabras, *guarda_palabra;

	c = d = wc = length = 0;
	if (*str == 0 || str == 0)
	{ return (NULL); }
	wc = word_count(str);
	if (wc == 0)
	{ return (NULL); }
	palabras = malloc((wc + 1) * sizeof(*palabras));
	if (palabras == 0)
	{ return (NULL); }
	for (; *str && c < wc;)
	{
		if (*str == ' ')
		{
			str++;
		}
		else
		{
			guarda_palabra = str;
			for (; *str && *str != ' '; length++, str++)
			{}
			palabras[c] = malloc((length + 1) * sizeof(**palabras));
			if (palabras[c] == 0)
			{
				frees(palabras, c);
				return (NULL);
			}
			for (; *guarda_palabra && *guarda_palabra != ' '; guarda_palabra++, d++)
			{
				palabras[c][d] = *guarda_palabra;
			}
			palabras[c][d] = '\0';
			length = d = 0;
			c++;
			str++;
		}
	}
	return (palabras);
}
