#include <stdio.h>
/**
  * Description : main - Prints the sum of multiples of 3 and 5
  * Return: 0 if all its ok.
  */
int main(void)
{
	int a;
	int c;

	c = 0;
	for (a = 3; a <= 1024; a++)
	{
		if (a % 3 == 0 || a % 5 == 0)
		{
			c = c + a;
		}
	}
	printf("%d\n", c);
	return (0);
}
