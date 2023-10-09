#include <stdio.h>

/**
 * main - Print lowercase alphabets followed by uppercase
 *alphabets and a new line
 * Return: 0
 */
int main(void)
{
	int a = 48;

	for (; a < 58; a++)
	{
		putchar(a);
		if (a == 57)
		{

		}
		else
		{
			putchar(44);
			putchar(32);
		}
	}

	putchar('\n');
	return (0);
}
