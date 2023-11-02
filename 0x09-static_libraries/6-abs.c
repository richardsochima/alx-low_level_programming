#include "main.h"
#include <stdio.h>
/**
 * _abs - returns the absolute value of a number
 * @n: the positive or negative input
 * Return: 1 if positive -1 if negative and 0 if 0
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (-1 * n);
	}
}
