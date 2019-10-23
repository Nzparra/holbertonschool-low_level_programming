#include "3-calc.h"
/**
 * main - Calculator with simple operations
 * @argc: Count the arguments
 * @argv: Value of the arguments
 * Return: 0 if all is ok
 */

int main(int argc, char *argv[])
{
	char basics_ops;
	int num1, num2;
	char *math_operator;
	int (*pt)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	basics_ops = argv[2][0];
	if (basics_ops != '+' && basics_ops != '-' && basics_ops != '*'
	&& basics_ops != '/' && basics_ops != '%')
	{
		printf("Error\n");
		exit(99);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	math_operator = argv[2];
	if ((basics_ops == '/' || basics_ops == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	pt = get_op_func(math_operator);
	printf("%d\n", (*pt)(num1, num2));
	return (0);

}
