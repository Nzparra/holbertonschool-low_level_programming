#include <stdio.h>
/**
 * Description : main - Prints a number and if is positive or negative
 * Return: 0 if all its ok.
 */
int main(void)
{
	char l;
	char n = '0';
		for (n = '0'; n <= '9'; ++n)
			putchar(n);
		for (l = 'a'; l <= 'f'; ++l)
			putchar(l);
		putchar('\n');
		return (0);
}
