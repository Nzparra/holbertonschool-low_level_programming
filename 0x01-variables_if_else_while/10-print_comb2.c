#include <stdio.h>
/**
 * Description : main - Prints number of base 10
 * Return: 0 if all its ok.
 */
int main(void)
{

	int b = 0;
		while (b <= 99)
		{
			putchar((b / 10) + '0');
			putchar((b % 10) + '0');
			if (b != 99)
			{
				putchar(',');
				putchar(' ');
			}
			b++;
		}
		putchar('\n');
		return (0);
}
