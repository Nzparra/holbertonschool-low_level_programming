#include <stdio.h>
/**
 * Description : main - Prints number of base 10
 * Return: 0 if all its ok.
 */
int main(void)
{
	int a = '0';
	int b = '0';
	int c = '0';

		while (a <= '9')
		{
			while (b <= '9')
			{
				while (c <= '9')
				{
				if ((a < b && b < c && a != b && b != c))
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (a == '7' && b == '8' && c == '9')
					{
						putchar('\n');
					}
					else
					{
					putchar(',');
					putchar(' ');
					}
				}
				c++;
				}
			c = '0';
			b++;
			}
		b = '0';
		a++;
		}
	return (0);
}
