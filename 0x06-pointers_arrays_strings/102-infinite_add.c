#include "holberton.h"
/**
  * infinite_add - adds two numbers
  * @n1: number one
  * @n2: number two
  * @r: Buffer that the function will use to store the result
  * @size_r: Is the buffer size
  * Return: r
  */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1, len2, loop1, loop2, num1, num2, add, res, swap, lastn;

	len1 = len2 = loop1 = loop2 = res = 0;
	for (len1 = 0 ; n1[len1] != '\0'; len1++)
	{}
	for (len2 = 0 ; n2[len2] != '\0'; len2++)
	{}
	if (len1 + 2 > size_r || len2 + 2 > size_r)
	{return (0); }
	len1 = len1 - 1;
	len2 = len2 - 1;
	while (len1 >= 0 || len2 >= 0)
	{
		num1 = 0;
		num2 = 0;
		if (len1 >= 0)
		{num1 = n1[len1--] - '0'; }
		if (len2 >= 0)
		{num2 = n2[len2--] - '0'; }
		add = num1 + num2 + res;
		if (add > 9)
		{res = 1;
		add = add - 10; }
		else
		{res = 0; }
		r[loop1++] = add + '0';
	}
	if (res == 1)
	{r[loop1++] = (1 + '0'); }
	lastn = loop1;
	loop1 = loop1 - 1;
	for (loop2 = 0; loop2 < loop1; loop2++, loop1--)
	{
		swap = r[loop1];
		r[loop1] = r[loop2];
		r[loop2] = swap;
	}
	r[lastn] = '\0';
	return (r);
}
