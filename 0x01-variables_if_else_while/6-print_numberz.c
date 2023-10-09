#include <stdio.h>

/**
 * main - Prints single variable numbers in seperate lines
 * Return: 0
 */
int main(void)
{
	int a = 48;

	for (; a < 58; a++)
		putchar(a);
	for (; a < 58; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
