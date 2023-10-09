#include <stdio.h>

/**
 * main - Print lowercase alphabets followed by uppercase
 *alphabets and a new line
 * Return: 0
 */
int main(void)
{
	int a = 97;
	int b = 65;

	for (; a < 123; a++)
		putchar(a);
	for (; b < 91; b++)
		putchar(b);
	putchar('\n');
	return (0);
}
