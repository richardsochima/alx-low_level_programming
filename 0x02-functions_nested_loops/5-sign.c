#include "main.h"
#include <stdio.h>
/**
 * print_sign - checks if an interger input is positive negative of zero
 * @n: the number to be tested
 * Return: 1 if positive -1 if negative and 0 if 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
