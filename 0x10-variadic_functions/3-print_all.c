#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * p_char - Funtcion that prints chars
 * @inputs: Inputs to the function
 */
void p_char(va_list inputs)
{
	printf("%c", va_arg(inputs, int));
}
/**
 * p_integer - Function that prints integer
 * @inputs: Inputs to the function
 */
void p_integer(va_list inputs)
{
	printf("%d", va_arg(inputs, int));
}
/**
 * p_float - Functions that prints float
 * @inputs: Inputs to the function
 */
void p_float(va_list inputs)
{
	printf("%f", va_arg(inputs, double));
}
/**
 * p_string - Function that prints string
 * @inputs: Inputs to the function
 */
void p_string(va_list inputs)
{
	char *ps;

	ps = va_arg(inputs, char *);
	ps == NULL ? printf("(nil)") : printf("%s", ps);
}
/**
 * print_all - Function that prints anything
 * @
 * @format : Formtat to print
 */
void print_all(const char * const format, ...)
{
	va_list inputs;
	int c, e;

	li types[] = {
		{"c", p_char},
		{"i", p_integer},
		{"f", p_float},
		{"s", p_string},
		{NULL, NULL}};
	va_start(inputs, format);

	c = 0;
	while (format && format[c])
	{
		e = 0;
		while (types[e].f)
		{
			if (*(types[e].f) == format[c])
			{
				types[e].d(inputs);
				if (format[c + 1] != '\0')
				{
					printf(", ");
				}
			}
			e++;
		}
		c++;
	}
	va_end(inputs);
	printf("\n");

}
