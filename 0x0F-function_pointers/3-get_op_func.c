#include "3-calc.h"
/**
 * get_op_func - Checks the correct function to after operate
 * @s: String to compare to the operator
 * Return: Pointer to the function
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}};
	int i;

	i = 0;
	while (i < 5)
	{
		if (*s == *(ops[i]).op)
		{
			return (ops[i].p);
		}
		i++;
	}
	return (ops[i].p);
}
