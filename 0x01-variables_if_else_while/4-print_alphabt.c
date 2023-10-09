#include <stdio.h>

/**
 * main - Print lowercase alphabets followed by uppercase
 *alphabets and a new line
 * Return: 0
 */
int main(void)
{
	int a = 97;

	for (; a < 123; a++)
	{
		if (a == 101 || a == 113)
			;
		else
			putchar(a);


	}

	putchar('\n');
	return (0);
}
