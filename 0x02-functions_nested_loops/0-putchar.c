#include <stdio.h>
#include "main.h"
/**
 * main - prints the string _putchar;
 * Return: 0
 */
int main(void)
{
	int i = 0;
	char array[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};

	while (array[i] != '\0')
	{
		_putchar(array[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
