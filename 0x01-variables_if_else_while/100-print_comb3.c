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
		int b = 48;

		for (; b < 58; b++)
		{
			if (a < b)
			{
				putchar(a);
				putchar(b);
				if (a != 56 || b != 57)
				{
					putchar(44);
					putchar(32);
				}

			}
			else
			{
			}
		}
	};

	putchar('\n');
	return (0);
}
