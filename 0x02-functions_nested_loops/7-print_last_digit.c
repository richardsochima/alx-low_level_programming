#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - prints the last digit of a number
 * @a: the positive or negative int input
 * Return: 1 if positive -1 if negative and 0 if 0
 */

int print_last_digit(int a)
{
	int b;
	int c;

	if (a >= 0)
	{
		b = a % 10;
		_putchar('0' + b);
		return (b);
	}
	else
	{
		b = (a % 10);
		c = -1 * b;
		_putchar('0' + c);
		return (c);
	}
	return (0);
}
