#include <stdio.h>

/**
 * main - Print lowercase alphabets in reverse followed
 *by a new line
 * Return: 0
 */
int main(void)
{
	int a = 122;

	for (; a > 96; a--)
		putchar(a);
	putchar('\n');
	return (0);
}
