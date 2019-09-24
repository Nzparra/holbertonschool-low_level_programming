#include "holberton.h"
/**
  * Description : _isalpha - checks alphabetic character
  * @c: Int that be analized
  * Return: 0 if all its ok.
  */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
	return (0);
	}
}
