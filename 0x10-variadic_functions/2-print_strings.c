#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - Funtcion that prints strings
 * @n: Count of number to sum
 * @separator: The string to be printedbetweem
 * Return: NULL
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int c;
	va_list string;
	char *antslid;

	if (separator == NULL)
	{
		separator = "";
	}
	va_start(string, n);
	c = 0;
	while (c < n)
	{
		antslid = va_arg(string, char *);
		if (c != n - 1)
		{
			if (antslid == NULL)
			{
				antslid = "(nill)";
			}
			printf("%s%s", antslid, separator);
		}
		else
		{
			if (antslid == NULL)
			{
				antslid = "(nill)";
			}
			printf("%s", antslid);
		}
		c++;
	}
	va_end(string);
	printf("\n");
}
