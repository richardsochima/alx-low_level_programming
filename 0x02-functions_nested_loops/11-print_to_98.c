#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints the first n natural numbers
 * @n: the number of natural numbers to be printed
 * Return: void
 */

void print_to_98(int n)
{

	if (n > 98)
	{
		int i = n -1;
		printf("%d ", n);
		while (i >= 98)
		{
			printf("%d ,", i);
			i--;
		}
	}
	else if (n < 98 && n < 0)
	{
	}
	else
	{
		int i = n + 1;
		printf("%d ,", n);
		while (i <= 98 )
		{
			printf("%d ,", i);
		}
	}
}
