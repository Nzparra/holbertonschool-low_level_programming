#include "holberton.h"
/**
  * *cap_string - Capitalize
  * @c : char to Capitalize
  * Return: c upper
  */
char *cap_string(char *c)
{
	int d;

	for (d = 0; c[d] != '\0' ; d++)
	{
		if (c[d - 1] == 11 || c[d - 1] == '\n' || c[d - 1] == '\t' || c[d - 1] == ' '
		|| c[d - 1] == ',' || c[d - 1] == ';' || c[d - 1] == '.'
		|| c[d - 1] == '!' || c[d - 1] == '?' || c[d - 1] == '"'
		|| c[d - 1] == '(' || c[d - 1] == ')' || c[d - 1] == '{'
		|| c[d - 1] == '}')
		{
			if (c[d] >= 97 && c[d] <= 122)
			{
				c[d] = c[d] - 32;
			}
		}
	}
	return (c);
}

