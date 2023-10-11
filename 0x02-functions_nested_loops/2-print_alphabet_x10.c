#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - prints the string _putchar;
 * Return: void
 */
void print_alphabet_x10(void)
{
	int j = 0;

	while (j < 10)
	{
		int i = 97;

		while (i < 123)
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
		j++;
	}

}
