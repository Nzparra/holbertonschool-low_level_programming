#include "holberton.h"
#include <stdlib.h>
/**
 * argstostr- Concatenates all the arguments
 * @ac: Count
 * @av: Pointer to a pointer to main
 * Return: Null
 */
char *argstostr(int ac, char **av)
{
	int c;
	int d;
	int e;
	char *a;
	char *b;

	if (ac == 0  || av == NULL)
	{
		return (NULL);
	}
	for (c = 0, d = 0; c < ac; c++)
	{
		for (e = 0; *(*(av + c) + e); d++, e++)
		{}
		d++;
	}
	d++;
	a = malloc(d * sizeof(char));
	if (a == NULL)
	{
		return (NULL);
	}
	b = a;
	for (c = 0; c < ac; c++)
	{
		for (e = 0; av[c][e]; e++)
		{
			*a = av[c][e];
			a++;
		}
		*a = '\n';
		a++;
	}
	return (b);
}
