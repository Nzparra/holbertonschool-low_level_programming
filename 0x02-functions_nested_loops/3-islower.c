# include "holberton.h"
/**
  * Description : _islower - Prints and checks for lowercase character
  * @c: Int that be analized
  * Return: 0 if all its ok.
  */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
