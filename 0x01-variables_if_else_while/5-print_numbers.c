#include <stdio.h>

/**
 * main - Prints single variable numbers
 *in a single line
 * Return: 0
 */
int main(void)
{
	int a = 0;

	for (; a < 10; a++)
	{
		printf("%d", a);
	}
	putchar('\n');
	return (0);
}
