#include <stdio.h>
/**
 * Description : main - Prints the alphabet in lowercase, and then in uppercase
(* 
 * Return: 0 if all its ok.
 */
int main(void)
{
	char l;
		for (l = 'a'; l <= 'z'; ++l)
			putchar(l);
		for (l = 'A'; l<= 'Z' ; ++l)
			putchar(l);
		putchar('\n');
		return (0);
}
