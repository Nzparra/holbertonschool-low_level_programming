#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * Description : main - Prints a number and if is positive or negative
 * Return: 0 if all its ok.
 */
int main(void)
{
		int n;
		int l;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
				l = n % 10;
				if (n == 0)
				{
					printf("Last digit of %d is %d and is 0\n", n, l);
				}
				else
				{
					if (n > 6)
					{
						printf("Last digit of %d is %d and is greater than 5\n", n, l);
					}
					else
					{
						printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);
					}

				}
				return (0);
}