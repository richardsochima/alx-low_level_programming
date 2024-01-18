#include "main.h"
#include <stdio.h>
/**
 * _isalpha - this function checks if its parameter is lower case or uper case
 * @c: the parameter in form of an int
 * Return: 1 if lowercase and 0 if something else
 */

int _isalpha(int c)
{
	if ((c  >= 97 && c <= 122) || (c  >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
