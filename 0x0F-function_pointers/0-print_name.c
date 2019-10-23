#include "function_pointers.h"
/**
 *print_name - Function that prints a name
 *@name: The name to print
 *@f : Pointer to a function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
	{
		f(name);
	}
}
